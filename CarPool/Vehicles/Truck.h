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
	Truck(std::string const& lic, std::string const& brand);

	void Print(std::ostream& os) const override;

	Vehicle* Clone() const override;
};

#endif
