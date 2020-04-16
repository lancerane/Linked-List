/*
 * LinkedList.cpp
 *
 *  Created on: 14 Apr 2020
 *      Author: LR
 */

#include "LinkedList.h"

LinkedList::LinkedList(float* data, int size) {

	LinkedList::head = new Node(data, size);

}

LinkedList::LinkedList() {

	LinkedList::head = nullptr;

}

void LinkedList::append(float* data, int size) {

	if (head == nullptr) {
		head = new Node(data, size);
		return;
	}

	Node* current = head;
	while (current->next != nullptr) {
		current = current->next;
	}
	current->next = new Node(data, size);
}

void LinkedList::prepend(float* data, int size) {

	Node* newHead = new Node(data, size);
	newHead->next = head;
	head = newHead;

}

void LinkedList::popFront() {

	if (head == nullptr) {
		return;
	}

	Node* oldHead = head;
	head = head->next;
	delete oldHead;

}

void LinkedList::popBack() {

	if (head == nullptr) {
		return;
	}

	Node* current = head;	

	if (current->next == nullptr) {
		head = nullptr;
		return;
	}

	Node* lastNode;

	while (current->next != nullptr) {
		lastNode = current;
		current = current->next;
	}

	lastNode->next = nullptr;
	delete current;

}


int LinkedList::getSize() {

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



