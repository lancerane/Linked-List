#include "Node.h"

Node::Node(float* data_in, int size) {

	data = new float[size];
	for (int i(0); i < size; i++) {
    this->data[i] = data_in[i];
  }

	Node::next = nullptr;

}

Node::Node() {

	Node::next = nullptr;

}

Node::~Node() {
  delete[] data;
}

