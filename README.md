## CSCI-2421 (Summer 2022)
### Data Structures &amp; Program Design (C++)
##### @ University of Colorado Denver
---

<ins>List of Assignments:</ins>

- **HW 2:** 
  - The program "HW2" creates vector of initialized `Student` type objects,
    displays the list of Student objects and their attributes,
    creates object of `ComparatorName` and `ComparatorID` class,
    passes the vector and function objects to template function,
    and finally displays results of comparison.
  - Contains findMax Template used to find Student with the largest ID and Student with the largest name. Also contains main() function which creates vector of initialized Student type objects, displays the list of Student objects and their attributes, creates object of `ComparatorName` and `ComparatorID` class,  passes the vector and function objects to template function, and finally displays results of comparison.


- **HW 4:**

    - The program "HW4" creates a `Doubly Linked List`,
      performs operations including: add, remove, print, and
      clearing the list.
    - Includes `DoublyLinkedList` class and Node class to separate functionality
    - Methods include: sorted insert (`add()`, remove a node `(remove()`), find index (`findk()`), clear list (`clear()`), check if list empty (`isEmpty()`), sort list in ascending order (`sort()`), display list in ascending order (`print()`), display index of specified value contained within list (`findPrint()`)

- **HW 5:**


    - The program "HW5" will simulate a car wash and calculate the arrival time, 

        departure time, and wait time for each car that came in for a car wash.

    - Utilizes a `Queue` data structure, reads in data from `arrival_time.txt` file using `<fstream>`

    - Calculates the car wash start time and end time, including the duration of the car wash

    - If a car arrives outside of time of operation for the car wash, it is denied entry

- **HW 6**


    - The program "HW6" will read in a text file, create an array of Student objects from the file, and sort them by ID number using Insertion Sort algorithm, then display the list.
    - Utilizes overloading of the `< operator` to compare the Student objects
    - Reads in data from `input.txt` file using `<fstream>` and  `<sstream>` to parse comma separated strings 