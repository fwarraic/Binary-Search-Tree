/*
 * Customer.h
 *
 *  Created on: Mar 5, 2010
 *      Author: mori
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
#include <iostream>
using namespace std;

class Customer {
public:
	
	Customer();
	Customer(string x, char y, int z){};
	~Customer();

	//getters
	string getLastName(string name);
	char getFirstInitial(char initial);
	int getAccountBalance(int balance);

	//setters
	void setAccountBalance(int balance);

	//overloaded operators

	

private:
	friend ostream& operator<<(ostream & os,  Customer & c);

	string lastName;
	char firstInitial;
	int accountBalance;

};

#endif /* CUSTOMER_H_ */
