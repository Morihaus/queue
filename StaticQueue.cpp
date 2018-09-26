#include "StaticQueue.h"
#include "../../exceptions/src/exceptions.hpp"
#include <iostream>

StaticQueue::StaticQueue(){
head=0;
tail=0;
empty=true;
}

StaticQueue::~StaticQueue(){

}

bool StaticQueue::isEmpty() const {return empty;}

bool StaticQueue::isFull()const {
	return !empty&& head==tail;
}

void StaticQueue::print()const {
	int tmp=head;
	while(tmp!=tail){
		std::cout<<arr[tmp++]<<" ";
		if(tmp==max)
			tmp=0;
	}
	std::cout<<'\n';
}

int StaticQueue::first() {
	if(isEmpty()){
		throw UnderFlowException();
	}
	return arr[head];
}

int StaticQueue::out(){
	if(isEmpty()){
		throw UnderFlowException();
	}
	int tmp= arr[head--];
		//head=[head+max]%max; ugyanaz mint a következő sor
		if(head<0) head=max-1;
		if(head==tail) empty =true;
		return tmp;
}

void StaticQueue::in(int new_item){
	if(isFull())
		throw OverFlowException();
	arr[tail]=new_item;
	++tail;
	empty=false;
	if(tail==max)
		tail=0;
}
