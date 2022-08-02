*******************************************************
*  Name      :  Alina Burlacu
*  Student ID:  109129252
*  Class     :  CSC 2421
*  HW#       :  6
*  Due Date  :  July 29, 2022
*******************************************************

                 READ ME

*******************************************************
*  Description of the program
*******************************************************

The program "HW6" will read in a text file, create an
array of Student objects from the file, and sort them
by ID number using Insertion Sort algorithm,
then display the list.

*******************************************************
*  Source files
*******************************************************

Name: Student. cpp
     Student class function definitions for constructors, get methods
     and class method for overloading < operator


Name:  Student.h
       Declares Student class, contains function prototypes and variable declarations.
       Includes 3 private member variables:string firstName, string lastName, int id
       Includes Student class default constructor and parameterized constructor prototype.
       Includes 3 'getter' functions to access private class variables.
       Includes overloading function for < operator to compare Student objects by id

Name: main.cpp
      Contains driver function for InsertionSort
      Reads in a text file
      Creates array of student objects from file

Name: input.txt
      Contains list of id numbers, first and last names

*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.

   It was created using JetBrains Clion 2022.1.3
   Build and Run using CMake.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.
   To uncompress it use the following commands

       % unzip [filename].zip

   Now you should see a directory named homework with the files:
      main.cpp
      Car.h
      Car.cpp
	  Carwash.h
	  Carwash.cpp
      >cmake-build-debug
        arrival_time.txt
      readme.txt


2. Build the program.

    Change to the directory that contains the file by:
    % cd [filename]

    Compile the program by:
    % make

3. Run the program by:
   % ./[filename]

4. Delete the obj files, executables, and core dump by
   %./make clean
