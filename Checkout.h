#if !defined(_CHECKOUT_H)
#define _CHECKOUT_H

#include "Database.h"

class Checkout {
public:
	double cashDrawer;
	String cardTerminal;
	Database* database;
	void processCardPayment();
	void processCashPayment();
	void applyDiscounts(LoyaltyCard* card);
	boolean checkIfHasLoyaltyCard();
	Checkout(Database database);
};

#endif  //_CHECKOUT_H
