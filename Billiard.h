#if !defined(_BILLIARD_H)
#define _BILLIARD_H


class Billiard {
public:
	BookingSchedule* schedule;
	int tableCapacityLimit;
	Client* clientAtTable;
	Billiard(BookingSchedule schedule, Client clientAtTable)();
};

#endif  //_BILLIARD_H
