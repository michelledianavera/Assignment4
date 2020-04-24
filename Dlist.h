#include <iostream>



template<class L>
class ListNode{ //class for the node
public:
  L data;
  ListNode<L> *prev;
  ListNode<L> *next;
  ListNode(); //default constructor

  ListNode(L d); //overloaded constructor
  ~ListNode();//destructor
};
//class for single list
template<class L>
class naiveList{
private:
  ListNode<L> *front;
  unsigned int size;

public:

  naiveList();
  ~naiveList();

  virtual void insertFront(L* data);
  virtual void insertBack(L* data) = 0;
  virtual L* removeFront();
  int search(int val);
  virtual L* removeAtPos(L* key);

  unsigned getSize();
  bool isEmpty();
  void printList();

};
//list node constructor
template<class L>
ListNode<L>::ListNode(){
  data = 0;
  next = NULL;
}
//list node loaded
template<class L>
ListNode<L>::ListNode(L d){
  data = d;
  next = NULL;
}
//list node destructor
template<class L>
ListNode<L>::~ListNode(){
  L data = NULL;
  delete next;
  delete prev;
}

//creating doublylinkedlist

template<class L>
class DoublyLinkedList:naiveList<L>{
private:
  ListNode<L> *front;
  ListNode<L> *back;
  L* size;

public:

  DoublyLinkedList();
  ~DoublyLinkedList();

  virtual void insertFront(L* data);
  virtual void insertBack(L* data);
  virtual L* removeFront();
  virtual L* removeBack();
  int search(int val);
  virtual L* remove(L* value);
  L getFront();

  virtual L* getSize();
  virtual bool isEmpty();
  virtual void printList();

};
//constructor
template<class L>
DoublyLinkedList<L>::DoublyLinkedList(){
  new ListNode<L> = front;
  new ListNode<L> = back;
  front->next = back;
  back->next = front;
  size = 0;

}
//had multiple errors with this attempted overloaded constructor
//template<class L>
//DoublyLinkedList<L>::DoublyLinkedList(L* d){
  //ListNode<L> *nNode = new ListNode<L>(d);
  //nNode = front;
  //new ListNode<L> = back;
  //front->next = back;
  //back->next = front;
//size = 1;
//
//}


//destructor
template<class L>
DoublyLinkedList<L>::~DoublyLinkedList(){
  while(!isEmpty()){
    removeFront();

  }

}
//function to insert at front of Doubly Linked List
template<class L>
void DoublyLinkedList<L>::insertFront(L* d){
  ListNode<L> *nNode = new ListNode<L>(d);
  front->prev = nNode;
  nNode->next = front;
  front = nNode;
  size++;
}

//function to insert at the back of Doubly Linked List
template <class L>
void DoublyLinkedList<L>::insertBack(L* d) { //Insert data into back of the DLL
    ListNode<L> *node = new ListNode<L>(d);
      back->next = node;
      node->prev = back;
      node->next = NULL;
      back = node;
      size++;
}
//function to remove from the front of the DoublyLinkedList
template<class L>
DoublyLinkedList<L>::removeFront(){
  ListNode<L> *node = front;
  if(front->next = NULL){
    back = NULL;
  }
  else{
    front->next->prev = NULL;

  }
  front = front -> next;
  node -> next = NULL;
  L temp = temp->data;
  delete temp;
  --size;

}
//function to remove certain value from list 
template<class L>
DoublyLinkedList<L>::remove(L* value){
  ListNode<L> *curr = front;

  while (curr->data!=value){

  //keep iterating until we find our value
  curr = curr -> next;

  }
  if (curr==NULL){
  return NULL; //might need return -1

  }
  //we found the value, now lets proceed to delete

  if (curr == front){

  //check if node to be deleted is the front
  front = curr->next;
  }
  else{
  //node to deleted is not the front or back, its in between
  curr -> next-> prev = curr -> prev;
  }

  curr->next = NULL;
  curr->prev = NULL;
  int temp = curr->data;
  delete curr;
  size--;
  return temp;
}
