///////////////////////////////////////////////////////////////////////////
// Workfile : LogBook.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : car pool system which includes different vehicle types
// Remarks : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////
#include "../CarPool/CarPool.h"
#include <algorithm>



void CarPool::AddVehicle(Vehicle const * const& veh)
{
	mVehicles.emplace_back(veh);
}

void CarPool::RemoveVehicle(Vehicle *& veh)
{
	delete veh;
	veh = nullptr;
	mVehicles.remove(veh);
}

bool CarPool::SearchByLicense(std::string const& lic, TVehicleItor & found)
{
	auto compByLicense = [&](auto * v) { return v->GetLicense() == lic; };
	found = std::find_if(mVehicles.begin(), mVehicles.end(), compByLicense);
	if (found != mVehicles.cend())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void CarPool::PrintVehicles(std::ostream & os)
{
	for (auto it = mVehicles.cbegin(); it != mVehicles.cend(); ++it)
	{
		os << *it;
	}
}

size_t CarPool::GetVehicleAmount()
{
	return mVehicles.size();
}
