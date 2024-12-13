// counterType.h, the specification file for the class counterType
//

// Benjamin Hertzler
// CSC 222
// counterType Class
//

#include "counterType.h"

// Macro Constants

#define DEFAULT 0

// Public Member Functions

void counterType::setCount(int c)
{
	counter = c;
	validateInvariant();
}

int counterType::getCount() const
{
	return counter;
}

void counterType::increment()
{
	counter += 1;
}

void counterType::decrement()
{
	counter -= 1;
	validateInvariant();
}

void counterType::reset()
{
	counter = DEFAULT;
}


// Default Constructor

counterType::counterType()
{
	counter = DEFAULT;
}

// Constructor with Parameter

counterType::counterType(int c)
{
	counter = c;
	validateInvariant();
}

// Private Member Functions

void counterType::validateInvariant()
{
	if (counter < DEFAULT)
		counter = DEFAULT;
}

// Private Member Variables

int counter;

