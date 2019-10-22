///////////////////////////////////////////////////////////////////////////
// Workfile : Motorcycle.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - motorcycle
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////
#include "Motorcycle.h"

Motorcycle::Motorcycle(std::string& lic, std::string& brand) : Vehicle{lic, brand}
{
}

void Motorcycle::Print(std::ostream& os) const
{
	os << "Fahrzeugart: Motorrad" << std::endl;
	os << "Marke: " << std::right << mBrand << std::endl;
	os << "Kennzeichen: " << std::right << mLicense << std::endl;
	mLogBook.PrintLogs(os);
	os << std::endl;
}
