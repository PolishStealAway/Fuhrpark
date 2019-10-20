///////////////////////////////////////////////////////////////////////////
// Workfile : Truck.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - truck
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////
#include "Truck.h"


std::ostream& operator<<(std::ostream& os, Truck const& truck)
{
	os << "Fahrzeugart: LKW" << std::endl;
	os << "Marke: " << std::right << truck.GetBrand() << std::endl;
	os << "Kennzeichen: " << std::right << truck.GetLicense() << std::endl;
	truck.GetLogbook().PrintLogs(os);

	return os;
}
