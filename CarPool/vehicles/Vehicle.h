///////////////////////////////////////////////////////////////////////////
// Workfile : LogBook.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : vehicle class
// Remarks : -
// Revision : 0	
///////////////////////////////////////////////////////////////////////////

#ifndef VEHICLE_H
#define VEHICLE_H
#include "LogBook.h"

class Vehicle : public Object
{
public:

	// CTor 
	Vehicle() = 0;

	//Get-function for brand
	std::string GetBrand();
	//Get-function for license plate
	std::string GetLicense();


	LogBook mLogBook;


private:

	std::string mBrand;

	std::string mLicense;
};

#endif