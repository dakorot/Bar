#if !defined(_DATABASE_H)
#define _DATABASE_H

#include <vector>

#include "Client.h"
#include "BookingSchedule.h"
#include "LoyaltyCard.h"

class Database {
private:
	std::vector<Client*> clients;
	BookingSchedule* schedule;
public:
	void saveClient(Client* newClient);
	void attachLoyaltyCard(Client * client, LoyaltyCard* newLoyaltyCard);
	void saveChanges();
	Database(BookingSchedule* schedule);
};

#endif  //_DATABASE_H
