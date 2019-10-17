///////////////////////////////////////////////////////////////////////////
// Workfile : LogBook.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : drivers log book for a vehicle
// Remarks : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////

#ifndef LOGBOOK_H
#define LOGBOOK_H

#include "Object.h"
#include <vector>
#include <ctime>
#include <ostream>

class LogBook : public Object
{
public:

	//Creates a new entry and adds it to the log book
	//param date: Struct tm from ctime
	//param distance: the driven distance in km
	void NewEntry(tm const& date, size_t const distance);

	//Removes one single entry and which contains exactly the given date and distance
	//param date: Struct tm from ctime
	//param distance: the driven distance in km
	//return: true if a entry got deleted, false if no deleteable entry was found
	bool RemoveEntry(tm const& date, size_t const distance);

	//Sorts all entries ascending by date
	void SortByDate();

	//Prints the whole log book to the given ostream
	//param: ostream to write
	void PrintLogs(std::ostream& ost);

	//Deletes all entries
	void Clear();

	//Calculates the total distance in km
	//return: total distance in km
	size_t GetKMSum();

private:

	//This structure maps an entry in the log book
	struct TEntry
	{
		tm date;
		size_t distance;
	};

	std::vector<TEntry> mEntries;

	//TEntry CreateEntry(tm& date, size_t distance);
};

#endif