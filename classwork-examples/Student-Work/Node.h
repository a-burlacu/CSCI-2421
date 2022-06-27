#ifndef NODE_
#define NODE_

template<class ItemType>
class Node
{
private:
   Node<ItemType>* next;  //Pointer to next node
   ItemType item;        //A data item
   
   
public:
	//Constructors
	Node();
	Node (const ItemType& anItem);
	Node (const ItemType& anItem, Node<ItemType>* nextNodePtr);
	
	//Set methods
	void setItem (const ItemType& anItem);
	void setNext (Node<ItemType>* nextNodePtr);
	
	//Get methods
	ItemType getItem() const;
	Node<ItemType>* getNext() const;
};



#endif