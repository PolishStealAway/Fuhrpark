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

std::ostream& operator<<(std::ostream& os, Car& car);

class Car : public Vehicle
{
};

#endif
