/* Can delete if conditions (apart from prepend) for a speed boost
 */

#include "DoubleLinkedList2.h"

// Add a node to the end 
void DoubleLinkedList2::append(float* data, int size) {

	if (head == nullptr) {
		head = new Node(data, size);
        tail = head;
		return;
	}

    Node* newTail = new Node(data, size);
    newTail->prev = tail;
    tail->next = newTail;
    tail = newTail;

}

// Add to the start
void DoubleLinkedList2::prepend(float* data, int size) {

    if (head == nullptr) {
		head = new Node(data, size);
        tail = head;
		return;
	}

	Node* newHead = new Node(data, size);
	newHead->next = head;
    head->prev = newHead;
	head = newHead;

}

// Remove one from the front
void DoubleLinkedList2::popFront() {

	if (head == nullptr) {
	  return;
	}

	Node* oldHead = head;
	head = head->next;
    head->prev = nullptr;
	delete oldHead;

}

void DoubleLinkedList2::popBack() {

	if (head == nullptr) {
		return;
	}

    Node* oldTail = tail;
	tail = tail->prev;
    tail->next = nullptr;
	delete oldTail;


}


int DoubleLinkedList2::getSize() {

	if (head == nullptr) {
		return 0;
	}

	int size = 0;
	Node* current = head;

	do {
		current = current->next;
		size ++;
	} while (current != nullptr);

	return size;

}



