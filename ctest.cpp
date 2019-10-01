// test customer
#include <iostream>
#include "Customer.h"

using namespace std;

int main()
{
	Customer c("Doe", 'J', 3344);
	cout << c;
	cout << "Hello from customer test" << endl;
	return 0;
}
