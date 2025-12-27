#include <exception>
#include <string>
using namespace std;

class BankException : public exception {
    protected: 
        string message;
    public:
        BankException(string msg);
    const char* what() const noexcept override;
};

class NotFoundException : public BankException {
public:
    NotFoundException(string msg) : BankException(msg) {}
};

class InvalidAmountException : public BankException {
public:
    InvalidAmountException(string msg) : BankException(msg) {}
};

class InsufficientFundsException : public BankException {
public:
    InsufficientFundsException(string msg) : BankException(msg) {}
};
void verifierMontant(double montant);

