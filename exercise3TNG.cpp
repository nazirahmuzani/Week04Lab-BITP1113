//Nazirah Binti Muhammad Muzani S2G1
//B032610198
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double balance;
	double toll;
	double cardbalance;
	string gatestatus;
	double shortfall;

	cout << "Scan your card(RM):";
	cin >> cardbalance;

	cout << "Price of toll(RM):";
	cin >> toll;

	if (cardbalance > toll)
	{
		balance = cardbalance - toll;
		gatestatus = "Open";
		cout << "Gate open" << endl;
		cout << "Your new balance card(RM):" << fixed << setprecision(2) << (balance) << endl;

	}
	else
	{
		shortfall = toll - cardbalance;
		gatestatus = "Close";
		cout << "Insuffient balance.Please Reload:" << endl;
		cout << "Your balance of shortfall(RM):" << fixed << setprecision(2) << (shortfall) << endl;

	}   
	   return 0;

}
