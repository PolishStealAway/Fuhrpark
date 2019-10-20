///////////////////////////////////////////////////////////////////////////
// Workfile : LogBook.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////
#include "Vehicle.h"


std::string Vehicle::GetBrand()
{
	return mBrand;
}

std::string Vehicle::GetLicense()
{
	return mLicense;
}

LogBook& Vehicle::GetLogbook()
{
	return mLogBook;
}

