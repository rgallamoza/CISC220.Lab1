/*
 * main.cpp
 *
 *  Created on: Aug 31, 2017
 *      Author: Ryan
 */

/*
 * Ryan Gallamoza
 * TA's name
 * 8/31/2017
 * Lab 1
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

bool isPrime(int x);

// Problem 1, and test calls for future problems
int main(){
	cout << "Problem 1" << endl;
	cout << "Hello world" << endl;

	cout << "*****" << endl;
	cout << "Problem 2" << endl;
	cout << isPrime(2) << endl; // Expected: true
	cout << isPrime(0) << endl; // Expected: false
	cout << isPrime(29) << endl; // Expected: true

	cout << "*****" << endl;
	cout << "Problem 3" << endl;

	cout << "*****" << endl;
	cout << "Problem 4" << endl;

	cout << "*****" << endl;
	cout << "Problem 5" << endl;

	cout << "*****" << endl;
	cout << "Problem 6" << endl;

	cout << "*****" << endl;
	cout << "Problem 7" << endl;

	cout << "*****" << endl;
	cout << "Problem 8" << endl;

	cout << "*****" << endl;
	cout << "Problem 9" << endl;
	return 0;
}

//Problem 2
bool isPrime(int x){
	bool a = false;
	int divisor = 2;
	if(x>1){
		while (divisor < x){
				if (x % divisor == 0){
					a = true;
				}
			}
	}

	return a;
}
