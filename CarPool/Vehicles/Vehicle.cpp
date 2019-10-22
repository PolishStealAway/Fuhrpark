///////////////////////////////////////////////////////////////////////////
// Workfile : Vehicle.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////
#include "Vehicle.h"


std::string Vehicle::GetBrand() const
{
	return mBrand;
}

std::string Vehicle::GetLicense() const
{
	return mLicense;
}

Vehicle::Vehicle(std::string const& lic, std::string const& brand) : mLicense{lic}, mBrand{brand}
{
}

