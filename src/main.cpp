#include <iostream>
#include "InputUtils.h"

using namespace std;

//Menu principal
void afficherMenuPrincipal(){
    cout << "\n==== MINI BANK ====\n";
    cout << "1. Clients\n";
    cout << "2. Comptes\n";
    cout << "3. Operations\n";
    cout << "4. Affichages\n";
    cout << "5. Quitter\n";
}

//Menu clients
void afficherMenuClients() {
    cout << "\n--- MENU CLIENTS ---\n";
    cout << "1. Ajouter client\n";
    cout << "2. Lister clients\n";
    cout << "3. Chercher client (par id)\n";
    cout << "4. Retour\n";
}

int main(){
    int choix = 0;

    while (true){
        afficherMenuPrincipal();
        choix = InputUtils::lireInt("Votre choix : ");

        switch (choix){
            case 1:{
                int choixClient = 0;

                while (true) {
                    afficherMenuClients();
                    choixClient = InputUtils::lireInt("Votre choix : ");

                    if (choixClient == 4) {
                        break;
                    }

                    switch (choixClient) {
                        case 1:
                            cout << "Ajouter client (à implémenter)\n";
                            break;
                        case 2:
                            cout << "Lister clients (à implémenter)\n";
                            break;
                        case 3:
                            cout << "Chercher client (à implémenter)\n";
                            break;
                        default:
                            cout << "Choix invalide.\n";
                    }
                }
                break;
            }

            case 2:
               cout << "Menu Comptes (a venir)\n";
               break;
            case 3:
               cout << "Menu Operations (a venir)\n";
               break;
            case 4:
               cout << "Menu Affichages (a venir)\n";
               break;
            case 5:
               cout << "Au revoir.\n";
               return 0;
            default:
            cout << "Choix invalide.\n";
        }
    }
}