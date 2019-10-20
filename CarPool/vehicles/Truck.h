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

std::ostream& operator<<(std::ostream& os, Truck const & truck);

class Truck : public Vehicle
{

};

#endif
