#ifndef CLIENT_H
#define CLIENT_H
#include <string>
using namespace std;


class Client {
private:
	int id;
	string nom;
	string prenom;
	string telephone;

public:
	Client();
	Client(int id, const string& nom, const string& prenom, const string& telephone);

	int getId() const;
	const string& getNom() const;
	const string& getPrenom() const;
	const string& getTelephone() const;

	void setNom(const string& nom);
	void setPrenom(const string& prenom);
	void setTelephone(const string& telephone);

	void afficher() const;
};

#endif


