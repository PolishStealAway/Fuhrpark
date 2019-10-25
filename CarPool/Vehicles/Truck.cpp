///////////////////////////////////////////////////////////////////////////
// Workfile : Truck.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class - truck
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////
#include "Truck.h"
#include "../PrintParameters.h"
#include <iomanip>	

Truck::Truck(std::string const& lic, std::string const& brand) : Vehicle{lic, brand}
{
}

void Truck::Print(std::ostream& os) const
{
	if (!os.good())
	{
		std::cerr << "error write stream" << std::endl;
	}
	os << std::setw(14) << std::left << "Fahrzeugart:" << std::right << "LKW" << std::endl;
	os << std::setw(14) << std::left << "Marke: " << std::right << mBrand << std::endl;
	os << std::setw(14) << std::left << "Kennzeichen: " << std::right << mLicense << std::endl;
	mLogBook.PrintLogs(os);
	os << std::endl;
}

Vehicle* Truck::Clone() const
{
	try
	{
		Truck* pTruck = new Truck{ *this };
		return pTruck;
	}
	catch (std::bad_alloc const& ex)
	{
		std::cerr << ex.what() << std::endl;
		std::cerr << cErrAllocation << std::endl;
		return nullptr;
	}
}
