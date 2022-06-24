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

The program "HW2" creates vector of initialized Student type objects, 
displays the list of Student objects and their attributes, 
creates object of ComparatorName and ComparatorID class, 
passes the vector and function objects to template function, 
and finally displays results of comparison.

*******************************************************
*  Source files
*******************************************************

Name:  HW2.cpp
  Contains findMax Template used to find Student with the largest ID and Student with the largest name. Also contains main() function which creates vector of initialized Student type objects, displays the list of Student objects and their attributes, creates object of ComparatorName and ComparatorID class,  passes the vector and function objects to template function, and finally displays results of comparison.

Name:  Student.h
   Declares Student class, contains function prototypes and variable declarations. Includes 3 private member variables: 
   string firstName, string lastName, int id
   Includes Student class default constructor and parameterized constructor prototype. Includes 3 'getter' functions to access private class variables. 
   
   
Name: Student.cpp
   Student class function definitions. 
   Includes parameterized constructor that accepts string type first and last name variables and an int type ID number variable. Class variables are private. Use of get functions allows access to firstName, lastName, and id values. 

Name: Comparator_Name.h
   Contains one public member function used to create a function object in HW2.cpp -> main(). bool type funciton returns True or False value depending on result of operations Purpose of function is to concatenate first + last names of 2 Student class objects and compare them.

Name: Comparator_ID.h
    Contains one public member function used to create a function object in HW2.cpp -> main(). bool type funciton returns True or False value depending on result of operations. Purpose of function is to compare student ID numbers of 2 Student class objects.

   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on gnu g++ 11.2.0  
   It was compiled, run, and tested on gcc csegrid.ucdenver.pvt


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
   
       % unzip [filename].zip

   Now you should see a directory named homework with the files:
      HW2.cpp
      Student.h
      Student.cpp
	   Comparator_ID.h
	   Comparator_Name.cpp
      makefile
      README.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd HW2

    Compile the program by:
    % make

3. Run the program by:
   % ./HW2

4. Delete the obj files, executables, and core dump by
   %./make clean
