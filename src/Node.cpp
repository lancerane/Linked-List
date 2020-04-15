/*
 * Node.cpp
 *
 *  Created on: 14 Apr 2020
 *      Author: LR
 */

#include "Node.h"

Node::Node(float* data) {

	Node::data = data;
	Node::next = nullptr;

}

Node::Node() {

	Node::next = nullptr;

}


