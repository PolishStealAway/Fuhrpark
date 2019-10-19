///////////////////////////////////////////////////////////////////////////
// Workfile : LogBook.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - truck
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////
#include "Truck.h"


std::ostream & Truck::operator<<(std::ostream & os, Truck & truck)
{
	os << Print();
}

void Truck::Print(std::ostream & os)
{
	os << "Fahrzeugart: LKW" << endl;
	os << "Marke: " << std::right << GetBrand() << endl;
	os << "Kennzeichen: " << std::right << GetLicense() << endl;
	os << mLogBook.PrintLogs();
}
