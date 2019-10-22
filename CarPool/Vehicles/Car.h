///////////////////////////////////////////////////////////////////////////
// Workfile : Car.h
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
public:
	Car(std::string const& lic, std::string const& brand);

	void Print(std::ostream& os) const override;

	Vehicle* Clone() const override;
};

#endif
