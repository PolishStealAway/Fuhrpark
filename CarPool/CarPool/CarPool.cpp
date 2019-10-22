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

CarPool::~CarPool()
{
	for (auto it = mVehicles.begin(); it != mVehicles.end(); ++it)
	{
		delete *it;
		*it = nullptr;
	}

	mVehicles.clear();
}

CarPool::CarPool(CarPool const& c)
{
	/*for (auto it = c.mVehicles.cbegin(); it != c.mVehicles.cend(); ++it)
	{
		AddCar
	}*/
}

void CarPool::AddCar(Car const& c)
{
	TVehicleItor it;
	if (!SearchByLicense(c.GetLicense(), it))
	{
		Car* pVehicle = new Car{ c };
		mVehicles.emplace_back(pVehicle);
	}
	else
	{
		std::cerr << cErrLicenseAlreadyExists << std::endl;
	}
}

void CarPool::AddTruck(Truck const& t)
{
	TVehicleItor it;
	if (!SearchByLicense(t.GetLicense(), it))
	{
		Truck* pVehicle = new Truck{ t };
		mVehicles.emplace_back(pVehicle);
	}
	else
	{
		std::cerr << cErrLicenseAlreadyExists << std::endl;
	}
}

void CarPool::AddMotorcycle(Motorcycle const& m)
{
	TVehicleItor it;
	if (!SearchByLicense(m.GetLicense(), it))
	{
		Motorcycle* pVehicle = new Motorcycle{ m };
		mVehicles.emplace_back(pVehicle);
	}
	else
	{
		std::cerr << cErrLicenseAlreadyExists << std::endl;
	}
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
		(*it)->Print(os);
	}
}

size_t CarPool::GetVehicleAmount()
{
	return mVehicles.size();
}
