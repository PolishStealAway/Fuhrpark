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
#include <iomanip>

static const std::string cDistanceUnit = "km";

static const size_t cTmOffsetYears = 1900;
static const size_t cTmMonthOffset = 1;

static const std::string cErrEntryDoesNotExist = "Entry does not exist! Couldn't delete entry.";

void LogBook::NewEntry(tm const& date, size_t const distance)
{
	TEntry newEntry{ date, distance };
	//find the position where to insert the new entry
	auto it = std::find_if(mEntries.cbegin(), mEntries.cend(), [newEntry](TEntry const& e) { return newEntry < e; });
	mEntries.insert(it, newEntry);
}

void LogBook::RemoveEntry(tm const& date, size_t const distance)
{
	auto foundIt = std::find(mEntries.cbegin(), mEntries.cend(), TEntry{ date, distance });
	if (foundIt != mEntries.cend())
	{
		mEntries.erase(foundIt);
	}
	else
	{
		std::cerr << cErrEntryDoesNotExist << std::endl;
	}	
}

void LogBook::PrintLogs(std::ostream& ost) const
{
	for (auto it = mEntries.cbegin(); it != mEntries.cend(); ++it)
	{
		it->PrintEntry(ost);
	}
}

void LogBook::Clear()
{
	mEntries.clear();
}

size_t LogBook::GetKMSum() const
{
	size_t sum = 0;
	for (auto it = mEntries.cbegin(); it != mEntries.cend(); ++it)
	{
		sum += it->mDistance;
	}

	return sum;
}

bool LogBook::TEntry::operator==(TEntry const& entry) const
{
	return mDistance == entry.mDistance && mDate.tm_year == entry.mDate.tm_year && mDate.tm_mon == entry.mDate.tm_mon && mDate.tm_mday == entry.mDate.tm_mday;
}

bool LogBook::TEntry::operator<(TEntry const& entry) const
{
	if (mDate.tm_year <= entry.mDate.tm_year)
	{
		if (mDate.tm_year < entry.mDate.tm_year)
		{
			return true;
		}
		else
		{
			if (mDate.tm_mon <= entry.mDate.tm_mon)
			{
				if (mDate.tm_mon < entry.mDate.tm_mon)
				{
					return true;
				}
				else
				{
					if (mDate.tm_mday < entry.mDate.tm_mday)
					{
						return true;
					}
					else
					{
						if (mDistance < entry.mDistance)
						{
							return true;
						}
						else
						{
							return false;
						}						
					}
				}
			}
			else
			{
				return false;
			}
		}		
	}
	else
	{
		return false;
	}
}

void LogBook::TEntry::PrintEntry(std::ostream& ost) const
{
	ost << mDate.tm_mday << "." << mDate.tm_mon + cTmMonthOffset << "." << mDate.tm_year + cTmOffsetYears << ":" << std::right << mDistance << " " << cDistanceUnit << std::endl;
}


