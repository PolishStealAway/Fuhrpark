///////////////////////////////////////////////////////////////////////////
// Workfile : LogBook.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - motorcycle
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////
#include "Motorcycle.h"


std::ostream & Motorcycle::operator<<(std::ostream & os, Motorcycle & motorcycle)
{
	// TODO: insert return statement here
}

void Motorcycle::Print(std::ostream & os)
{
	os << "Fahrzeugart: Motorrad" << endl;
	os << "Marke: " << std::right << GetBrand() << endl;
	os << "Kennzeichen: " << std::right << GetLicense() << endl;
	os << mLogBook.PrintLogs();
}
