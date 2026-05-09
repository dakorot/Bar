#if !defined(_LOYALTYCARD_H)
#define _LOYALTYCARD_H

#include "Client.h"

class LoyaltyCard {
public:
	int pointsBalance;
	Client* client;
	void addPoints();
	LoyaltyCard(Client client);
};

#endif  //_LOYALTYCARD_H
