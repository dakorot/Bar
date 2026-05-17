#if !defined(_LOYALTYCARD_H)
#define _LOYALTYCARD_H

//#include "Client.h"
class Client; //nie dzuiałą mi include idk czemu

class LoyaltyCard {
public:
	int pointsBalance;
	Client* client;
private:
	void addPoints(int points);
	LoyaltyCard(Client client);
};

#endif  //_LOYALTYCARD_H
