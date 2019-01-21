// Exercise2: Getting to know you
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter your first name\n";
	string first_name;
	cin >> first_name;
	cout << "Enter your last name\n";
	string last_name;
	cin >> last_name;
	cout << "Enter your age\n";
	int age;
	cin >> age;
	int dog_years = (age * 7);
	cout << "How confident are you in programmers? (0-100)\n";
	int confidence;
	cin >> confidence;
	double percent = (confidence / 100);
	cout << "Hello " << first_name << " " << last_name << ", nice to meet you.\n";
	cout << "You are " << age << " in human years, but you are " << dog_years << " years old in dog years!\n";
	if (percent >= 0.5)
		cout << "Writing good code takes hard work!\n";
	else if (percent < 0.5)
		cout << "I agree, programmers cannot be trusted!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
