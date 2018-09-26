#ifndef DYNAMICINTQUEUE_H_
#define DYNAMICINTQUEUE_H_

class DynamicIntQueue{
	struct Node{
		int value;
		Node* pNext;
	};
	Node *head=nullptr, *tail=nullptr;
public:
	bool isEmpty() const;
	void print() const;
	int first();
	int out();
	void in(int new_value);
	~DynamicIntQueue();
};

#endif /* DYNAMICINTQUEUE_H_ */
