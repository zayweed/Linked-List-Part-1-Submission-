//template of 'Student.cpp'
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

using namespace std;

class Student {
  //local variables
  int id;
 public:
  Student(int inId); //constructer
  int getId(); //getter for id
};

#endif