# Introduction to Computing with Python
## Python is a high-level, general-purpose interpreted programming language.
1. Good code readability, rapid code development.
2. Low level program language, such as C or Fortan is necessary to obtain the best pergormance out of the hardware that runs the code
3. Trade-off between high performance and long development time and lower performance but shorter development time.
      * Use a multilanguage model, whre a higl-level language is used to interface libraries(rapid code development) and software packages written in low-level languages(performance of low-level languages).
## Eco-system of Python
   * Environments : IPython console, Jupyter Notebook, ...
   * Python Language : Python2, Python3, ...
   * Python Package : numpy, scipy, matplotlib, ...
   * System and system libraies : OS, BLAS, LAPACK, ...
      ** Users typically only interact the top three layers, but the bottom layer constitutes a very important part of software stack.
## It is also significant that Python is free and open source.

## Environments for Computing with Python
* The Python interpreter or the IPython console
    * lightweight development environment.
* The Jupyter Notebook
    * a web application, all in one documnet.
* The Spyder Integrated Development Environment(IDE)
    * write and interactively run Python code.
## Python
 * The python promgramming language and the standard implementation of the Python interpreter are frequently updated, and made available throught new releases.
## Interpreter
 * The standard way to execute Python code is to run the program
 ** On most systems, the Python interpreter is invoked using the 'python' command.
     ```python
     hello.py
     print("Hello from Python!")
     $ python hello.py
     Hello from Python!
     $ python --version
     Python 3.6.5
     ```
* Specific versions of the Python interpreter are available througth the commands such as, for example, python 2.7 and python 3.6
* Setting up virtual python enviromnent is highly recommended.
* A Python inter preter can also be used as an interactive console(also known as REPL : Read-EValuate-Print-Loop) by entering python at the command prompt.
## IPython Console
* Python interpreter does not by itself provide a satisfactory environment for interactive computing.
 * IPython is and enhanced command-line REPL environment for Python with additional features
  * In fact, IPython is now much more than an enhanced Python command-line interface, for instance, under the hood IPython is a client-server application, which seperates the frontend(user interface) from the backend(kernel) that executes thy Python code.
** IPython installation corresponds to a specific version of Python.
** IPython is used in many different context in scientific computing with Python, for example, as a kernel in the Jupyter Notebook application and in the Spyder IDE
#### A brief overview of some of the IPython features.
## Input and Output Catching
* In the IPython console, the input prompt is the denoted as In[1] : and the corresponding output is denoted as Out[1]:
     ```Python
     In [1]: 3 * 3
     Out[1]: 9
     In [2]: In[1]                     
     Out[2]: '3 * 3'
     In [3]: Out[1]                      
     Out[3]: 9
     In [4]: In                   
     Out[4]: ['', '3 * 3', 'In[1]', 'Out[1]', 'In']
     In [5]: Out
     Out[5]: {1: 9, 2: '3 * 3', 3: 9, 4: ['', '3 * 3', 'In[1]', 'Out[1]', 'In', 'Out']}
     ```
* A single underscore _ is a shorthand notation for referring to the most recent output, and a double underscore __ refers to the output that preceded the most recent output.
     ```Python
     In [6]: 1 + 2                        
     Out[6]: 3
     In [7]: 1 + 2; # output surpressed by the semicolon
     In [8]: x = 1 # no output for assignmnets
     In [9]: x =2 ; x # these are two statements. The value of 'x' is shown in the output                       
     Out[9]: 2
     ```
## Autocompletion and Object introspection.
* In IPython, pressing TAB key activates autocompletion, which displays a list of symbols with names that are valid completions of what has already been typed.
     * contextual, look for matching variables and functions in the current namespace or among the attributes and methods of a class when invoked after the mae of a class instance.
     ```Python
     In[10]: import os
     In[11]: os.w<TAB>
     os.wait os.wait3 os.wait4 os.walk os.write os.writev
     ```
* This feature is called object introspection *(the examining of your own thoughts, ideas, and feelings.)*, it works on midules, classes, and their attributes and methods and on functions and their arguments.
## Documentation
* Object introspection is convenient for exploring the API of a module and its member classes and functions. *(API : Application Programming Interface), together with "docstrings", it provides a bulit-in dynamice reference manual.
* A Python object followed by a question mark displays the documentation string for the object, which is simailar to the Python function help
     ```Python
     In [5]: math.cos?                                                                                                              Signature: math.cos(x, /)
     Docstring: Return the cosine of x (measured in radians).
     Type: builtin_function_or_method
     ```
*(in python 3.7.0)*
* From a developer's point of view, it is convenient to be able to document a code together with the implementation.
## Interactions with the System Shell
* Anything that follows an exclamation mark is evaluated using the system shell (such as bash shell).
     ```Python
     In [21]: !ls                                                                        
     AIPND_Sunwoong_Choi C C++ aipnd_review cat_vocalisation_analysis listentothis_player
     In [22]: files = !ls                                                                                                          In [23]: len(files)
     Out[23]: 6
     ```
     > *Use the IPython console as a system shell.*
     ```Python
     In [25] import os
     In [26] os.chdir("/Users/sunwoong/Desktop/coding/AIPND_Sunwoong_Choi") # change directory.
     In [27]: file = "train.py"
     In [28]: !ls -1 $file 
     train.py
     ```
     > *Pass the values of Python variables to shell commands.*
* This method for interacting with the OS is a very powerful feature that makes it easy to navigate the file system and to use the IPython console as a system shell, espically when processing data files.

## IPython Extensions
