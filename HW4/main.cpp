#include <iostream>
#include "Double_Linked_List.h"

using namespace std;

int main()
{
// It will create a linked list object.
    Node* node = new Node();
    node->setValue(4); 

    node->print(node);

// It will add 1 to the list.


// It will add 5 to the list.


// It will add 9 to the list.


// It will add 16 to the list


// It will add 25 to the list.


// It will add 2 to the list.


// It will add 7 to the list.


// It will add 19 to the list.


// It will display the list using the print function. 
//The output will be as follows: 1 2 5 7 9 16 19 25


// It will use the add function to add 10 to the list.


// It will display the list on the screen using the print function. 
//The output will be as follows: 1 2 5 7 9 10 16 19 25


// It will use the current size function to get the number of items in the list and will display the result. The output will be as follows: 
//Number of items in the list is: 9


// It will use the is empty function to check if the list is empty and will display the result. 
//The output will be as follows: List is not empty.


// It will use the remove function to remove 9 from the list.


// It will display the list on the screen using the print function. 
//The output will be as follows: 1 2 5 7 10 16 19 25


// It will use the current size function to get the number of items in the list and will display the result. 
//The output will be as follows: Number of items in the list is: 8


// It will use the find function to find the location (index number) of 16 and display the result. 
//The output will be as follows: Number 16 is located at position 5.


// It will use the find function to find the location (index number) of 9 and display the result. 
//The output will be as follows: Number 9 is not in the list.


// It will use the clear function to remove all items from the list.


// It will use the is empty function to check if the list is empty and will display the result. 
//The output will be as follows: List is empty.


    return 0;
}