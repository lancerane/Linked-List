#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include "Node.h"

class LinkedList {
public:
	Node* head;
	LinkedList(float* data, int size);
  LinkedList();
	void append(float* data, int size);
	void prepend(float* data, int size);
	void readout();
	void popFront();
	void popBack();
	int getSize();
};



#endif /* LINKEDLIST_H_ */
