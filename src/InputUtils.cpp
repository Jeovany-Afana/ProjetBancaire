#include "InputUtils.h"
#include <iostream>
#include <limits>

using namespace std;

void InputUtils::nettoyerCin(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int InputUtils::lireInt(const string& message){
    int valeur;

    while (true){
        cout << message;
        cin >> valeur;

        if(!cin.fail()){
            nettoyerCin();
            return valeur;
        }

        cout << "Entree invalide. Veuillez saisir un nombre entier.\n";
        nettoyerCin();
    }
}


double InputUtils::lireDouble(const string& message){
    double valeur;

    while (true){
        cout << message;
        cin >> valeur;

        if(!cin.fail()){
            nettoyerCin();
            return valeur;
        }

        cout << "Entree invalide. Veuillez saisir un nombre valide.\n";
        nettoyerCin();
    }
}