#include "../Header Files/Account.h"

// Constructor

Account::Account() {
    this->name = "Unnamed Account";
    this->balance = 0;
    this->dollars = 0;
    this->euros = 0;
    this->tenge = 0;
}

Account::Account(const string &name, double balance, double dollars, double euros, double tenge) : name(name),
                                                                                                   balance(balance),
                                                                                                   dollars(dollars),
                                                                                                   euros(euros),
                                                                                                   tenge(tenge) {}
// Getters & Setters

const string &Account::getName() const {
    return name;
}

void Account::setName(const string &name) {
    Account::name = name;
}

double Account::getBalance() const {
    return balance;
}

void Account::setBalance(double balance) {
    Account::balance = balance;
}

double Account::getDollars() const {
    return dollars;
}

void Account::setDollars(double dollars) {
    Account::dollars = dollars;
}

double Account::getEuros() const {
    return euros;
}

void Account::setEuros(double euros) {
    Account::euros = euros;
}

double Account::getTenge() const {
    return tenge;
}

void Account::setTenge(double tenge) {
    Account::tenge = tenge;
}

// Destructor

Account::~Account() {}
