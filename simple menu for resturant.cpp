//@auther : Ahmed Adel 
#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <iomanip>
#include <fstream>
#include <map>
#define ll long long
#define nn '\n'
#define Fastread ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//ll frq[10000005] = { 0 };
void menu() {
	cout <<" num.	    		MENU	           PRICE" << nn;

	cout <<"  1.             Pizza CHICKEN RANCH       80 " << nn;

	cout <<"  2.             MEAT BALL                100 " << nn;

	cout <<"  3.             ICE COFFE                 50 " << nn;

	cout <<"  4.             ORANGE JUICE              40 " << nn;

	cout <<"  5.             SHAWERMA                  60 " << nn;

	cout <<"  6.             CANE JUICE                10 " << nn;
}
int main() {
	Fastread
		double jum = 0;
	int sz = 0;
	int qtty[6];
	int no[6];
	int price[6], total[6];
	string name[6];
	double change = 0;
	double pay = 0;
	menu();
	cout << "How Many Types of Menu Do You Want To Order ?  ";
	ll n = 0;
	cin >> n;
	if (n > 0 && n <= 6)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << "Your " << i << " Choice" << " Is ";
			cin >> no[i];
			cout << "Enter Amount = " ;
			cin >> qtty[i];
			if (no[i] == 1) 
			{
				name[i] = " Pizza CHICKEN RANCH ";
				price[i] = 80;
				total[i] = price[i] * qtty[i];
			}
			else if (no[i] == 2)
			{
				name[i] = " MEAT BALL ";
				price[i] = 50;
				total[i] = price[i] * qtty[i];
			}
			else if (no[i] == 3) 
			{
				name[i] = " ICE COFFE ";
				price[i] = 50;
				total[i] = price[i] * qtty[i];
			}
			else if (no[i] == 4)
			{
				name[i] = " ORANGE JUICE ";
				price[i] = 40;
				total[i] = price[i] * qtty[i];
			}
			else if (no[i] == 5) 
			{
				name[i] = " SHAWERMA ";
				price[i] = 60;
				total[i] = price[i] * qtty[i];
			}
			else if (no[i] == 6)
			{
				name[i] = " CANE JUICE ";
				price[i] = 10;
				total[i] = price[i] * qtty[i];
			}
			jum += total[i];//the bill
		}
		system("cls");
		menu();
		cout << " Your Choice is : " ;
		for (int i = 1; i <= n; i++)
		{
			cout << qtty[i]<<" " << " Part " << "  " << name[i] << nn;
			cout << " Price / part = " << price[i] << nn;
			cout << " Total price " << name[i] << " = " << total[i] << nn;
			cout << "********************************************" << nn;
		}
		cout << "Paid : RP . " << nn;
		cin >> pay;
		cout << nn;
		change = pay - jum;//change of the bill
		cout << " Change : RP. " << change << nn;
		cout << nn;
		cout << "* Thank You For Visiting Our Resturant * " << nn;
	}
	else
		cout << " Please Choice your input .. it Doesn't Exist " << nn;
		return 0;
}
