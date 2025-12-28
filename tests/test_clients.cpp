#include <iostream>
#include "Client.h"
using namespace std;

int main() {
    Client c1(1, "Gueye", "NdeyeAdja", "770000001");
    Client c2(2, "Mane", "Omar", "770000002");

    cout << "--- Affichage initial ---\n";
    c1.afficher();
    c2.afficher();

    cout << "\n--- Test getters ---\n";
    cout << "c2 id=" << c2.getId()
              << ", nom=" << c2.getNom()
              << ", prenom=" << c2.getPrenom()
              << ", tel=" << c2.getTelephone() << "\n";

    cout << "\n--- Test setters ---\n";
    c2.setTelephone("781234567");
    c2.setNom("MANE");
    c2.afficher();

    return 0;
}