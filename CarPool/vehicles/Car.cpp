///////////////////////////////////////////////////////////////////////////
// Workfile : LogBook.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - car
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////
#include "Car.h"

std::ostream & Car::operator<<(std::ostream & os, Car & car)
{
	// TODO: insert return statement here
}

void Car::Print(std::ostream & os)
{
	os << "Fahrzeugart: PKW" << endl;
	os << "Marke: " << std::right << GetBrand() << endl;
	os << "Kennzeichen: " << std::right << GetLicense() << endl;
	os << mLogBook.PrintLogs();
}
