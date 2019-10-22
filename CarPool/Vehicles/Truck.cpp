///////////////////////////////////////////////////////////////////////////
// Workfile : Truck.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - truck
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////
#include "Truck.h"

Truck::Truck(std::string const& lic, std::string const& brand) : Vehicle{lic, brand}
{
}

void Truck::Print(std::ostream& os) const
{
	os << "Fahrzeugart: LKW" << std::endl;
	os << "Marke: " << std::right << mBrand << std::endl;
	os << "Kennzeichen: " << std::right << mLicense << std::endl;
	mLogBook.PrintLogs(os);
	os << std::endl;
}

Vehicle* Truck::Clone() const
{
	return new Truck{ *this };
}
