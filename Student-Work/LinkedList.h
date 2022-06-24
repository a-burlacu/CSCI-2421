
#ifndef LINKED_LIST_
#define LINKED_LIST_


#include "Node.h"
#include <vector>

template<class ItemType>
class LinkedList
{
private:
	Node<ItemType>* headPtr;
	int itemCount;
	//This is private function which will find an item
	//in the link list and will return a pointer to the node
	//which contains the given item
	Node<ItemType>* getPointerTo (const ItemType& target) const;
   
public:
	LinkedList();
	LinkedList (const LinkedList<ItemType>& linkedList);  //Copy Constructor	
	virtual ~LinkedList();           //Destructor
	
	int getCurrentSize() const;
	bool isEmpty() const;
	bool add (const ItemType& anEntry);
	bool remove (const ItemType& anEntry);
	void clear();
	bool contains (const ItemType& anEntry) const;
	int getFrequencyOf (const ItemType& anEntry) const;
	std::vector<ItemType> toVector() const;
};


#endif