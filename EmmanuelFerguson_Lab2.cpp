#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double totalMoney; //Result of the formula calculation
	double deposit; //Initial deposit entered by user
	double rate; //Interest rate entered by user
	int compoundNum; //Amount of times compounded per year
	int yearsLeft; //Years left in in deposit

	//1234567890123456789012345678901234567890123456789012345678901234567890
	cout << "Hello, in this program we will be calculating your interest earned \n\n"
		<< "Please enter the necessary information below \n\n" 
		<< "******************************************** \n" << endl;

	cout << "Enter the deposit amount in dollars : ";
	cin >> deposit;
	cout << "Enter the annual interest rate in a decimalized fraction : ";
	cin >> rate;
	cout << "Enter the number of times compounding is done per year : ";
	cin >> compoundNum;
	cout << "Enter the amount of years left in the deposit : ";
	cin >> yearsLeft;
	totalMoney = deposit * pow((1 + rate / compoundNum), (yearsLeft * compoundNum));
	double totalPennies = totalMoney * 100;
	int dollars = (int) totalPennies / 100;
	int cents = (int) totalPennies % 100;
	int yearsDouble = 72 / rate;
	cout << "Your total ammount accumulated is $" << dollars << " "
		<< "dollars and " << cents << " cents\n" 
		<< "Your deposit will double in " << yearsDouble << " years" << endl;

	return 0;
}
