///////////////////////////////////////////////////////////////////////////
// Workfile : Motorcycle.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - motorcycle
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////
#include "Motorcycle.h"
#include "../PrintParameters.h"
#include <iomanip>

Motorcycle::Motorcycle(std::string& lic, std::string& brand) : Vehicle{lic, brand}
{
}

void Motorcycle::Print(std::ostream& os) const
{
	if (!os.good())
	{
		std::cerr << "error write stream" << std::endl;
	}
	os << std::setw(14) << std::left << "Fahrzeugart:" << std::right << "Motorrad" << std::endl;
	os << std::setw(14) << std::left << "Marke: " << std::right << mBrand << std::endl;
	os << std::setw(14) << std::left << "Kennzeichen: " << std::right << mLicense << std::endl;
	mLogBook.PrintLogs(os);
	os << std::endl;
}

Vehicle* Motorcycle::Clone() const
{
	try
	{
		Motorcycle* pMotorcycle = new Motorcycle{ *this };
		return pMotorcycle;
	}
	catch (std::bad_alloc const& ex)
	{
		std::cerr << ex.what() << std::endl;
		std::cerr << cErrAllocation << std::endl;
		return nullptr;
	}
}
