#include <iostream>
#include "Exception.h"

using namespace std;

int main() {
    try {
        throw InvalidAmountException("Montant invalide !");
    } catch (BankException& e) {
        cout << "Erreur attrapée : " << e.what() << endl;
    }

    try {
        throw InsufficientFundsException("Solde insuffisant !");
    } catch (BankException& e) {
        cout << "Erreur attrapée : " << e.what() << endl;
    }

    return 0;
}
