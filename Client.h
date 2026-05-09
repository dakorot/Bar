#if !defined(_CLIENT_H)
#define _CLIENT_H


class Client {
public:
	String nameAndSurname;
	String phoneNumber;
	String email;
	LoyaltyCard* card;
	void book();
	void play();
	void order();
	void endGameAndExit();
	Client(String nameAndSurname, String phoneNumber, String email);
};

#endif  //_CLIENT_H
