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

void LogBook::NewEntry(tm& date, size_t distance)
{
	TEntry entry;
	entry.date = date;
	entry.distance = distance;
	mEntries.push_back(entry);
}

bool LogBook::RemoveEntry(tm& date, size_t distance)
{
	TEntry entry;
	entry.date = date;
	entry.distance = distance;

	return false;
}

void LogBook::SortByDate()
{
}

void LogBook::PrintLogs(std::ostream& ost)
{
}

void LogBook::Clear()
{
}

size_t LogBook::GetKMSum()
{
	return size_t();
}

//TEntry LogBook::CreateEntry(tm& date, size_t distance)
//{
//	TEntry entry;
//	entry.date = date;
//	entry.distance = distance;
//	return entry
//}
