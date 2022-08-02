*******************************************************
*  Name      :  Alina Burlacu
*  Student ID:  109129252
*  Class     :  CSC 2421
*  HW#       :  5
*  Due Date  :  July 17, 2022
*******************************************************

                 READ ME

*******************************************************
*  Description of the program
*******************************************************

The program "HW5" will simulate a car wash and calculate
the arrival time, departure time, and wait time for each
car that came in for a car wash.

*******************************************************
*  Source files
*******************************************************

Name:  Car.cpp
      Contains definition of Car class methods. Car class used to
      keep track of car number, arrival time, and car wash start time

Name:  Car.h
       Contains Car class declaration, function prototypes, private variables

Name: Carwash.cpp
       Defines Carwash class functions. Carwash class used to perform
       calculations for wait time, departure time, and start time for
        next car in line, also prints table with statistics of car wash
        and initializes the Queue DS from an input file.

Name: Carwash.h
       Contains Carwash class declaration, constructors, function prototypes,
      and private variables.

Name: main.cpp
      Contains driver function for initializing Queue of Car type objects.

Name: arrival_time.txt
      Contains arrival times of cars to read in as input for car wash simulation

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
