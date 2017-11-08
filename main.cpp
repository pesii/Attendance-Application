#include "pa7.h"
#include "attendance.h"
#include "menu.h"
#include "ListNode.h"
#include "List.h"

void get_date(void) {
	// retrieved from stackoverflow
	time_t t = time(0); // get current time
	struct tm * now = localtime(&t);
	cout << (now->tm_year + 1900) << '-'
		<< (now->tm_mon + 1) << '-'
		<< (now->tm_mday)
		<< endl;
}

int main(void) {
	/*
	string filename = "test.csv";

	ofstream outfile;

	outfile.open("test.csv");
	outfile << "Taylor,Swift,39" << endl;
	outfile.close();

	ifstream infile;
	infile.open("test.csv");
	string data;
	
	while (getline(infile, data)) {
		cout << data << endl;
	}
	infile.close();
	*/

	Menu b(MASTER_FILENAME, COURSE_FILENAME);
	b.import_course();
	

	return 0;
}