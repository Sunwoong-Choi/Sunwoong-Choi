# Symbolic Computing
* In symbolic computing software, also known as computer algebra systems (*CASs*), representations of mathematical objects and
expressions are manipulated and transformed analytically
* Symbolic computing is a great tool for checking and debugging analytical calculations that are done by hand, but more importantly
it enables carrying out analytical that may not otherwise be possible
* It can make a big difference to push the limits for what can be done analytically before resorting to numerical techniques.
  * Instead of tackling a problem in its original form directly using numerical methods, it may be possible to use analytical
  methods to simplify the problem first.

> In the scientific Python environment, the main module for symbolic computing is SymPy.

## Importing SymPy
```Python
In [1] : import sympy
In [2] : sympy.init_printing()
```
* Note that NumPy and SymPy, as well as many other libraries, provide many functions and variables with the same name, but
these symbols are rarely interchangeable.

## Symbols
* A core feautre in SymPy is to represent mathematical symbols as Python Objects
* A symbol by itself is not of much practical use, but symbols are used as nodes in *expression trees* to represent algebraic
expressions.
* In many cases, it is sufficient to represent a mathematical symbol with this abstract, unspecified Symbol object, but sometimes
it is necessary to give the SymPy library more hints about exactly what type of symbol a Symbol object is representing.
* To formulate a nontrivial mathematical problem, it is often necessary to define a large number of symbols, SymPy conatains
a function sympy.symbols creating multiple symbols in one function call.

> Followings are code for above statements.
```Python
In [5]: x = sympy.Symbol("x")                                                                                                                                                                               

In [6]: y = sympy.var("y", real=True)                                                                                                                                                                       

In [7]: y.is_real                                                                                                                                                                                           
Out[7]: True

In [8]: z = sympy.symbols("z", imaginary = True).is_real                                                                                                                                                    

In [9]: z                                                                                                                                                                                                   
Out[9]: False

In [10]: sympy.sqrt(x ** 2)                                                                                                                                                                                 
Out[10]: 
   ____
  ╱  2 
╲╱  x  

In [11]: sympy.sqrt(y ** 2)                                                                                                                                                                                 
Out[11]: │y│

In [12]: z = sympy.symbols("z", positive = True)                                                                                                                                                            

In [13]: z.is_real                                                                                                                                                                                          
Out[13]: True

In [14]: sympy.sqrt( z ** 2)                                                                                                                                                                                
Out[14]: z

In [15]: n1 = sympy.Symbol("n")                                                                                                                                                                             

In [16]: n2 = sympy.Symbol("n", integer = True)                                                                                                                                                             

In [17]: n3 = sympy.var("n", odd = True)                                                                                                                                                                    

In [18]: sympy.cos(n1 * pi)                                                                                                                                                                                 
Out[18]: cos(π⋅n)

In [19]: sympy.cos(n2 * pi)                                                                                                                                                                                 
Out[19]: 
    n
(-1) 

In [20]: sympy.cos(n3 * pi)                                                                                                                                                                                 
Out[20]: -1

In [21]: a, b, c = sympy.symbols("a, b, c", negative  = True)                                                                                                                                               

In [22]: d, e, f = sympy.symbols("d, e, f", postive=True)                                                                                                                                                   

In [23]: sympy.sqrt(a)                                                                                                                                                                                      
Out[23]: √a

In [24]: sympy.sqrt(a ** 2)                                                                                                                                                                                 
Out[24]: -a

In [25]: sympy.sqrt(a ** 3)                                                                                                                                                                                 
Out[25]: 
  3/2
-a   
```

## Numbers

