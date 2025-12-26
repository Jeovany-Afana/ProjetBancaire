#include "../include/CompteCourant.h"
#include <iostream>
#include <stdexcept> //Pour utiliser les exceptions standard comme invalid_argument, runtime_error
#include <string>
using namespace std;

CompteCourant::CompteCourant(int num, int idCli, double soldeInitial, double decouvert)
    : Compte(num, idCli, soldeInitial), // Appelle du constructeur de la classe mere
      decouvertMax(decouvert)
{
}

string CompteCourant::getType() const // Iplementation de getType..puis retourne le type de compte
{
    return "Compte Courant";
}

void CompteCourant::retirer(double montant)
{
    if (montant <= 0) // Interdit les montants negatifs ou nulls avec throw ca renvoi une erreur
    {
        throw invalid_argument("Le montant doit etre positif");
    }

    // Verifier si le retrait est possible avec le decouvert
    if (solde - montant < -decouvertMax)
    {
        throw runtime_error("Decouvert depasse !! Limite: " + to_string(decouvertMax) + " FCFA");
    }

    solde -= montant;
}

void CompteCourant::afficher() const
{
    Compte::afficher(); // Appel de la methode de la classe mere
    cout << " ____Decouvert autorise: " << decouvertMax << " FCFA" << endl;
}

// Getter
double CompteCourant::getDecouvertMax() const
{
    return decouvertMax;
}