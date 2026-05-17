#include "LoyaltyCard.h"
#include "Client.h"

void LoyaltyCard::addPoints(int points) {
    this->pointsBalance += points;
}

LoyaltyCard::LoyaltyCard(Client client) {
    this->client=client;
    this->pointsBalance=0;

}

