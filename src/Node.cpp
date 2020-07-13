#include "Node.h"

Node::Node(float* data_in, int size) {

  data = new float[size];
  for (int i(0); i < size; i++) {
    this->data[i] = data_in[i];
  }

  Node::next = nullptr;

  //
  Node::prev = nullptr;

}

Node::Node(float* data_in, int size, const bool predictRight) {
//   specialised func that swaps left and right sensor data if predictRight is true

  data = new float[size];
  for (int i(0); i < size; i++) {
    this->data[i] = predictRight ? (data_in[(i+size/2) % size]) : (data_in[i]);
  }

  Node::next = nullptr;
  Node::prev = nullptr;

}

Node::~Node() {
  delete[] data;
}

