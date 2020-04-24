#include <iostream>

template<class L>
class Window{
public:
  Window(); //default constructor
  ~Window(); //destructor
  Window(L* numb); //constructor that takes amount of windows there are

  virtual L* minutes;
  virtual void getMinutes(); //function to tell you how long spent at window

  Student<L>* thisStudent; //uses student class
};
//constructor
template<class L>
Window<L>::Window(){
  L* minutes = 0;

};

//destructor 
template<class L>
Window<L>::~Window(){
  delete minutes;
};
