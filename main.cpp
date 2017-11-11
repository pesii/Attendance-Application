#include "pa7.h"
#include "attendance.h"
#include "menu.h"
#include "ListNode.h"
#include "List.h"

string get_date(void) {
	// retrieved from stackoverflow
	time_t t = time(0); // get current time
	struct tm * now = localtime(&t);

	string date_now;

	int year = 0, month = 0, day = 0;
	year = (now->tm_year + 1900);
	month = (now->tm_mon + 1);
	day = (now->tm_mday);

	date_now = to_string(year) + '-' + to_string(month) + '-' + to_string(day);
	
	return date_now;
}

int main(void) {
	Menu start(MASTER_FILENAME, COURSE_FILENAME);
	
	start.run_app();


	return 0;
}