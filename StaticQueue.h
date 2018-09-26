#ifndef STATICQUEUE_H_
#define STATICQUEUE_H_

class StaticQueue{
private:
	static const int max=10;
	int head=0;
	int tail=0;
	int arr[max];
	bool empty =true;

public:
	StaticQueue(); //konstruktor
	~StaticQueue(); //destruktor
	void in(int new_item);
	int out();
	int first();
	bool isEmpty() const;
	bool isFull() const;
	void print() const;
};

#endif /* STATICQUEUE_H_ */
