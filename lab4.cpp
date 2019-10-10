// CS 1 Sec 103
// Lab 4 coded by Emmanuel Ferguson
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string firstName;
	string lastName; // declare input, output, and computational variables
	string jobType;
	char empCode;
	int idNum;
	int yearCode;
	int eduCode;
	int jobCode;
	int rounded;
	int dollars;
	int cents;
	double basePay = 0;
	double totalPay = 0;
	double jobCodeInc = 0;
	double yearCodeInc = 0;
	double eduCodeInc = 0;

	cout << "Please enter your first name" << endl; // prompt user for first name
	cin >> firstName; // get and store input into variable firstName
	cout << "Please enter your last name" << endl;    // prompt user for last name
	cin >> lastName; // get and store input into variable lastName

	cout << "Please select your employee code from one of the codes below" << endl; // prompt user for Employee Code (M, O, S)
	cout << "M = Manager \nO = Office Worker\nS = Factory Worker" << endl;
	cin >> empCode; // Get and store in empCode variable
	bool flagEmpCode = (empCode == 'M' || empCode == 'O' || empCode == 'S');

	cout << "Please enter your ID number" << endl; // prompt user for ID number
	cin >> idNum; // get and store input into variable idNum

	cout << "Please enter your job code from one of the codes below\n1 ,2 ,3 , 4" << endl; // prompt user for job code
	cin >> jobCode; // get and store input into variable jobCode // set boolean flag for jobCode as below
	bool flagJobCode = (jobCode == 1 || 2 || 3 || 4);

	cout << "Please enter the number of years served" << endl; // prompt user for years of service
	cin >> yearCode; // get and store input variable year Code
	bool flagYearcode = (yearCode <= 50);

	cout << "Please enter your educational code from one of the codes below" << endl; // prompt user for educational code
	cout << "1 = High School\n2 = Junior College\n3 = University\n4 = Graduate School" << endl;
	cin >> eduCode; // get and store input into variable eduCode // set boolean flag for eduCode as below
	bool flagEduCode = (eduCode == 1 || 2 || 3 || 4);

	if (flagEmpCode && flagJobCode && flagYearcode && flagEduCode)
	{
		if (empCode == 'S')
		{
			basePay = 800.00;
			jobType = "Factory Worker";
		}
		else if (empCode == 'O')
		{
			basePay = 1000.00;
			jobType = "Office Worker";
		}
		else if (empCode == 'M')
		{
			basePay = 1500.0;
			jobType = "Management";
		}
		else
		{
		}
		if (jobCode == 1)
		{
			jobCodeInc = basePay * 0.05;
		}
		else if (jobCode == 2)
		{
			jobCodeInc = basePay * 0.10;
		}
		else if (jobCode == 3)
		{
			jobCodeInc = basePay * 0.20;
		}
		else
		{
		}
		if (yearCode <= 10)
		{
			yearCodeInc = basePay * 0.05;
		}
		else if (yearCode <= 50)
		{
			yearCodeInc = basePay * ((yearCode - 10) * 0.01 + 0.05);
		}
		else
		{
		}
		if (eduCode == 1)
		{
			eduCodeInc = 0.0;
		}
		else if (eduCode == 2)
		{
			eduCodeInc = basePay * 0.05;
		}
		else if (eduCode == 3)
		{
			eduCodeInc = basePay * 0.12;
		}
		else if (eduCode == 4)
		{
			eduCodeInc = basePay * 0.20;
		}
		else
		{
		}

		totalPay = basePay + jobCodeInc + yearCodeInc + eduCodeInc;
		rounded = int(totalPay * 100 + 0.5);
		dollars = rounded / 100;
		cents = rounded % 100;
	}
	else
	{
		cout << "One or more codes were invalid." << endl;
		if (!flagEmpCode)
		{
			cout << "Invalid employee code inputted." << endl;
		}
		if (!flagJobCode)
		{
			cout << "Invaled job code inputted." << endl;
		}
		if (!flagYearcode)
		{
			cout << "Invalid years inputted." << endl;
		}
		if (!flagEduCode)
		{
			cout << "Invalid educational code." << endl;
		}
	}
	cout << left << setw(25) << "Name" << setw(15) << "ID#" << setw(15) << "Job Type" << setw(16) << "Gross Salary" << endl;
	cout << left<< setw(25) << firstName + " " + lastName << setw(15) << idNum << setw(15)
		<< jobType << right << setw(6) << "$" << dollars << "." << cents << endl;
	
	system("pause");
	return 0;
}
