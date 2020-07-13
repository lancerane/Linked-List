#ifndef NODE_H_
#define NODE_H_


class Node {
public:
	Node(): next(nullptr) {};
	Node(float* data, int size);
    Node(float* data, int size, const bool predictRight); // specialised node to deal with varying pred side
	~Node();

	Node* next;
    Node* prev; // for compatibility with a DLL
	float* data;

  
};

#endif /* NODE_H_ */
