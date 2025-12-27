#include <iostream>
#include <sstream>
#include "InputUtils.h"

using namespace std;

//Lecture sécurisée d'un entier
int InputUtils::lireInt() {
    string ligne;
    int valeur;

    while (true) {
        getline(cin, ligne);
        stringstream ss(ligne);

        if (ss >> valeur && ss.eof()) {
            return valeur;
        }

        cout << "Entree invalide. Veuillez saisir un entier : ";
    }
}

int InputUtils::lireInt(const string& message) {
    cout << message;
    return lireInt();
}

//Lecture sécurisée d'un nombre réel
double InputUtils::lireDouble() {
    string ligne;
    double valeur;

    while (true) {
        getline(cin, ligne);
        stringstream ss(ligne);

        if (ss >> valeur && ss.eof()) {
            return valeur;
        }

        cout << "Entree invalide. Veuillez saisir un nombre : ";
    }
}

double InputUtils::lireDouble(const string& message) {
    cout << message;
    return lireDouble();
}
