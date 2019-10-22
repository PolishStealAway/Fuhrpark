///////////////////////////////////////////////////////////////////////////
// Workfile : Car.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - car
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////
#include "Car.h"

Car::Car(std::string const& lic, std::string const& brand) : Vehicle {lic, brand}
{
}

void Car::Print(std::ostream& os) const
{
	os << "Fahrzeugart: PKW" << std::endl;
	os << "Marke: " << std::right << mBrand << std::endl;
	os << "Kennzeichen: " << std::right << mLicense << std::endl;
	mLogBook.PrintLogs(os);
	os << std::endl;
}

Vehicle* Car::Clone() const
{
	return new Car{ *this };
}
