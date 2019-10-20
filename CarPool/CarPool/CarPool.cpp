///////////////////////////////////////////////////////////////////////////
// Workfile : LogBook.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : car pool system which includes different vehicle types
// Remarks : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////
#include "../CarPool/CarPool.h"


void CarPool::AddVehicle(Vehicle const * const veh)
{
	mVehicles.emplace_back(veh);
}

void CarPool::RemoveVehicle(Vehicle *& veh)
{
	delete veh;
	veh = nullptr;
	mVehicles.remove(veh);
}

Vehicle& CarPool::SearchByLicense(std::string & lic)
{
	for (auto it = mVehicles.cbegin(); it != mVehicles.cend(); ++it)
	{
		if (it->GetLicense() == lic)
		{
			return (it);
		}
	}
}

void CarPool::PrintVehicles(std::ostream & os)
{
	for (auto it = mVehicles.cbegin(); it != mVehicles.cend(); ++it)
	{
		
	}
}

size_t CarPool::GetVehicleAmount()
{
	return mVehicles.size();
}
