/*
 * LinkedList.cpp
 *
 *  Created on: 14 Apr 2020
 *      Author: LR
 */

#include "LinkedList.h"

LinkedList::LinkedList(float* data) {

	LinkedList::head = new Node(data);

}

LinkedList::LinkedList() {

	LinkedList::head = nullptr;

}

void LinkedList::append(float* data) {

	if (head == nullptr) {

		head = new Node(data);
		return;
	}

	Node* current = head;
	while (current->next != nullptr) {
		current = current->next;
	}
	current->next = new Node(data);
}

void LinkedList::prepend(float* data) {

	Node* newHead = new Node(data);
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

	int k =0;
	Node* current = head;
	do {

		current = current->next;
		k ++;

	} while (current != nullptr);

	return k;

}



