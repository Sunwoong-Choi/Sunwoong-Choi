# Vectors, Matrices, and Multidimensional Arrays
* For repetitive computation, it is natural and advantageous to represent the data as arrays, and the computation in terms of
array operations.
* NumPy library, its core is implemented in C and provides efficient functions for manipulating and processing arrays.
  * NumPy bear some resemblace to Python's list data structure, but Python lists are generic containers of objects, NumPy arrays
  are homogenous and typed arrays.
  * NumPy also provides a large collection of basic operators and functions that act on these data structures, as well as
  submodules with higher-level algorithms such as linear algebra and fast Fourier transform.
## Importing the Modules ~ Real and Imaginary parts.
  ```Python 
  In [1]: import numpy as np                                                                                                                                                                                  

  In [2]: data = np.array([[1,2],[3,4],[5,6]])                                                                                                                                                                

  In [3]: type(data)                                                                                                                                                                                          
  Out[3]: numpy.ndarray

  In [4]: data                                                                                                                                                                                                
  Out[4]: 
  array([[1, 2],
         [3, 4],
         [5, 6]])

  In [5]: data.ndim                                                                                                                                                                                           
  Out[5]: 2

  In [6]: data.size                                                                                                                                                                                           
  Out[6]: 6

  In [7]: data.shape                                                                                                                                                                                          
  Out[7]: (3, 2)

  In [8]: data.dtype                                                                                                                                                                                          
  Out[8]: dtype('int64')

  In [9]: data.nbytes                                                                                                                                                                                         
  Out[9]: 48

  In [10]: np.array([1,2,3], dtype=np.int)                                                                                                                                                                    
  Out[10]: array([1, 2, 3])

  In [11]: np.array([1,2,3], dtype=np.float)                                                                                                                                                                  
  Out[11]: array([1., 2., 3.])

  In [12]: np.array([1,2,3], dtype=np.complex)                                                                                                                                                                
  Out[12]: array([1.+0.j, 2.+0.j, 3.+0.j])

  In [13]: data = np.array([1, 2, 3], dtype=np.float)                                                                                                                                                         

  In [14]: data                                                                                                                                                                                               
  Out[14]: array([1., 2., 3.])

  In [15]: data.dtype                                                                                                                                                                                         
  Out[15]: dtype('float64')

  In [16]: data.astype(np.int)                                                                                                                                                                                
  Out[16]: array([1, 2, 3])

  In [17]: d1 = np.array([1, 2, 3], dtype=float)                                                                                                                                                              

  In [18]: d2 = np.array([1, 2, 3], dtype=complex)                                                                                                                                                            

  In [19]: d1 + d2                                                                                                                                                                                            
  Out[19]: array([2.+0.j, 4.+0.j, 6.+0.j])

  In [20]: (d1+d2).dtype                                                                                                                                                                                      
  Out[20]: dtype('complex128')

  In [21]: np.sqrt(np.array([-1, 0, 1]))                                                                                                                                                                      
  /opt/anaconda3/bin/iPython3:1: RuntimeWarning: invalid value encountered in sqrt
    #!/opt/anaconda3/bin/python
  Out[21]: array([nan,  0.,  1.])

  In [22]: np.sqrt(np.array([-1, 0, 1], dtype=complex))                                                                                                                                                       
  Out[22]: array([0.+1.j, 0.+0.j, 1.+0.j])

  In [23]: d2.real                                                                                                                                                                                            
  Out[23]: array([1., 2., 3.])

  In [24]: d2.imag                                                                                                                                                                                            
  Out[24]: array([0., 0., 0.])
  ```
  > Practice is done in terminal.

## Order of Array data in Memory
* How to arrange the array elements in memory segment :
  * store the rows after each other, known as **row-major format** (like C).
    * In NumPy, using the keyword argument order = 'C'
  * store the columns after each other, known as **column-major format** (like Fortan).
    * In NumPy, using the keyword argument order = 'F'

* ndarray.strides defines exactly how this mapping is done.
  * Consider the case, C-order array A with shape (2,3) and data type in int32.
    * then strides return (4x3,4x1) = (12,4)
  * Same array with F-order
    * then strides return (4,8)
* Using strides to describe the mapping of array index to array memory offset is clever because it can be used to describe
different mapping strategies, and many common operations on arrays.
  * For example, *transpose* can be implemented by simply changing the strides attribute.
  * More study needed about tranpose and strides. *
