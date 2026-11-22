#include <iostream>
using namespace std;
int main()
{
	string status;
	int hour;

	cout << "Enter hour(0-23):";
	cin >> hour;
	
	if (hour >= 23 || hour < 6)
	{
		status = "Late entry";
		cout << status << endl;
		cout << "Show your matric card:" << endl;
	}
	else
	{
		status = "Welcome back";
		cout << status << endl;

	}
	cout << "Good night everyone" << endl;
	return 0;
}