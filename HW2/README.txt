*******************************************************
*  Name      :  Alina Burlacu        
*  Student ID:  109129252               
*  Class     :  CSC 2421           
*  HW#       :  2               
*  Due Date  :  June 15, 2022
*******************************************************

                 READ ME

*******************************************************
*  Description of the program
*******************************************************

The program "matrix" reads integers from a data file, and uses
the data to implement two matrices.  It then outputs the matrices,
and computes and outputs the sum and product of the matrices.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions
   to read data from an input file, use the data to create two matrices,
   and compute and display their sum and product.

Name:  matrix.h
   Contains the definition for the class matrix.  

Name: matrix.cpp
   Defines and implements the matrix class for implementing a matrix.  
   This class provides routines to construct and get the matrix, as
   well as overloaded operators to add and multpliply two matrices.

Name: matrix_functions.h
   Contains the prototypes for the matrix program support functions.

Name: matrix_functions.cpp
   Includes functions to display a greeting, populate two arrays
   from a data file, and display the sum and product of two matrices.
   
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on gnu g++ 4.4.2.  It was 
   compiled, run, and tested on gcc csegrid.ucdenver.pvt


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
   
       % unzip alinaBurlacu_HW2.zip

   Now you should see a directory named homework with the files:
        main.cpp
        matrix.h
        matrix.cpp
	    matrix_functions.h
	    matrix_functions.cpp
        makefile
        README.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd HW2

    Compile the program by:
    % make

3. Run the program by:
   % ./hw2

4. Delete the obj files, executables, and core dump by
   %./make clean
