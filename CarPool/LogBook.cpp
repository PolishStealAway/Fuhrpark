///////////////////////////////////////////////////////////////////////////
// Workfile : LogBook.cpp
// Author : Philipp Holzer / Adam Kensy
// Date : 15.10.2019
// Description : drivers log book for a vehicle
// Remarks : -
// Revision : 0
///////////////////////////////////////////////////////////////////////////

#include "LogBook.h"
#include <algorithm>

void LogBook::NewEntry(tm const& date, size_t const distance)
{
	mEntries.push_back(TEntry{ date, distance });
}

bool LogBook::RemoveEntry(tm const& date, size_t const distance)
{
	auto foundIt = std::find(mEntries.cbegin(), mEntries.cend(), TEntry{ date, distance });
	if (foundIt != mEntries.cend())
	{
		mEntries.erase(foundIt);
		return true;
	}
	else
	{
		return false;
	}	
}

void LogBook::SortByDate()
{
	
}

void LogBook::PrintLogs(std::ostream& ost)
{
}

void LogBook::Clear()
{
	mEntries.clear();
}

size_t LogBook::GetKMSum()
{
	return 0; // std::accumulate(mEntries.cbegin(), mEntries.cend(), );
}

//TEntry LogBook::CreateEntry(tm& date, size_t distance)
//{
//	TEntry entry;
//	entry.date = date;
//	entry.distance = distance;
//	return entry
//}
