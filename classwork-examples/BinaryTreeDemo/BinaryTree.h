//
// Created by lakhanis on 10/23/2019.
//

#ifndef BINARYTREEDEMO_BINARYTREE_H
#define BINARYTREEDEMO_BINARYTREE_H


#include <iostream>

using namespace std;

class BinaryTree
{
public:
    struct TreeNode
    {
        int value;
        TreeNode *left;
        TreeNode *right;
    };
    TreeNode *root;
    void insert(TreeNode *&, TreeNode *&);
    void destroySubTree(TreeNode *);
    void deleteNode(int, TreeNode *&);
    void makeDeletion(TreeNode *&);
    void displayInOrder(TreeNode *);
    void displayPreOrder(TreeNode *);
    void displayPostOrder(TreeNode *);
    int countNodes(TreeNode *&);
public:
    BinaryTree() // Constructor
    { root = NULL; }
    ~BinaryTree() // Destructor
    { destroySubTree(root); }
    void insertNode(int);
    bool searchNode(int);
    void remove(int);
    void displayInOrder()
    { displayInOrder(root); }
    void displayPreOrder()
    { displayPreOrder(root); }
    void displayPostOrder()
    { displayPostOrder(root); }
    int numNodes();
};

#endif //BINARYTREEDEMO_BINARYTREE_H
