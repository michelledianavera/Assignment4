#include <iostream>

template<class L>

class RegQueue{
  public:
    RegQueue(); //default constructor
    ~RegQueue();

    //core functions
    virtual void insert(L* d); //GenQueue
    virtual L* remove(); //dequeue

    //aux functions
    virtual L* peek();
    virutal bool isFull();
    virtual bool isEmpty();
    virtual L* getSize();

    //vars
  private:
     L* front;
     L* rear;
    L* mSize;
     L* numElements;

    DoublyLinkedList<L>* myQueue;  //array from Doubly Linked List

}
//constructor
template<class L>
RegQueue<L>::RegQueue(){
  front = 0;
  myQueue = new DoublyLinkedList<L>();
}
//destructor
template <class L>
RegQueue<L>::~RegQueue(){
    delete myQueue;
}
//inserting function
template <class L>
void RegQueue<L>::insert(L* d){
  myQueue->insertBack(d);
}
//remove function
template <class L>
L* RegQueue<L>::remove(){
  return myQueue->removeFront();

}
//function to peek
template<class L>
L* RegQueue<L>::peek(){
  return myQueue->getFront();

}
//check to see if empty
bool RegQueue<L>::isEmpty(){
  return myQueue->isEmpty();

}
//function to get size of queue 
L* RegQueue<L>::getSize(){
  return myQueue->getSize();
}
