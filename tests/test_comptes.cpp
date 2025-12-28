#include <iostream>
#include "../include/CompteCourant.h"
#include "../include/CompteEpargne.h"

using namespace std;

int main()
{
    cout << "##### TEST COMPTES #####" << endl;

    try
    {
        //Compte Courant
        cout << endl << "--- Compte Courant ---" << endl;
        CompteCourant cc(1001, 1, 50000, 20000);
        cc.afficher(); // Affiche les infos

        // Test dépôt
        cout << endl << "--- Depot de 10000 FCFA ---" << endl;
        cc.deposer(10000);  // Ajoute 10000 au solde
        cc.afficher();

        // Test retrait normal
        cout << endl<<"--- Retrait de 30000 FCFA ---" << endl;
        cc.retirer(30000);
        cc.afficher();

        // Test retrait avec decouvert
        cout << endl << "--- Retrait de 40000 FCFA (avec decouvert) ---" << endl;
        cc.retirer(40000);
        cc.afficher();

        //Compte Epargne
        cout << endl << "--- Compte Epargne ---" << endl;
        CompteEpargne ce(2001, 2, 100000, 0.05);
        ce.afficher();

        // Test depot
        cout << endl << "--- Depot de 50000 FCFA ---" << endl;
        ce.deposer(50000);
        ce.afficher();

        // Test retrait
        cout << endl << "--- Retrait de 20000 FCFA ---" << endl;
        ce.retirer(20000);
        ce.afficher();

        // Test intérêts
        cout << endl << "--- Application des interets ---" << endl;
        ce.appliquerInteret();
        ce.afficher();

        // Polymorphisme
        cout << endl << "--- Test Polymorphisme ---" << endl;
        Compte *comptes[2];  // Tableau de pointeur vers Compte
        comptes[0] = &cc;   // Pointe vers le CompteCourant
        comptes[1] = &ce;    // Pointe vers le CompteEpargne

        for (int i = 0; i < 2; i++)
        {
            comptes[i]->afficher();
        }

        // Exceptions
        cout << endl << "--- Test Exceptions ---" << endl;

        try
        {
            cout << "Tentative de retrait de 200000 FCFA sur compte epargne..." << endl;
            ce.retirer(200000);   // Si le solde insuffisant ca lance une exception
        }
        catch (const exception &e)
        {
            cout << "ERREUR attrapee: " << e.what() << endl;
        }

        try
        {
            cout << "Tentative de retrait avec decouvert depasse..." << endl;
            cc.retirer(50000); // Devrait echouer car solde est déjà négatif
        }
        catch (const exception &e)
        {
            cout << "ERREUR attrapee: " << e.what() << endl;
        }

        cout << endl << "=== TESTS REUSSIS ===" << endl;
    }
    catch (const exception &e)
    {
        cerr << "ERREUR FATALE: " << e.what() << endl;
        return 1;
    }

    return 0;
}
