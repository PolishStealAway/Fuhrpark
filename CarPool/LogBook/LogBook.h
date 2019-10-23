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

#include "../Object.h"
#include <vector>
#include <ctime>
#include <ostream>

//Class which represents a log book for vehicles
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

	//Prints the whole log book to the given ostream
	//param ost: ostream to write
	void PrintLogs(std::ostream& ost) const;

	//Deletes all entries
	void Clear();

	//Calculates the total distance in km
	//return: total distance in km
	size_t GetKMSum() const;

private:

	//This class represents an entry in the log book
	class TEntry
	{
	public:
		tm mDate;
		size_t mDistance;

		bool operator==(TEntry const& entry) const;
		bool operator<(TEntry const& entry) const;

		//Prints a single entry to the given ostream
		//param ost: ostream to print at
		void PrintEntry(std::ostream& ost) const;
	};

	std::vector<TEntry> mEntries;
};

#endif