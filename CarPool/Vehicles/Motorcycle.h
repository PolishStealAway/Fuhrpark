///////////////////////////////////////////////////////////////////////////
// Workfile : Motorcycle.h
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - motorcycle
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////

#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include "Vehicle.h"

class Motorcycle : public Vehicle
{
public:

	Motorcycle(std::string& lic, std::string& brand);
};

std::ostream& operator<<(std::ostream& os, Motorcycle const& motorcycle);

#endif