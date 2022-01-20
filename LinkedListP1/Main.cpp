#include <iostream>
#include <cstring>

#include "Node.h"
#include "Student.h"

using namespace std;

int main() {
  Student* student1 = new Student(1);
  Student* student2 = new Student(2);
  Student* student3 = new Student(3);
  
  Node* node1 = new Node(student1);
  Node* node2 = new Node(student2);
  Node* node3 = new Node(student3);

  node1->setNext(node2);
  node2->setNext(node3);

  cout << node1->getStudent()->getId() << endl;

  cout << node2->getStudent()->getId() << endl;
  cout << node1->getNext()->getStudent()->getId() << endl;

  cout << node3->getStudent()->getId() << endl;
  cout << node2->getNext()->getStudent()->getId() << endl;
  cout << node1->getNext()->getNext()->getStudent()->getId() << endl;
} 