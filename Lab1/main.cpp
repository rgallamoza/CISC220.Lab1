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
int sumBtw(int x, int y);
void leapYr400(int yr);
void numTriangle(int x);
void printArmstrong(int x);

// Problem 1, and test calls for future problems
int main(){
	cout << "Problem 1" << endl;
	cout << "Hello world" << endl;

	cout << "*************************" << endl;
	cout << "Problem 2" << endl;
	cout << isPrime(2) << endl; // Expected: true (1)
	cout << isPrime(1) << endl; // Expected: false (0)
	cout << isPrime(29) << endl; // Expected: true (1)

	cout << "*************************" << endl;
	cout << "Problem 3" << endl;
	cout << sumBtw(1,10) << endl; // Expected: 44
	cout << sumBtw(10,1) << endl; // Expected: 44
	cout << sumBtw(2,2) << endl; // Expected: 0

	cout << "*************************" << endl;
	cout << "Problem 4" << endl;
	leapYr400(2017); // Expected: 2020 to 2416 in increments of 4, excluding 2100, 2200, 2300

	cout << "*************************" << endl;
	cout << "Problem 5" << endl;
	numTriangle(4); // Expected: refer to lab instructions, problem 5
	numTriangle(5); // Expected: refer to lab instructions, problem 5

	cout << "*************************" << endl;
	cout << "Problem 6" << endl;
	printArmstrong(10000); // Expected: 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474

	cout << "*************************" << endl;
	cout << "Problem 7" << endl;

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
void printArmstrong(int x){
	int length, digit, digitPow, num, sum;
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
			}
		}
	}
}




