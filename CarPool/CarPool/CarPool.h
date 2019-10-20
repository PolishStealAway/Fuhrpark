///////////////////////////////////////////////////////////////////////////
// Workfile : LogBook.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : car pool system which includes different vehicle types
// Remarks : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////

#ifndef CARPOOL_H
#define CARPOOL_H

#include "../Object.h"
#include "../Vehicles/Vehicle.h"
#include <list>

typedef std::list<Vehicle*>::iterator TVehicleItor;

class CarPool : public Object
{
public:
	//Adds a new vehicle to the carpool
	//param veh: an existing vehicle object
	void AddVehicle(Vehicle * const& veh);

	//Removes an existing vehicle out of the carpool
	//param veh: a vehicle that should be in the carpool
	void RemoveVehicle(Vehicle*& veh);

	//searches through the CarPool for an existing vehicle
	//param lic: license plate number of the vehicle
	//param found: iterator which points on the found vehicle
	//return: true if a vehicle was found else false
	bool SearchByLicense(std::string const& lic, TVehicleItor& found);

	//prints the info of all vehicles in the carpool
	void PrintVehicles(std::ostream & os);

	//get function for amount of vehicles
	size_t GetVehicleAmount();
private:

	//container which includes all vehicles
	std::list<Vehicle*> mVehicles;
};

#endif