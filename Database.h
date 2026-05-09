#if !defined(_DATABASE_H)
#define _DATABASE_H

#include "Client.h"
#include "BookingSchedule.h"

class Database {
public:
	Client clients;
	BookingSchedule* schedule;
	void saveClient();
	void attachLoyaltyCard();
	void saveChanges();
	Database(BookingSchedule schedule);
};

#endif  //_DATABASE_H
