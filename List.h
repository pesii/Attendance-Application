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

	~List() {
		ListNode *traversal = head;
		ListNode *temp;

		while(traversal) {
			temp = traversal;	
			traversal = traversal->getNext();
			delete temp;
			temp = nullptr;
		}
		head = nullptr;
		traversal = nullptr;
	}

	// getters
	ListNode * getHead() { return head; }

	// setters
	void set_head(ListNode *new_head) {
		head = new_head;
	}

	ListNode * createNode(StudentData record);
	bool insertFront(List &master, StudentData record);

	void printList();
};
