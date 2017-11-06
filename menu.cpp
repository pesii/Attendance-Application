#include "pa7.h"
#include "menu.h"

Menu::Menu(string new_master_filename, string new_course_list_filename) {
	master_filename = new_master_filename;
	course_list_filename = new_course_list_filename;
}

// functions
// (1) Import course list, populates the master list with items from .csv
void Menu::import_course() {
	
}

// (2) Load master list
// populates master list with nodes from master.txt
void Menu::load_master() {

}

// (3) Store master list
// Stores contents of master list nodes to master.txt
void Menu::save_master() {

}

// (4) Mark absences
// runs through master list, displays student's name, and prompts if s/he was abset
// the data is then pushed to the stack that is contained within the node representative of the student
void Menu::roll_call() {

}

// (5) BONUS: Edit absences
// prompt for an ID number OR name of student to edit, 
// then it prompts for the date of absence to edit
void Menu::edit_roll_call() {

}

// (6) Generate report
// Leads to submenus:
//		1. Generate report for all students; showing the most recent absence, peek()
//		2. generate report for students with absences that match or exceed a number entered by user
void Menu::generate_report() {

}

// (7) Exit

void Menu::display_menu() {
	cout << "Make a selection:\n";
	cout << "\t1. \n";
	cout << "\t2. \n";
	cout << "\t3. \n";
	cout << "\t4. \n";
	cout << "\t5. \n";
	cout << "(1-5) >>> ";
}