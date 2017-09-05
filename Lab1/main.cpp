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
#include <stdio.h>
#include <stdlib.h>
using namespace std;

bool isPrime(int x);
/* Returns a boolean value based on whether the given int is a prime number.
 * Arguments: x: Integer to be evaluated.
 */

int sumBtw(int x, int y);
/* Returns the sum of each integer between two given integers. Given integers
 * are excluded from the sum.
 * Arguments: x: Any integer value to be evaluated.
 * 			  y: Any integer value to be evaluated.
 */

void leapYr400(int yr);
/* Prints each leap year between a given year and 400 years after that given year.
 * Arguments: yr: Year to start at
 */

void numTriangle(int x);
/* Prints a number triangle. Number of rows depends on the integer given.
 * Arguments: x: The number of rows of the triangle.
 */

int printArmstrong(int x);
/* Prints each Armstrong Number between 1 and the integer given. Returns a count
 * of Armstrong Numbers printed. If given integer is negative, no values are printed
 * or returned.
 * Arguments: x: Integer value to stop searching at.
 */

int maxNum(int a[]);
/* Returns the largest value in an array of numbers.
 * Arguments: a[]: Array of integers to be evaluated.
 */

bool isPalindrome(int a[]);
/* Returns a boolean value based on whether the given array is a palindrome.
 * Arguments: a[]: Array of integers to be evaluated.
 */

int concatenateList(int a[]);
/* Concatenates a list of integers to return a single integer.
 * Arguments: a[]: Array of integers to be evaluated.
 */

// Problem 1, and test calls for future problems
int main(){
	cout << "Problem 1" << endl;
	cout << "Hello world" << endl;

	cout << "*************************" << endl;
	cout << "Problem 2" << endl;
	cout << "Test 1:" << endl << isPrime(2) << endl; // Expected: true (1)
	cout << "Test 2:" << endl << isPrime(1) << endl; // Expected: false (0)
	cout << "Test 3:" << endl << isPrime(29) << endl; // Expected: true (1)

	cout << "*************************" << endl;
	cout << "Problem 3" << endl;
	cout << "Test 1:" << endl << sumBtw(1,10) << endl; // Expected: 44
	cout << "Test 2:" << endl << sumBtw(10,1) << endl; // Expected: 44
	cout << "Test 3:" << endl << sumBtw(2,2) << endl; // Expected: 0

	cout << "*************************" << endl;
	cout << "Problem 4" << endl;
	leapYr400(2017); // Expected: 2020 to 2416 in increments of 4, excluding 2100, 2200, 2300

	cout << "*************************" << endl;
	cout << "Problem 5" << endl;
	cout << "Test 1:" << endl;
	numTriangle(4); // Expected: refer to lab instructions, problem 5
	cout << "Test 2:" << endl;
	numTriangle(5); // Expected: refer to lab instructions, problem 5
	cout << "Test 1:" << endl;
	numTriangle(1); // Expected: Single 1 character

	cout << "*************************" << endl;
	cout << "Problem 6" << endl;
	cout << "Test 1:" << endl;
	cout << printArmstrong(10000) << endl; // Expected: 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474 to be printed, 16 to be returned at end
	cout << "Test 2:" << endl;
	cout << printArmstrong(1) << endl; // Expected: 1 to be printed, 1 to be returned at end
	cout << "Test 3:" << endl;
	cout << printArmstrong(0) << endl; // Expected: Nothing to be printed, 0 to be returned at end

	cout << "*************************" << endl;
	cout << "Problem 7" << endl;
	int array1[5] = {1, 2, 3, 4, 5};
	int array2[2] = {-2, 2};
	int array3[5] = {-10, -10000, 345, 222222, 1};
	cout << "Test 1:" << endl;
	cout << maxNum((&array1)[5]) << endl;
	cout << "Test 2:" << endl;
	cout << maxNum((&array2)[2]) << endl;
	cout << "Test 3:" << endl;
	cout << maxNum((&array3)[5]) << endl;

	cout << "*************************" << endl;
	cout << "Problem 8" << endl;

	cout << "*************************" << endl;
	cout << "Problem 9" << endl;
	return 0;
}

//Problem 2
bool isPrime(int x){
	bool a = true;
	int divisor = 2;
	if(x>1){
		while(divisor < x && a){
				if (x % divisor == 0){
					a = false;
				}
				divisor++;
			}
	}
	else{
		a = false;
	}

	return a;
}

//Problem 3
int sumBtw(int x, int y){
	int sum = 0, num;
	if(x>y){
		num = ++y;
		while(num<x){
			sum += num;
			num++;
		}
	}
	else if(y>x){
		num = ++x;
		while(num<y){
			sum += num;
			num++;
		}
	}

	return sum;
}

//Problem 4
void leapYr400(int yr){
	int endYr = yr + 400;
	while(yr <= endYr){
		if(yr % 4 == 0){
			if(yr % 100 == 0){
				if(yr % 400 == 0){
					cout << yr << endl;
				}
			}
			else{
				cout << yr << endl;
			}
		}
		yr++;
	}
}

//Problem 5
void numTriangle(int x){
	int row = 1, spaces, spacesBtw, numCount;
	while(row <= x){
		spaces = x - row;
		if(row==1){
			for(int i=0;i<spaces;i++){
				cout << " ";
			}
			cout << row << endl;
		}
		else if (row < x){
			spacesBtw = (2*row)-3;
			for(int i=0;i<spaces;i++){
				cout << " ";
			}
			cout << row;
			for(int i=0;i<spacesBtw;i++){
				cout << " ";
			}
			cout << row << endl;
		}
		else{
			numCount = (2*row)-1;
			for(int i=0;i<numCount;i++){
				if(i==numCount-1){
					cout << row << endl;
				}
				else{
					cout << row;
				}
			}
		}
		row++;
	}
}

//Problem 6
int printArmstrong(int x){
	int length, digit, digitPow, num, sum, count = 0;
	if(x >= 1){
		for(int i=1;i<=x;i++){
			length = 0, sum = 0, num = i;
			while(num != 0){
				num /= 10;
				length++;
			}
			num = i;
			while(num!=0){
				digit = num%10;
				digitPow = digit;
				for(int j=0;j<(length-1);j++){
					digitPow *= digit;
				}
				sum += digitPow;
				num /= 10;
			}
			if(sum==i){
				cout << i << endl;
				count++;
			}
		}
	}
	return count;
}

//Problem 7
int maxNum(int a[]){
	int size = sizeof(a)/sizeof(a[0]);
	int max = a[0];
	cout << size << endl;
	for(int i=1;i<=size;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	return max;
}


