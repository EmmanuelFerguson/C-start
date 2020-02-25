//Lab 1 CS1
//By Emmanuel Ferguson

#include <iostream>

using namespace std;

int main()
{
	double weight;
	double height;
	int age;
	double BMR;
	double activityFactor;
	double caloriesBurnt;

	cout << "Welcome to the BMR calculation program!\n\n"
		<< "Here we will calculate your BMR, but first we need data"
		<< "on your" <<endl;

	cout << "Please enter your weight in pounds : ";
	cin >> weight;
	cout << "Please enter your height in feet : ";
	cin >> height;
	cout << "Please enter your age in years : ";
	cin >> age;
	cout << "These are the activity numbers for your lifestyle." 
		<< "Please enter just one of them. \n"
		<< "If you have a desk job and do no exercises then enter 1.2.\n"
		<< "If you do light exercise 1 to 3 days a week then enter 1.375.\n"
		<< "If you do moderate exercises 3 to 5 times a week enter 1.55 \n"
		<< "If you do hard exercises 6 to 7 days a week, enter 1.725 \n"
		<< "If you train hard in sports twice a day enter 1.9 : \n";
	cin >> activityFactor;
	
	BMR = 66 + 6.2 * weight + 152.4 * height - 6.8 * age;
	caloriesBurnt = BMR * activityFactor;
	cout << "\nHere are the results from our computation. \n"
		<< "\n*******************************************************\n"
		<< "You burn " << caloriesBurnt << " calories every day. "
		<< "If your calorie intake per day is more than that then \n"
		<< "you may wish to include more exercises in your daily life. \n"
		<< "Alternatively you may wish to cut down on your calorie intake as well. \n\n";
	
	return 0;
}