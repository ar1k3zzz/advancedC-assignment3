#ifndef ADVANCEDC_ASSIGNMENT3_ACCOUNT_H
#define ADVANCEDC_ASSIGNMENT3_ACCOUNT_H

#include <string>

using namespace std;

class Account {
private:
    string name;
    double balance;
    double dollars;
    double euros;
    double tenge;
public:
    Account();

    Account(const string &name, double balance, double dollars, double euros, double tenge);

// Functions
    void deposit();
    void withdraw();

    // Getters & Setters

    const string &getName() const;

    void setName(const string &name);

    double getBalance() const;

    void setBalance(double balance);

    double getDollars() const;

    void setDollars(double dollars);

    double getEuros() const;

    void setEuros(double euros);

    double getTenge() const;

    void setTenge(double tenge);

    virtual ~Account();
};


#endif //ADVANCEDC_ASSIGNMENT3_ACCOUNT_H
