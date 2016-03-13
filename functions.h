#ifndef functions_H
#define functions_H

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::map;
using std::set;

// part 1: exceptions function

// dividing by zero

double divide(double a, double b) {
	if (b == 0)
		throw 0;
	else
		return a / b;
}

//part 2: template function

// combining words

template <typename T>
T wordCombo(T a, T b) {
	return a + " " + b;
}

// part 3: vector function

// add word-function

void addWord(vector<string>* v) {
	int number;
	string newWord;
	cout << endl;
	cout << "How many words would you like to add? ";
	cin >> number;
	for (int i = 1; i <= number; i++) {
		cout << "Please enter your new word: ";
		cin >> newWord;
		v->push_back(newWord);
	}
	cout << endl;

}

// delete word-function

void deleteWord(vector<string>* v) {
	int number;
	string eraseWord;
	cout << endl;
	cout << "Which word do you want to delete? ";
	cin >> eraseWord;
	vector<string>::iterator newEraseWord = find(v->begin(), v->end(), eraseWord);
	v->erase(newEraseWord);

	cout << "This is how many words you have left: " << v->size();
	cout << endl << endl;
}

// part 4: Recursion

// greatest common denominator function

int gcd(int a, int b) {
	// converting from negative numbers
	if (a < 0)
		a *= -1;
	if (b < 0)
		b *= -1;
	// base case
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	//recursive case
	if (a > b)
		return gcd(a - b, b);
	else
		return gcd(a, b - a);

}

//fibonacci function

int fib(int n) {
	// error checking
	if (n < 1) throw "Error: invalid fibonacci input";
	// base case
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	// recursive case
	return fib(n - 1) + fib(n - 2);
}

// power function

int pow(int b, int e) {
	// error checking 
	if (e < 0) throw "Error : invalid power exponent";
	// base case
	if (e == 0)
		return 1;
	// recursive case
	return b * pow(b, e - 1);

}

//triangle function

int tri(int n) {
	// error checking 
	if (n < 0) throw "Error : invalid triangle input";
	// base case
	if (n == 1)
		return 1;
	// recursive case
	return n + tri(n - 1);
}

// ITERATIONS of Functions

//GCD iter function
int gcd_iter(int a, int b) {
	if (a == b)
		return a;
	else {
		int gcd = 0;
		while (b != 0) {
			int temp = a%b;
			if (temp == 0)
				gcd = b;
			a = b;
			b = temp;
		}
		return gcd;
	}
}

// fibonacci inter function
int fib_iter(int n) {
	//error check
	if (n < 1) throw "Error: invalid fibonacci input";

	if (n == 1 || n == 2)
		return 1;
	else {
		int n1 = 1, int n2 = 1,fib = 0;
		for (int i = 3; i <=n; i++) {
			fib = n1 + n2;
			n1 = n2;
			n2 = fib;
		}
		return fib;
	}
}

//power iter function
int pow_iter(int b, int e) {
	//error check
	if (e < 0) throw "Error : invalid power exponent";

	int pow = 1;
	for (int i = 0; i < e; i++) {
		pow *= b;
	}
	return pow;
}

//triangle iter function
int tri_iter(int n) {
	//error check
	if (n < 0) throw "Error : invalid triangle input";

	int tri = 0;
	for (int i = 0; i <= n; i++) {
		tri += i;
	}
	return tri;
}
#endif
