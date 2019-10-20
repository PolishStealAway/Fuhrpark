///////////////////////////////////////////////////////////////////////////
// Workfile : Truck.h
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
public:
	Truck(std::string& lic, std::string& brand);
};

std::ostream& operator<<(std::ostream& os, Truck const& truck);

#endif
