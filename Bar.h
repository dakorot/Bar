#if !defined(_BAR_H)
#define _BAR_H

#include "Menu.h"
#include "Barman.h"

class Bar {
public:
	Menu menu;
	Barman* barman;
	void registerClient();
	void verifyLoyaltyCard();
	void registerGame();
	void takeHotFoodOrder();
	void takeColdFoodOrder();
	void settleBill();
	Bar(Menu menu, Barman barman);
};

#endif  //_BAR_H
