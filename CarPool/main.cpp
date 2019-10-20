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
	string brand_tr_2 = "Königsegg";
	
	string lic_c_1 = "LL-ISSO5";
	string brand_c_1 = "Opel Corsa (nagelneu)";
	
	string lic_c_2 = "LL-C000L";
	string brand_c_2 = "Opel Corsa (verrostet und ohne Klima)";


	CarPool PandA_Solutions;

	Motorcycle adams_bike{lic_mc_1, brand_mc_1};
	Motorcycle phils_bike{lic_mc_2, brand_mc_2};
	
	Motorcycle adams_truck{lic_tr_1, brand_tr_1};
	Motorcycle phils_truck{lic_tr_2, brand_tr_2};
	
	Motorcycle adams_car{lic_c_1, brand_c_1};
	Motorcycle phils_car{lic_c_2, brand_c_2};

	


	return 0;
}