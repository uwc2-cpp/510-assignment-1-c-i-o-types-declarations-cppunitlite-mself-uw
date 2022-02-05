#include "TestHarness.h"
#include <iostream>
#include <cstdlib>

#include <regex>
using namespace std;

int main()
{
	//Part 1 of Assignment 1 BEGIN
	regex validIntegerSyntax("\-?\\d+");
	string userIntInput;
	int intValue;

	regex validDoubleSyntax("\-?\\d+[.]\\d+");
	string userDoubleInput;
	double doubleValue;
	
	string userStringInput;

	for (;;)
	{
		cout << "Pleae enter an integer: ";
		cin >> userIntInput;
		if (!regex_match(userIntInput, validIntegerSyntax))
		{
			cout << "Invalid input: not an integer.\n";
			continue;
		}
		intValue = stoi(userIntInput, nullptr, 10);
		break;
	}
	for (;;)
	{
		cout << "Please enter a double: ";
		cin >> userDoubleInput;
		if (!regex_match(userDoubleInput, validDoubleSyntax))
		{
			cout << "Invalid input: not an double.\n";
			continue;
		}
		doubleValue = stod(userDoubleInput, nullptr);
		break;
	}
	cout << "Please enter a string: ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, userStringInput);

	cout << "User Int Input: " << intValue << endl;
	cout << "User Double Input: " << doubleValue << endl;
	cout << "User String Input: " << userStringInput << endl;
	cout << "\n-----------------------\n\n";
	//Part 1 of Assignment 1 END
	
	// random number generator used in some tests
	srand(::time_t(NULL));

    TestResult tr;
    TestRegistry::runAllTests(tr);

	// force console screen to hold
	char ch;
	std::cin >> ch;

    return 0;
}
