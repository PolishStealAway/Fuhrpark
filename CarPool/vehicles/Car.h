///////////////////////////////////////////////////////////////////////////
// Workfile : LogBook.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - car
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////

#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle
{
private:
	std::ostream& operator<<(std::ostream & os, Car & car);

	void Print(std::ostream & os);
};

#endif
