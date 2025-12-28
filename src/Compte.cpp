#include "../include/Compte.h"
#include <iostream>
using namespace std;

// Constructeur de compte
Compte::Compte(int num, int idCli, double soldeInitial)
    : numero(num), solde(soldeInitial), idClient(idCli)
{
}

Compte::~Compte()
{
}

void Compte::deposer(double montant)
{
    if (montant <= 0)
    {
        throw invalid_argument("Le montant doit etre positif");
    }
    solde += montant;
}

void Compte::afficher() const
{
    cout << "Compte #" << numero << endl
        << " [" << getType() << "]" << endl // Avec polymorphisme pour savoir le type du compte
        << " ---Solde : " << solde << " FCFA" << endl
        << " ---Client ID : " << idClient << endl;
}

// Getters
int Compte::getNumero() const { return numero; }
double Compte::getSolde() const { return solde; }
int Compte::getIdClient() const { return idClient; }
