#pragma once

#include "pa7.h"

class ListNode {
private:
	ListNode *next;
	// Node data
	unsigned int record_number;
	unsigned long int student_id;
	string student_name;
	string student_email;
	string class_credits;
	string student_major;
	string student_level; // freshman, sophomore, ...
	unsigned int student_absences;
	// need a stack/array that represents date in which the student is absent
public:
	ListNode();
	int insertFront();

	// getters

	// setters
};

class List {
private:
	ListNode *head;
public:
	// constructor
	List() {
		head = NULL;
	}
	ListNode createNode();

	void print();
};