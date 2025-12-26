#include <iostream>
#include <string>

using namespace std;

class Operation {
private:
    int idOperation;
    string type;
    double montant;
    string details;

public:
    // Constructeur
    Operation(int id, string t, double m, string d);

    // Méthode pour afficher l'opération
    void afficher() const;
};


    

