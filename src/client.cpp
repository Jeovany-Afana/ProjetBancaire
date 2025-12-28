#include "Client.h"
#include <iostream>
using namespace std;

#include "Client.h"
using namespace std;

Client::Client() : id(0), nom(""), prenom(""), telephone("") {}

Client::Client(int id, const string& nom, const string& prenom, const string& telephone)
	: id(id), nom(nom), prenom(prenom), telephone(telephone) {}

int Client::getId() const {
     return id;
     }
     
const string& Client::getNom() const {
     return nom;
     }

const string& Client::getPrenom() const {
     return prenom;
     }
const string& Client::getTelephone() const {
     return telephone;

     }

void Client::setNom(const string& n) {
     nom = n;
     }
void Client::setPrenom(const string& p) { 
    prenom = p;
 }
void Client::setTelephone(const string& t) { 
    telephone = t;
 }

void Client::afficher() const {
	cout << "Client #" << id << " : " << prenom << " " << nom
			  << " | Tel: " << telephone << endl;

}