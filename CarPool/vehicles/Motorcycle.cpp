///////////////////////////////////////////////////////////////////////////
// Workfile : Motorcycle.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - motorcycle
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////
#include "Motorcycle.h"


std::ostream &operator<<(std::ostream & os, Motorcycle & motorcycle)
{
	os << "Fahrzeugart: Motorrad" << std::endl;
	os << "Marke: " << std::right << motorcycle.GetBrand() << std::endl;
	os << "Kennzeichen: " << std::right << motorcycle.GetLicense() << std::endl;
	motorcycle.GetLogbook().PrintLogs(os);

	return os;
}

