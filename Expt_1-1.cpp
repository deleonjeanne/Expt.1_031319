#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double box = 250;
	double side = 100;
	double prem = 50;
	double gen = 25;

	cout << "No. of Box Tickets with the price of P250.00 " << endl;
	cin >> box;
	cout << "No. of BOX tickets"  << "         " << "P" << 250*box << endl;
	cout << " " << endl;

	cout << "No. of Sideline Tickets with the price of P100.00 " << endl;
	cin >> side;
	cout << "No. of side tickets"  << "         "<< "P"  << 100*side << endl;
	cout << " " << endl;

	cout << "No. of Premium Tickets with the price of P50.00 " << endl;
	cin >> prem;
	cout << "No. of Premium tickets"  << "         "<< "P"  << 50*prem << endl;
	cout << " " << endl;

	cout << "No. of General Admission Tickets with the price of P25.00 " << endl;
	cin >> gen;
	cout << "No. of General Admission tickets"  << "         "<< "P"  << 25*gen << endl;
	cout << " " << endl;

	cout << "Total number of Tickets Sold" << "         " << box+prem+side+gen << endl;
	cout << "Total Sales" <<  "         " << "P" << box*250+side*100+prem*50+25*gen << endl;

	_getch();
	return 0;
}