#if !defined(_KITCHEN_H)
#define _KITCHEN_H

#include "Cook.h"

class Kitchen {
public:
	boolean isOpen;
	Cook* cook;
	void takeHotFoodOrder();
	Kitchen(Cook cook);
};

#endif  //_KITCHEN_H
