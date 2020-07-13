#ifndef LINKEDLIST2_H_
#define LINKEDLIST2_H_

#include "Node.h"

class LinkedList2 {
public:
  LinkedList2(float* data, int size): head(new Node(data, size)) {};
  LinkedList2(): head(nullptr) {};
  ~LinkedList2();
  void append(float* data, int size);
  void append(float* data, int size, const bool predictRight);
  void prepend(float* data, int size);
  void popFront();
  void popBack();
  int getSize();
  Node* head;
	
private:
  
};





#endif /* LINKEDLIST2_H_ */
