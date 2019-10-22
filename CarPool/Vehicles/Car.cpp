///////////////////////////////////////////////////////////////////////////
// Workfile : Car.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - car
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////
#include "Car.h"
#include "../PrintParameters.h"
#include <iomanip>


Car::Car(std::string const& lic, std::string const& brand) : Vehicle {lic, brand}
{
}

void Car::Print(std::ostream& os) const
{
	if (!os.good())
	{
		std::cerr << "error write stream" << std::endl;
	}
	os << std::setw(14) << std::left << "Fahrzeugart:" << std::right << "PKW" << std::endl;
	os << std::setw(14) << std::left << "Marke: " << std::right << mBrand << std::endl;
	os << std::setw(14) << std::left << "Kennzeichen: "  << std::right << mLicense << std::endl;
	mLogBook.PrintLogs(os);
	os << std::endl;
}

Vehicle* Car::Clone() const
{
	return new Car{ *this };
}
