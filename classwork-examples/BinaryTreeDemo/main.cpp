#include <iostream>
#include <fstream>

using namespace std;
#include"BinaryTree.h"
#include "BinaryTree.cpp"

int main() {
    BinaryTree tree;

    cout<<"\nInserting nodes with 20, 5, 8, 3 12, 9, 12, and 16 "<<endl;;
    tree.insertNode(20);
    tree.insertNode(5);
    tree.insertNode(8);
    tree.insertNode(3);
    tree.insertNode(12);
    tree.insertNode(9);
    tree.insertNode(2);
    tree.insertNode(16);

    cout<<"\nThe number of nodes in the tree is now "<<tree.numNodes() <<endl;;

    cout<<"\nHere are the values in the tree in-order:"<<endl;;
    tree.displayInOrder();

    tree.remove(8);
    tree.remove(12);

    cout<<"\nThe number of nodes in the tree is now "<<tree.numNodes()<<endl;;

    cout<<"\n\nHere are the values in the tree in-order:"<<endl;;
    tree.displayInOrder();

    cout<<"\n\nHere are the values in the tree in post order:"<<endl;;
    tree.displayPostOrder();

    return 0;
}