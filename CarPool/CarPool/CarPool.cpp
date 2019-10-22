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
#include <iostream>

static const std::string cErrLicenseAlreadyExists = "License already exists! Couldn't add vehicle.";
static const std::string cErrVehicleDoesNotExist = "Vehicle does not exist! Couldn't remove vehicle.";

CarPool::~CarPool()
{
	Free();
}

CarPool::CarPool(CarPool const& cp)
{
	Copy(cp);
}

void CarPool::operator=(CarPool const& cp)
{
	Free();
	Copy(cp);
}

void CarPool::AddVehicle(Vehicle const* v)
{
	TVehicleItor it;
	if (!SearchByLicense(v->GetLicense(), it))
	{
		mVehicles.emplace_back(v);
	}
	else
	{
		std::cerr << cErrLicenseAlreadyExists << std::endl;
	}
}

void CarPool::RemoveVehicle(Vehicle const* v)
{
	TVehicleItor it;
	if (SearchByLicense(v->GetLicense(), it))
	{
		mVehicles.erase(it);
	}
	else
	{
		std::cerr << cErrVehicleDoesNotExist << std::endl;
	}
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
		(*it)->Print(os);
	}
}

size_t CarPool::GetVehicleAmount()
{
	return mVehicles.size();
}

void CarPool::Copy(CarPool const& cp)
{
	for (auto it = cp.mVehicles.cbegin(); it != cp.mVehicles.cend(); ++it)
	{
		AddVehicle((*it)->Clone());
	}
}

void CarPool::Free()
{
	for (auto it = mVehicles.begin(); it != mVehicles.end(); ++it)
	{
		delete* it;
		*it = nullptr;
	}

	mVehicles.clear();
}
