#if !defined(_BOOKINGSCHEDULE_H)
#define _BOOKINGSCHEDULE_H

#include "TimeSlot.h"

class BookingSchedule {
public:
	TimeSlot slotsList;
	void bookGame();
	BookingSchedule(TimeSlot[12] slotsList);
};

#endif  //_BOOKINGSCHEDULE_H
