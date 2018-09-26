#include "DynamicIntQueue.h"
#include "../../exceptions/src/exceptions.hpp"
#include <iostream>


bool DynamicIntQueue::isEmpty() const{
	return head==nullptr;
}

void DynamicIntQueue::print()const {
	Node* tmp=head;
	while(tmp!=tail){
		std::cout<<tmp->value<<" ";
		tmp=tmp->pNext;
	}
}

int DynamicIntQueue::first(){
	if(isEmpty())
		throw UnderFlowException();
	return head->value;
}

int DynamicIntQueue::out(){
	if(isEmpty())
		throw UnderFlowException();
	Node *tmp=head;
	head=head->pNext;
	if(!head) tail=nullptr;
	int tmp2=tmp->value;
	delete tmp;
	return tmp2;
}

void DynamicIntQueue::in(int new_value){
	Node *new_node= new Node();
	new_node->value= new_value;
	if(isEmpty()){
		head=tail= new_node;
	}
}

DynamicIntQueue::~DynamicIntQueue(){
	while(!isEmpty())
		out();
}
