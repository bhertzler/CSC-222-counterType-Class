// counterType.h, the specification file for the class counterType
//

// Benjamin Hertzler
// CSC 222
// counterType Class
//

#pragma once

// Class to create a counter object.
// Public Member Functions:
//	- void setCount(int c);
//	- int getCount() const;
//	- void increment();
//	- void decrement();
//	- void reset();
//	- counterType();
//	- counterType(int c);
//
class counterType
{
public:
	// Function to set the initial count.
	// Precondition:	c must be an integer >= 0.
	// Postcondition:	counter = c
	void setCount(int c);

	// Function to return the count.
	// Postcondition:	returns counter
	//
	int getCount() const;

	// Function to increment the count.
	// Postcondition:	The value of counter is raised by 1.
	void increment();

	// Function to decrement the count.
	// Precondition:	counter must be > 0.
	// Postcondition:	The value of counter is lowered by 1.
	void decrement();

	// Function to restart the count.
	// Postcondition:	counter = 0
	void reset();

	// Default Constructor
	// Postcondition:	counter = 0
	counterType();

	// Constructor with Parameters
	// Precondition:	c must be an integer >= 0.
	// Postcondition:	counter = c
	counterType(int c);

private:
	void validateInvariant();		// Private function to check the validity of the value of counter.
	int counter;					// Variable to store the count.
};

