#include "Database.h"

#include <iostream>

#include "BookingSchedule.h"

using  namespace std;
void Database::saveClient(Client* newClient) {
    if (newClient !=nullptr) {
        clients.push_back(newClient);
        cout<<"Klient"<<newClient->getNameAndSurname()<<"zostal zapisany.\n";
    }
}

void Database::attachLoyaltyCard(Client* client, LoyaltyCard* loyaltyCard) {
    if (client!= nullptr && loyaltyCard != nullptr) {
        client->setCard(loyaltyCard);
        cout<<"Karta lojalnoscio0wa zostala przypisana.\n";
    }
}

void Database::saveChanges() {
    //idk jak tu logike zrobic zapisu, jakis deep copy czy co?
    cout<<"Zapisano.\n";
}

Database::Database(BookingSchedule* schedule) {
    this->schedule=schedule;

}

