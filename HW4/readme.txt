*******************************************************
*  Name      :  Alina Burlacu
*  Student ID:  109129252
*  Class     :  CSC 2421
*  HW#       :  4
*  Due Date  :  July 15, 2022
*******************************************************

                 READ ME

*******************************************************
*  Description of the program
*******************************************************

The program "HW4" creates a Doubly Linked List,
performs operations including: add, remove, print, and
clearing the list.

*******************************************************
*  Source files
*******************************************************

Name:   DoublyLinkedList.cpp
   Defines DoublyLinkedList class functions

Name:  DoublyLinkedList.h
    Contains DoublyLinkedList class declaration, function prototypes, private variables

Name: Node.cpp
   Defines Node class functions

Name: Node.h
   Contains Node class declaration, constructors, function prototypes, private variables

Name: main.cpp
    Contains driver function for invoking doubly linked list.


*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.

   It was created using JetBrains Clion 2022.1.2
   Build and Run using CMake.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.
   To uncompress it use the following commands

       % unzip [filename].zip

   Now you should see a directory named homework with the files:
      main.cpp
      DoublyLinkedList.h
      DoublyLinkedList..cpp
	  Node.h
	  Node.cpp
      makefile
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
