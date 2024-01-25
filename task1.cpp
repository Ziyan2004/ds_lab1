#include<iostream>
using namespace std;
int main() {
	int day;
	int month;
	int year;
	cout << "input day.Follow dd/mm/yy format" << endl;
	cin >> day;
	cout << "input month.Follow dd/mm/yy format" << endl;
	cin >> month;
	cout << "enter year.Follow dd/mm/yy format" << endl;
	cin >> year;
	cout << "The date you've entered is:" << endl;
	if (day <= 31) {
		cout << day << "/";
	}
	else {
		cout << "Error!Incorrect input" << endl;
	}
	if (month <= 12) {
		cout << month << "/";
	}
	else {
		cout << "Error!Incorrect input" << endl;
	}
	if (year <= 2024) {
		cout << year << "/";
	}
	else {
		cout << "Error!Incorrect input" << endl;
	}
	return 0;
}