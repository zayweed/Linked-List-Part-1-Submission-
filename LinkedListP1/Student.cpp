//Student functions
#include <iostream>
#include <cstring>

#include "Student.h"

using namespace std;

Student::Student(int inId) { //constructor
  id = inId;
}

int Student::getId() { //getter for id
  return id;
}