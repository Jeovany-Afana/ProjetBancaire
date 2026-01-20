#ifndef COMPTECOURANT_H
#define COMPTECOURANT_H
// Empeche les inclusions multiples de CompteCourant.h

#include "Compte.h" //Inclusion de la classe mere.

class CompteCourant : public Compte
{
private:
    double decouvertMax;

public:
    // Constructeur
    CompteCourant(int num, int idCli, double soldeInitial, double decouvert);

    // Implementation des methodes virtuelles pures:
    // Override indique qu'on redefinit une methode virtuelle:
    std::string getType() const override;
    void retirer(double montant) override;

    void afficher() const override; // Redefinition de afficher .

    // Getter
    double getDecouvertMax() const;
};

#endif 