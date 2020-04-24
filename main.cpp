#include <iostream>
#include "Dlist.h"
#include "RegQue.h"
#include "Window.h"
#include "Student.h"
#include <fstream>
#include <sstream>

int main(int argc, char ** argv){
  //initializing file variable
  std::ifstream inFile;

  //initializing variables
  std::string fileName;
  int line;
  int fileLength = 0;


std::cout << "Welcome to the Registrar Office! Please insert the file you wish to use" << "\n";
//getting user input into file name
getline(std::cin, fileName);
inFile.open(fileName.c_str());
while (std::getline(inFile, line)){
  ++fileLength;
  if(fileLength==1){
    for(int i =0; i <= line; i++){
      //I was trying to initialize the windows to be open here 

    }

  }
  //code for outputting metrics, I wanted to use the functions from the
  //classes and insert them here
  std::cout << "Mean student wait time: ";
  std::cout << "Median student wait time: ";
  std::cout << "Longest student wait time: ";
  std::cout << "Number of students waiting over 10 minutes: ";
  std::cout << "Mean window idle time: ";
  std::cout << "The longest window idle time :";
  std::cout << "Number of windows idle for over 5 minutes: ";

}













}
