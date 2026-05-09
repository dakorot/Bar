#if !defined(_TIMESLOT_H)
#define _TIMESLOT_H

#include "Client.h"

class TimeSlot {
public:
	Client* client;
	int day;
	timestamp hours;
	int numOfTables;
	TimeSlot(Client client, int day, timestamp hours, int numOfTables);
};

#endif  //_TIMESLOT_H
