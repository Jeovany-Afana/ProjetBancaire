#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
// Empeche les inclusions multiples de CompteEpargne.h

#include "Compte.h" //Inclusion de la classe mere

class CompteEpargne : public Compte
{
private:
    double tauxInteret;

public:
    // Constructeur
    CompteEpargne(int num, int idCli, double soldeInitial, double taux);

    // Implementation des methodes virtuelles pures
    // Override indique qu'on redefinit une methode virtuelle
    std::string getType() const override;
    void retirer(double montant) override;

    // Methode specifique au compte epargne
    void appliquerInteret();

    void afficher() const override;

    // Getter
    double getTauxInteret() const;
};

#endif