#pragma once

#include "pa7.h"
#include "ListNode.h"

class List {
private:
	ListNode *head;
public:
	// constructor
	List() {
		head = nullptr;
	}
	// getters
	ListNode * getHead() { return head; }

	// setters
	void set_head(ListNode *new_head) {
		head = new_head;
	}

	ListNode * createNode(StudentData record);
	bool insertFront(StudentData record);

	void print();
};