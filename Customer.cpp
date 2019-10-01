/*
 * Customer.cpp
 *
 *  Created on: Mar 5, 2010
 *      Author: mori
 */

#include "Customer.h"

// Default Constructor
Customer::Customer() {
	cout << "Default Constructor called" << endl;
	lastName = " ";
	firstInitial = ' ';
	accountBalance = 0;
}

Customer::Customer(string x, char y, int z) 
: lastName(x), firstInitial(y), accountBalance(z)
{ }

Customer::~Customer(){
}

//getters
string getLastName(string name){
	return name;
}

char getFirstInitial(char initial){
	return initial;
}

int getAccountBalance(int balance){
	return balance;
}

//setters
void setAccountBalance(int balance){
	balance = 0;
}

ostream& operator<<(ostream & os,  Customer & c) {
	os << c.lastName << ", " << c.firstInitial << ". (" << c.accountBalance << ")";
    return os;
}
