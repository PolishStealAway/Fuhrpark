///////////////////////////////////////////////////////////////////////////
// Workfile : LogBook.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : car pool system which includes different vehicle types
// Remarks : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////
#include "..\CarPool\CarPool.h"


void CarPool::AddVehicle(Vehicle & veh)
{
	mVehicles.emplace_back(veh);
}

void CarPool::RemoveVehicle(Vehicle & veh)
{
	mVehicles.remove(veh);
}

Vehicle CarPool::SearchByLicense(std::string & lic)
{
	for (auto it = mVehicles.cbegin(); it != mVehicles.cend(); ++it)
	{
		if (it->GetLicense() == lic)
		{
			return it;
		}
	}
}

void CarPool::PrintVehicles(std::ostream & os)
{
	for (auto it = mVehicles.cbegin(); it != mVehicles.cend(); ++it)
	{
		it->PrintVehicle();
	}
}
