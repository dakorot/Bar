#include "Client.h"

#include <iostream>
#include <ostream>
using namespace std;

void Client::book(Bar* bar) {
    if (bar != nullptr) {
        bar->registerGame();
        cout << "Klient"<<nameAndSurname<<"zarezerwowal gre";
    }
}

bool Client::play(Billiard * table) {
    if (table->clientAtTable!=this) {
        return false;
    }
    return true;
}

bool Client::order(Bar* bar, Kitchen* kitchen, int option) {

    cout<<"Ciepłe(1) czy zimne(2)?"<<endl;
    cin>>option;
    if (option==1) {

        if (kitchen->isOpen==false) {
            cout<<"Kuchnia zamknięta"<<endl;
            return false;
        }
        bar->takeHotFoodOrder();
        return true;
    }
    if (option==2) {
        if (bar->barman->verifyAge()==false) {//tu zakladam ze bedzie bool...chyba xd
            cout<<"Nieletnim nie sprzedajemy!"<<endl;
            return false;
        }
        bar->takeColdFoodOrder();
        return true;
    }
    return false;

}

void Client::endGameAndExit() {
    std::cout << "Dowidzenia";
    //chyba
}

Client::Client(string nameAndSurname, string phoneNumber, string email) {
    this->nameAndSurname=nameAndSurname;
    this->phoneNumber=phoneNumber;
    this->email=email;
    this->card = nullptr;//karta nie jest obowiazkowa
}
string Client::getNameAndSurname() const{
    return this->nameAndSurname;
}
string Client::getPhoneNumber() const{
    return this->phoneNumber;
}
string Client::getEmail() const{
    return this->email;
}
LoyaltyCard* Client::getCard()const {
    return this->card;
}
void Client::setCard(LoyaltyCard* card) {
    this->card = card;
}

