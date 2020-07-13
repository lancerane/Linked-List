#ifndef __DLINKEDLIST2_H_
#define __DLINKEDLIST2_H_

#include "Node.h"

class DoubleLinkedList2 {
public:
	// LinkedList(float* data, int size);
	DoubleLinkedList2(float* data, int size) {
        head = new Node(data, size);
        tail = head;
    };
    DoubleLinkedList2(): head(nullptr), tail(nullptr) {};
	void append(float* data, int size);
	void prepend(float* data, int size);
	void popFront();
	void popBack();
	int getSize();
	Node* head;
    Node* tail;




// private:
  
};





#endif /* __DLINKEDLIST2_H_ */
