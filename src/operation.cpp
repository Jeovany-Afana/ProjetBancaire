#include "Operation.h"


Operation::Operation(int id, string t, double m, string d) {
    idOperation = id;
    type = t;
    montant = m;
    details = d;
}


void Operation::afficher() const {
     cout << "Operation #" << idOperation << endl;
    cout << "Type : " << type << endl;
    cout << "Montant : " << montant << endl;
    cout << "Details : " << details << endl;
    cout << "------------------------" << endl;
}
