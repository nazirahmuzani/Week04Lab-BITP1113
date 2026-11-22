#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double weight;
	double charge = 8.00;
	double fee;
    
	cout << "Enter your parcel weight (Kg) : ";
	cin >> weight;

	if (weight > 2.0)
	{
		fee = 8.00 + 5.00;
		cout << "Your parcel is heavy,so 5.00 ringgit is added:" << endl;

		cout << fixed << setprecision(2);
		cout << "Total fee(RM):" << fee << endl;


	}   
	return 0;
}