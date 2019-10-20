///////////////////////////////////////////////////////////////////////////
// Workfile : Car.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - car
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////
#include "Car.h"

std::ostream &operator<<(std::ostream & os, Car & car)
{
	os << "Fahrzeugart: LKW" << std::endl;
	os << "Marke: " << std::right << car.GetBrand() << std::endl;
	os << "Kennzeichen: " << std::right << car.GetLicense() << std::endl;
	car.GetLogbook().PrintLogs(os);

	return os;
}
