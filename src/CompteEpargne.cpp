#include "../include/CompteEpargne.h"
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

CompteEpargne::CompteEpargne(int num, int idCli, double soldeInitial, double taux)
    : Compte(num, idCli, soldeInitial), // Appelle du constructeur de la classe mere
      tauxInteret(taux)                 // Attribut specifique
{
}

string CompteEpargne::getType() const // Implementation de getType..puis retourne le type de compte
{
    return "Compte Epargne";
}

void CompteEpargne::retirer(double montant)
{
    if (montant <= 0)
    {
        throw invalid_argument("Le montant doit etre positif");
    }

    // Pas de decouvert pour le compte epargne
    if (solde < montant)
    {
        throw runtime_error("Solde insuffisant ! Solde actuel: " + to_string(solde) + " FCFA");
    }

    solde -= montant;
}

void CompteEpargne::appliquerInteret() // Methode pour appliquer les interets
{
    double interet = solde * tauxInteret;
    solde += interet;
    cout << "Interets appliques: " << interet << " FCFA" << endl;
    cout << "Nouveau solde: " << solde << " FCFA" << endl;
}

void CompteEpargne::afficher() const
{
    Compte::afficher(); // Appel de la methode de la classe mere
    cout << " ______Taux d'interet: " << (tauxInteret * 100) << "%" << endl;
}

// Getter
double CompteEpargne::getTauxInteret() const
{
    return tauxInteret;
}