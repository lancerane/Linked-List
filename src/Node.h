#ifndef NODE_H_
#define NODE_H_


class Node {
public:
	Node* next;
	float* data;

	Node();
	Node(float* data, int size);
	virtual ~Node();

};

#endif /* NODE_H_ */
