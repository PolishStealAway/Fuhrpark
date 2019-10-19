///////////////////////////////////////////////////////////////////////////
// Workfile : LogBook.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - truck
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////

#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle
{
private:
	std::ostream& operator<<(std::ostream & os, Truck & truck);

	void Print(std::ostream & os);
};

#endif
