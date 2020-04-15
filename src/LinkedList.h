/*
 * LinkedList.h
 *
 *  Created on: 14 Apr 2020
 *      Author: lr
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include "Node.h"

class LinkedList {
public:
	Node* head;
	LinkedList(float* data);
  LinkedList();
	void append(float* data);
	void prepend(float* data);
	void readout();
	void popFront();
	void popBack();
	int getSize();
};



#endif /* LINKEDLIST_H_ */
