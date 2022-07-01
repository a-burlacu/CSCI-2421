#include "LinkedList.h"
#include "Node.h"

 template<class ItemType>
LinkedList<ItemType>::LinkedList()		
{
	headPtr = nullptr;
	itemCount = 0;
	
}  

/**
 * Copy constructor will copy item from original list (aList) to a new
 * LinkedList
 * @tparam ItemType - Type of data
 * @param aList - Original LinkedList
 */
template<class ItemType>
LinkedList<ItemType>::LinkedList(const LinkedList<ItemType>& aList)
{
    //Copy number of items from original list to new list
	itemCount = aList.itemCount;

	//Create a pointer which points to the first item in the original list
	//If original list is empty then this pointer will be set to nullptr
	Node<ItemType>* nodePointer = aList.headPtr;

	//If nodePointer is nullptr (original list is empty) then
	//set the new headPtr to nullptr and we are doen
	if (nodePointer == nullptr)
		headPtr = nullptr;

	//Need to copy each items from original list to new list
	else {
        //Create a new node and copy the first node from original
        //list to node in the new list
        headPtr = new Node<ItemType>();
        headPtr->setItem(nodePointer->getItem());

        //Update the nodePointer to point to next Node
        nodePointer = nodePointer->getNext();

        //Create a new pointer which points to last inserted node
        //in the new node
        Node<ItemType> *preNodePointer = headPtr;

        //Iterate as long as nodePointer is not nullptr
        //nodePointer is pointing to next code in original list
        //to be copied to new list
        while (nodePointer != nullptr) {
            //Get item from original node
            ItemType nextItem = nodePointer->getItem();
            //Create a new node containing the next item
            Node<ItemType> *newNodePtr = new Node<ItemType>(nextItem);
            //Link new node to last inserted node in the new list
            preNodePointer->setNext(newNodePtr);
            //Advance pointer to point to newly inserted node in new list
            preNodePointer = newNodePtr;
            //Advance node pointer to next node in original list
            nodePointer = nodePointer->getNext();
        }
    }
}  

template<class ItemType>
LinkedList<ItemType>::~LinkedList()
{
    //Call clear function
	clear();
   
}  

template<class ItemType>
bool LinkedList<ItemType>::isEmpty() const
{
	//need to see if link list is empty
	//if (itemCount == 0) {return true;}
	//else {return false;}
	
	return itemCount == 0;
}  

template<class ItemType>
int LinkedList<ItemType>::getCurrentSize() const
{
	return itemCount;
}  

template<class ItemType>
bool LinkedList<ItemType>::add(const ItemType& newEntry)
{
    Node<ItemType> newNode = new Node<ItemType> (newEntry, headptr);
	headPtr = newNode;
	itemCount++;
	
	///Version 2
	Node<ItemType> newNode = new Node<ItemType> (newEntry);
	newNode->setNext (headptr); //(*newNode).setNext(headptr);
	headPtr = newNode;
	itemCount++;
	
	return true;
}

template <class ItemType>
std::vector<ItemType> LinkedList<ItemType>::toVector() const
{
	vector<ItemType> l;
	
	Node<ItemType>* nodepointer = headptr;
	
	
	while(nodepointer != nullptr){
		l.push_back(node->getItem());
		nodepointer = nodepointer->getNext();
	}
	
	return l;
	
	
	//second version
	for (i = 0; i < itemCount; i++) {
		l.push_back(node->getItem());
		nodepointer = nodepointer->getNext();
	}
	
	return l;
	
    
	
}

template <class ItemType>
bool LinkedList<ItemType>::remove(const ItemType& anEntry)
{
    if (isEmpty()){
		return 0;
	}
	
	Node<Itemtype>* p = head.getNext();
	
	Node <Itemtype> thisPointer = headPtr;
	//find item
	if (contains(anEntry){
		while (thisPointer.getNext().item!= anEntry){
			thisPointer = thisPointer.getNext()
		}
		
		thisPointer.item= p.item;
		headPtr = p;
		
		itemCount--;
		
		//recursive call for further instances of anEntry
		remove(anEntry);
	}
	return 0;
	
	
	//Version 2
	bool done = false;

	Node<ItemType>* nodePtr = getPointerTo (anEntry);

	if (nodePtr != nullptr) {
		nodePtr->setItem( headPtr->getItem())

		Node<ItemType>* nodeToDelete = headptr;
		headptr = headptr->getNext();

		nodeToDelete->setNext (nullptr);
		delete nodeToDelete;
		itemCount--;
		done = true;

	}

	return done;

	
	
}

template <class ItemType>
void LinkedList<ItemType>::clear()
{
    

}

template <class ItemType>
int LinkedList<ItemType>::getFrequencyOf (const ItemType& anEntry) const
{
	int count = 0;
	ItemType* currentNode = headPtr;
	for(int i=0;i<itemCount;i++) {
		if(currentNode->getItem() == anEntry) {
			count++;
		}
		currentNode = currentNode -> getNext();
	return count;
}
}


template<class ItemType>
bool LinkedList<ItemType>::contains(const ItemType& anEntry) const
{
    retrun (getPointerTo (anEntry) != nullptr));
	
}

template<class ItemType>  // gets a pointer to a specific node containing some value you're looking for
Node<ItemType>* LinkedList<ItemType>::getPointerTo (const ItemType& target) const
{
    Node<ItemType> *targetPtr = headptr;
	
	while (targetPtr != nullptr) {
		if (targetPtr->getItem() == target) {
			return targetPtr;
		} else {
			targetPtr = targetPtr->getNext();
		}
	}
	return nullptr;
	
	
	bool found = false;
	
	Node<ItemType>* targetPtr = headptr;
	
	while (!found && (targetPtr != nullptr) {
		if (traget == targetPtr->getItem())
			found = true;
		else
			targetPtr = targetPtr->getNext();
		
	}
	
	return targetPtr;
	
	
	
}



