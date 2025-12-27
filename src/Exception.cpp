#include "Exception.h"

BankException::BankException(string msg) {
    message = msg;
}

const char* BankException::what() const noexcept {
    return message.c_str();
}
void verifierMontant(double montant) {
    if (montant <= 0) {
        throw InvalidAmountException("Erreur : le montant doit être positif");
    }
}
