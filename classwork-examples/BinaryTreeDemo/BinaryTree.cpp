//
// Created by lakhanis on 10/23/2019.
// Binary Tree Code from
// https://www.cppbuzz.com/programs/c++/implementation-of-binary-tree-using-template-in-c++
//

#include "BinaryTree.h"
void BinaryTree::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
    if (nodePtr == NULL)
    {
// Insert the node.
        nodePtr = newNode;
    }
    else if (newNode->value < nodePtr->value)
    {
// Search the left branch
        insert(nodePtr->left, newNode);
    }
    else
    {
// Search the right branch
        insert(nodePtr->right, newNode);
    }
}
//**********************************************************
// insertNode creates a new node to hold num as its value, *
// and passes it to the insert function. *
//**********************************************************

void BinaryTree::insertNode(int num)
{
    TreeNode *newNode = NULL; // Pointer to a new node.
// Create a new node and store num in it.
    newNode = new TreeNode;
    newNode->value = num;
    newNode->left = newNode->right = NULL;
// Insert the node.
    insert(root, newNode);
}
//***************************************************


// destroySubTree is called by the destructor. It *
// deletes all nodes in the tree. *
//***************************************************
void BinaryTree::destroySubTree(TreeNode *nodePtr)
{
    if (nodePtr->left)
    {
        destroySubTree(nodePtr->left);
    }
    if (nodePtr->right)
    {
        destroySubTree(nodePtr->right);
    }
    delete nodePtr;
}
//***************************************************
// searchNode determines if a value is present in the tree. If so, *
// the function returns true. Otherwise, it returns false. *
//***************************************************
bool BinaryTree::searchNode(int num)
{
    bool status = false;
    TreeNode *nodePtr = root;
    while (nodePtr)
    {
        if (nodePtr->value == num)
        {
            status = true;
        }
        else if (num < nodePtr->value)
        {
            nodePtr = nodePtr->left;
        }
        else
        {
            nodePtr = nodePtr->right;

        }
    }
    return status;
}
//**********************************************
// remove calls deleteNode to delete the *
// node whose value member is the same as num. *
//**********************************************
void BinaryTree::remove(int num)
{
    deleteNode(num, root);
}
//********************************************
// deleteNode deletes the node whose value *
// member is the same as num. *
//********************************************
void BinaryTree::deleteNode(int num, TreeNode *&nodePtr)
{
    if (num < nodePtr->value)
    {
        deleteNode(num, nodePtr->left);
    }
    else if (num > nodePtr->value)
    {
        deleteNode(num, nodePtr->right);
    }
    else
    {
        makeDeletion(nodePtr);
    }
}
//***********************************************************
// makeDeletion takes a reference to a pointer to the node that is to be deleted. *
// The node is removed and the branches of the tree below the node are reattached. *
//***********************************************************

void BinaryTree::makeDeletion(TreeNode *&nodePtr)
{


// Temporary pointer, used in reattaching the left subtree.
    TreeNode *tempNodePtr = NULL;
    if (nodePtr == NULL)
    {
        cout << "Cannot delete empty node.\n";
    }
    else if (nodePtr->right == NULL)
    {
        tempNodePtr = nodePtr;
        nodePtr = nodePtr->left; // Reattach the left child
        delete tempNodePtr;
    }
    else if (nodePtr->left == NULL)
    {
        tempNodePtr = nodePtr;
        nodePtr = nodePtr->right; // Reattach the right child
        delete tempNodePtr;
    }
// If the node has two children.
    else
    {
// Move one node the right.
        tempNodePtr = nodePtr->right;
// Go to the end left node.
        while (tempNodePtr->left)
        {
            tempNodePtr = tempNodePtr->left;
        }
// Reattach the left subtree.
        tempNodePtr->left = nodePtr->left;
        tempNodePtr = nodePtr;
// Reattach the right subtree.
        nodePtr = nodePtr->right;
        delete tempNodePtr;
    }

    cout<<"\n\nNow deleting "<<nodePtr->value<<" from the tree...."<<endl;
}
//****************************************************************

// The displayInOrder member function displays the values *
// in the subtree pointed to by nodePtr, via inorder traversal. *
//****************************************************************

void BinaryTree::displayInOrder(TreeNode *nodePtr)
{
    if (nodePtr)
    {
        displayInOrder(nodePtr->left);
        cout << nodePtr->value <<" ";
        displayInOrder(nodePtr->right);
    }
}
//****************************************************************
// The displayPreOrder member function displays the values *
// in the subtree pointed to by nodePtr, via preorder traversal. *
//****************************************************************

void BinaryTree::displayPreOrder(TreeNode *nodePtr)
{
    if (nodePtr)
    {
        cout << nodePtr->value <<" ";
        displayPreOrder(nodePtr->left);
        displayPreOrder(nodePtr->right);
    }
}
//****************************************************************
// The displayPostOrder member function displays the values *
// in the subtree pointed to by nodePtr, via postorder traversal.*
//****************************************************************

void BinaryTree::displayPostOrder(TreeNode *nodePtr)
{
    if (nodePtr)
    {
        displayPostOrder(nodePtr->left);
        displayPostOrder(nodePtr->right);
        cout <<nodePtr->value<<" ";
    }

}
//****************************************************************
// The numNodes function returns the number of nodes in the tree.*
//****************************************************************

int BinaryTree::numNodes()
{
    return countNodes(root);
}
//****************************************************************
// The countNodes function uses recursion to count the nodes in the tree.
// This function is called by the public member function numNodes.
//****************************************************************

int BinaryTree::countNodes(TreeNode *&nodePtr)
{
    int count;
    if (nodePtr == NULL)
    {
        count = 0;
    }
    else
    {
        count = 1 + countNodes(nodePtr->left) + countNodes(nodePtr->right);
    }
    return count;
}
