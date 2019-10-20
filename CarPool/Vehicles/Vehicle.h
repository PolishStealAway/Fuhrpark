///////////////////////////////////////////////////////////////////////////
// Workfile : Vehicle.h
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////

#ifndef VEHICLE_H
#define VEHICLE_H
#include "../LogBook/LogBook.h"
#include "../Object.h"

class Vehicle : public Object
{
public:

	//Get-function for brand
	std::string GetBrand() const;

	//Get-function for license plate
	std::string GetLicense() const;

	//Get-function for logbook
	LogBook& GetLogbook();



private:
	LogBook mLogBook;

	std::string mBrand;

	std::string mLicense;
};

#endif