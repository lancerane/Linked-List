/* Simple Linked list implementation, named _2 to avoid naming conflict with mbed lib
 * designed for activations buffering in fast conv TFL model
 * Each node holds an array of data
 */

#include "LinkedList2.h"

// Add a node to the end 
void LinkedList2::append(float* data, int size) {

	// if (head == nullptr) {
	// 	head = new Node(data, size);
	// 	return;
	// }

	Node* current = head;
	while (current->next != nullptr) {
		current = current->next;
	}
    // delete current->next;
	current->next = new Node(data, size);
}

void LinkedList2::append(float* data, int size, const bool predictRight) {

	// if (head == nullptr) {
	// 	head = new Node(data, size);
	// 	return;
	// }

	Node* current = head;
	while (current->next != nullptr) {
		current = current->next;
	}
    // delete current->next;
	current->next = new Node(data, size, predictRight);
}

// Add to the start: quicker
void LinkedList2::prepend(float* data, int size) {

	Node* newHead = new Node(data, size);
	newHead->next = head;
	head = newHead;

}

// Remove one from the front
void LinkedList2::popFront() {

	// if (head == nullptr) {
	//   return;
	// }

	Node* oldHead = head;
	head = head->next;

    // delete[] oldHead->data;
	delete oldHead;

}

void LinkedList2::popBack() {

	// if (head == nullptr) {
	// 	return;
	// }

	Node* current = head;	

	// if (current->next == nullptr) {
	// 	head = nullptr;
	// 	return;
	// }

	Node* lastNode;

	while (current->next != nullptr) {
		lastNode = current;
		current = current->next;
	}

	lastNode->next = nullptr;

    // delete[] current->data;
    delete current;

}


int LinkedList2::getSize() {

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

LinkedList2::~LinkedList2() {
  Node* current = head;
  while (current != nullptr) {
    delete current;
	current = current->next;
  }
}



