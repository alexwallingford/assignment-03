/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Alex Wallingford <alexwallingford@csu.fullerton.edu>
* Released under the[MIT License](http://opensource.org/licenses/MIT)
*------------------------------------------------------------------------ - */

/*
* A series of programs including exceptions, template, STL (Vector, Set, Map) and recursive/iterative functions
*/

/*
References:
http://stackoverflow.com/questions/8777603/what-is-the-simplest-way-to-convert-array-to-vector
http://stackoverflow.com/questions/5333113/how-to-pass-a-vector-to-a-function
http://www.cplusplus.com/forum/beginner/99524/
http://www.cplusplus.com/forum/beginner/25649/
*/

#include <iostream>
#include <random>
#include<time.h>
#include<array>
#include<algorithm>
#include "functions.h"

int main() {
	//Declarations  
	bool isYes = true;
	double a = 0, b = 0;
	const int SIZE = 5;
	string word[5]{};
	int rand1, rand2;
	int choice;
	string yourFruit;
	string monthInsert;

	cout << "Assignment 3: " << endl << endl;
	// PART 1
	cout << "Part 1: Exception Function(Dividing by Zero)" << endl;

	do {
		cout << "Enter your first number: " << endl;
		cin >> a;
		cout << "Enter your second number: " << endl;
		cin >> b;

		try {
			cout << "Answer: " << divide(a, b) << endl;
		}
		catch (int b) {
			cout << "You can't divide by zero. " << endl;
			cout << "Please try again" << endl << endl;
			continue;
		}
		cout << endl;
		cout << "Would you like to divide again? (1=yes, 0=no) : ";
		cin >> isYes;
	} while (isYes);
	cout << endl << "End of Part 1" << endl << endl;

	// PART 2
	cout << "Part 2: Template Function(Combining Words)" << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter the number of words you would like" << i + 1 << " : ";
		cin >> word[i];
	}
	do {
		srand(time(0));
		rand1 = rand() % 5;
		rand2 = rand() % 5;
		cout << endl << "This is the random name you got: ";
		cout << wordCombo(word[rand1], word[rand2]) << endl;
		cout << endl;
		cout << "Would you like to do it again? (1=yes, 0=no): ";
		cin >> isYes;

	} while (isYes);

	cout << endl << "End of Part 2" << endl << endl;

	// PART 3
	// Vectors
	cout << "Part 3: Vector Function(Add / Subtract Words)" << endl;

	vector<string> v(std::begin(word), std::end(word));
	do {
		isYes = true;
		cout << "~Menu~" << endl;
		cout << "1) Add words" << endl;
		cout << "2) delete unwanted words" << endl;
		cout << "3) Display words you have left" << endl;
		cout << "4) Exit function" << endl << endl;
		cout << "Please select an option: ";
		cin >> choice;

		switch (choice) {
		case 1: addWord(&v);
			break;
		case 2: deleteWord(&v);
			break;
		case 3:
			cout << endl << "Your words are: ";
			for (string name : v) {
				cout << name << " ";
			}
			cout << endl << endl;
			break;
		default: isYes = false;

		}
	} while (isYes);
	cout << endl;

	// using (set)
	cout << "Part 3: Set(Making a List of Fruit)" << endl;

	set<string> fruit{ "banana", "orange", "pineapple", "grape", "cherry" };

	do {
		cout << endl << "We have a list of some fruits, please enter any fruit name: ";
		cin >> yourFruit;

		auto search = fruit.find(yourFruit);

		if (search != fruit.end()) {
			cout << endl;
			cout << (*search) << " is already in the list. Please try again" << endl;
		}

		else {
			cout << endl;
			cout << yourFruit << " is not found in the list and i just added ";
			fruit.insert(yourFruit);
			cout << yourFruit << "into the list of fruits" << endl << endl;
			cout << "Would you like to add another fruit to the list? (1=yes, 0=no): ";
			cin >> isYes;
		}

	} while (isYes);

	cout << endl;
	cout << "Here is your fruit list: " << endl;
	for (string fruitList : fruit) {
		cout << fruitList << " ";

	}
	cout << endl << endl;

	// using (map)
	cout << "Part 3(cont) : Vectors(Months)" << endl;

	isYes = true;
	map<string, int> month = { { "january", 31 },{ "february", 28 },{ "march", 31 },{ "april", 30 },{ "may", 31 },{ "june", 30 },{ "july", 31 },{ "august", 31 },{ "september", 30 },{ "october", 31 },{ "november", 30 },{ "november", 31 } };

	do {
		cout << "Please enter a month name: ";
		cin >> monthInsert;

		for (int i = 0; i < monthInsert.length(); i++) {
			monthInsert[i] = tolower(monthInsert[i]);

		}

		auto find = month.find(monthInsert);

		if (find != month.end()) {
			cout << find->first << " has " << find->second << " days.";
			cout << endl << endl;
			cout << "Would you like to check another month? (1=yes, 0=no): ";
			cin >> isYes;
		}
	} while (isYes);

	cout << endl << "End of Part 3" << endl << endl;

	cout << "Part 4 and 5: Recusive and Iterative functions(GCD, Fibonacci, Power, and Triangle)";
	cout << endl;

	do {
		try {
			cout << "(Recursive) Greatest Common Divisor for number " << rand1 << " and " << rand2 << " is " << gcd(rand1, rand2) << endl;
			cout << "(Iterative) Greatest Common Divisor for number " << rand1 << " and " << rand2 << " is " << gcd_iter(rand1, rand2) << endl << endl;
			cout << "(Recursive) Fibonacci number for index number " << rand1 << " is " << fib(rand1) << endl;
			cout << "(Iterative) Fibonacci number for index number " << rand1 << " is " << fib_iter(rand1) << endl << endl;
			cout << "(Recursive) Power for base " << rand1 << " and exponent " << rand2 << " is " << pow(rand1, rand2) << endl;
			cout << "(Iterative) Power for base " << rand1 << " and exponent " << rand2 << " is " << pow_iter(rand1, rand2) << endl << endl;
			cout << "(Recursive) Triangular number for number " << rand1 << " is " << tri(rand1) << endl;
			cout << "(Iterative) Triangular number for number " << rand1 << " is " << tri_iter(rand1) << endl << endl;
		}
		catch (char * err) {
			cout << err;
		}
		cout << "Would you like to do the functions again? (1=yes, 0=no)";
			cin >> isYes;
		cout << endl;


	} while (isYes);
}
