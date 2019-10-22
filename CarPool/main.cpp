///////////////////////////////////////////////////////////////////////////
// Workfile : main.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : testdriver for the carpool
// Remarks : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "CarPool/CarPool.h"
#include "Vehicles/Truck.h"
#include "Vehicles/Car.h"
#include "Vehicles/Motorcycle.h"
#include "Vehicles/Vehicle.h"
#include <vld.h>

using namespace std;


int main()
{
	string lic_mc_1 = "LL-HAGE1";
	string brand_mc_1 = "Kawazaki";
	
	string lic_mc_2 = "LL-BERG2";
	string brand_mc_2 = "Yamaha";
	
	string lic_tr_1 = "LL-HARD3";
	string brand_tr_1 = "Mercedes";
	
	string lic_tr_2 = "LL-WARE4";
	string brand_tr_2 = "Koenigsegg";
	
	string lic_c_1 = "LL-ISSO5";
	string brand_c_1 = "Opel Corsa (nagelneu)";
	
	string lic_c_2 = "LL-C000L";
	string brand_c_2 = "Opel Corsa (verrostet und ohne Klima)";


	CarPool PandA_Solutions;

	Motorcycle adams_bike{lic_mc_1, brand_mc_1};
	Motorcycle phils_bike{lic_mc_2, brand_mc_2};
	
	Truck adams_truck{lic_tr_1, brand_tr_1};
	Truck phils_truck{lic_tr_2, brand_tr_2};
	
	Car adams_car{lic_c_1, brand_c_1};
	Car phils_car{lic_c_2, brand_c_2};

	tm t1;
	t1.tm_year = 108;
	t1.tm_mon = 0;
	t1.tm_mday = 12;

	tm t2;
	t2.tm_year = 93;
	t2.tm_mon = 2;
	t2.tm_mday = 24;

	tm t3;
	t3.tm_year = 119;
	t3.tm_mon = 6;
	t3.tm_mday = 31;

	tm t4;
	t4.tm_year = 119;
	t4.tm_mon = 11;
	t4.tm_mday = 4;

	tm t5;
	t5.tm_year = 119;
	t5.tm_mon = 8;
	t5.tm_mday = 17;

	adams_bike.mLogBook.NewEntry(t1, 17);
	adams_bike.mLogBook.NewEntry(t2, 43);
	adams_bike.mLogBook.NewEntry(t3, 21);
	adams_bike.mLogBook.NewEntry(t4, 43);
	adams_bike.mLogBook.NewEntry(t5, 89);

	phils_bike.mLogBook.NewEntry(t1, 432);
	phils_bike.mLogBook.NewEntry(t2, 23);
	phils_bike.mLogBook.NewEntry(t3, 26);
	phils_bike.mLogBook.NewEntry(t4, 117);
	phils_bike.mLogBook.NewEntry(t5, 45);

	adams_truck.mLogBook.NewEntry(t1, 67);
	adams_truck.mLogBook.NewEntry(t2, 98);
	adams_truck.mLogBook.NewEntry(t3, 45);
	adams_truck.mLogBook.NewEntry(t4, 34);
	adams_truck.mLogBook.NewEntry(t5, 21);

	phils_truck.mLogBook.NewEntry(t1, 4567);
	phils_truck.mLogBook.NewEntry(t2, 243456);
	phils_truck.mLogBook.NewEntry(t3, 4332);
	phils_truck.mLogBook.NewEntry(t4, 6789);
	phils_truck.mLogBook.NewEntry(t5, 4321);

	adams_car.mLogBook.NewEntry(t1, 231);
	adams_car.mLogBook.NewEntry(t2, 927);
	adams_car.mLogBook.NewEntry(t3, 7028);
	adams_car.mLogBook.NewEntry(t4, 211);
	adams_car.mLogBook.NewEntry(t5, 6837);

	phils_car.mLogBook.NewEntry(t1, 265);
	phils_car.mLogBook.NewEntry(t2, 1093);
	phils_car.mLogBook.NewEntry(t3, 483);
	phils_car.mLogBook.NewEntry(t4, 46);
	phils_car.mLogBook.NewEntry(t5, 7392);

	PandA_Solutions.AddVehicle(adams_bike.Clone());
	PandA_Solutions.AddVehicle(adams_truck.Clone());
	PandA_Solutions.AddVehicle(adams_car.Clone());

	PandA_Solutions.AddVehicle(phils_bike.Clone());
	PandA_Solutions.AddVehicle(phils_truck.Clone());
	PandA_Solutions.AddVehicle(phils_car.Clone());

	cout << "All added vehicles: " << endl;
	cout << "-----------------------------------" << endl;
	PandA_Solutions.PrintVehicles(cout);

	PandA_Solutions.RemoveVehicle(adams_car.GetLicense());

	cout << "Adams Car (LL-ISSO5) got removed: " << endl;
	cout << "-----------------------------------" << endl;

	PandA_Solutions.PrintVehicles(cout);

	cout << "Print LKW with license 'LL-HARD3' (SearchByLicense): " << endl;
	cout << "-----------------------------------" << endl;

	TVehiclePointerItor it;
	if (PandA_Solutions.SearchByLicense("LL-HARD3", it))
	{
		(*it)->Print(cout);
	}
	else
	{
		cerr << "LKW with the license 'LL-HARD3' does not exist";
	}

	cout << "Number of vehicles in the car pool: " << endl;
	cout << PandA_Solutions.GetVehicleAmount() << endl << endl;

	cout << "Print vehicles of copied object (Copy CTOR): " << endl;
	cout << "-----------------------------------" << endl;

	CarPool carpool1{ PandA_Solutions };
	carpool1.PrintVehicles(cout);

	cout << "Remove vehicle with license 'LL-HARD3' and assign PandA_Solutions to carpool1 (assignment operator): " << endl;
	cout << "-----------------------------------" << endl;
	PandA_Solutions.RemoveVehicle("L-HARD3");
	carpool1 = PandA_Solutions;
	carpool1.PrintVehicles(cout);
	

	return 0;
}