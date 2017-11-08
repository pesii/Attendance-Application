#pragma once

#include "List.h"
#include "ListNode.h"

ListNode * List::createNode(StudentData record) {
	ListNode *new_node;

	new_node->set_absences(record.student_absences);
	new_node->set_class_credits(record.class_credits);
	new_node->set_level(record.student_level);
	new_node->set_record_number(record.record_number);
	new_node->set_student_email(record.student_email);
	new_node->set_student_id(record.student_id);
	new_node->set_student_major(record.student_major);
	new_node->set_student_name(record.student_name);

	new_node->set_next(nullptr);

	return new_node;
}

bool List::insertFront(StudentData record) {
	ListNode *new_data = createNode(record);
	bool success = false;

	if(head == nullptr) { // list is empty
		head = new_data;
		head->set_next(nullptr);
		success = true;
	} else {
		ListNode * temp; 
		temp = head;
		head = new_data;
		head->set_next(temp);
		success = true;
	}

	return success;
}