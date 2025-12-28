#ifndef COMPTE_H
#define COMPTE_H // Empêche les inclusions multiples de Compte.h

#include <string>

class Compte
{
protected:
    int numero;
    double solde;
    int idClient;
    // On les mets en protected parceque ca doit etre accessible que dans cette classe ainsi qu'au classe heritiees compteCourant et epargne..

public:
    Compte(int num, int idCli, double soldeInitial); // Constructeur
    virtual ~Compte(); // Destructeur

     // getType() retourne le type du compte soit Courant ou Epargne et retirer() permet de faire la retraite
    //  les deux initialiser a 0 parce que c aux classes filles de les implementer.
    virtual std::string getType() const = 0;
    virtual void retirer(double montant) = 0;

    // Affichage du compte
    virtual void afficher() const;

    // Methodes 
    void deposer(double montant);

        // Getters...permettent d’acceder aux attributs sans les modifier.
    int getNumero() const;
    double getSolde() const;
    int getIdClient() const;
};

#endif
