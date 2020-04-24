#include <iostream>

//student class
template<class L>
class Student{
  public:
    Student();
    Student(int timeNeeded);
    ~Student();

    L* timeSpent;
    L* timeWaited;
     L* timeatW;
     void addTimeWaited;
    virtual void getTimeWaited;
    virtual void getTimeAtW;
    virtual void getTimeSpent;
};
//constructor
template<class L>
Student<L>::Student(){
  timeSpent = 0;
  timeWaited = 0;
  timeatW = 0;

};
//destructor
template<class L>
Student<L>::~Student(){
  delete timeSpent;
  delete timeWaited;
  delete timeatW;

};
//overloaded
template<class L>
Student<L>::Student(int timeNeeded){
  timeSpent = timeNeeded;
  timeWaited = 0;
  timeatW = 0;

};
//function to attribute time student spent waiting
template<class L>
Student<L>::addTimeWaited(int time){
  timeWaited+=time;

}
//function to get time spent in the registrar office as a whole 
template<class L>
Student<L>::getTimeSpent(){
  return timeSpent;
};
//function to get time spent at window
template<class L>
Student<L>::getTimeAtW(){
  return timeatW;
};
//function to get time waiting for an open window
template<class L>
Student<L>::getTimeWaited(){
  return timeWaited;
};
