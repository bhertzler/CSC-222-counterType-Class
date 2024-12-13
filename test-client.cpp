// test-client.cpp; this file contains the main() function.
//

// Benjamin Hertzler
// CSC 222
// counterType Class
//

#include "counterType.h"
#include <iostream>
using namespace std;

int main()
{
	counterType default_counter;
	int count;
	cout << "-- Counter --" << endl;
	cout << "Enter an integer: ";
	cin >> count;
	counterType user_counter(count);
	user_counter.increment();
	cout << endl << "Your count incremented is: " << user_counter.getCount() << endl;
	user_counter.decrement();
	cout << "Your count decremented is: " << user_counter.getCount() << endl;
	user_counter.reset();
	cout << "Your count reset is: " << user_counter.getCount() << endl;
	user_counter.decrement();
	cout << "Attempting to decrement the count further sets the count to: " << user_counter.getCount() << endl;
	default_counter.setCount(10);
	cout << "If the value of a counter is set to 10 it becomes: " << default_counter.getCount() << endl;
}