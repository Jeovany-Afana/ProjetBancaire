# Module POO C++ 
# Projet Bancaire 
# Groupe 1

## Membres
- Serigne Mbacke Ndiaye SANE & Zeinab Mohamed

## Objectif du module
Ce module gere les **comptes bancaires** du systeme.  
Il met en œuvre les concepts de **la programmation orientee objet**, notamment :
- l’heritage
- le polymorphisme
- les methodes virtuelles

Le module est **autonome** et respecte le decoupage global du projet.

---

## Classes implementees

### 1. Compte (classe abstraite)
La classe `Compte` represente un compte bancaire generique.

**Attributs principaux :**
- `numero` : numero du compte
- `solde` : solde du compte
- `idClient` : identifiant du client

**Methodes :**
- `deposer(double montant)`
- `retirer(double montant)` (methode virtuelle pure)
- `getType()` (methode virtuelle pure)
- `afficher()`
- getters (`getNumero`, `getSolde`, `getIdClient`)

---

### 2. CompteCourant
Herite de `Compte`.

**Specificites :**
- autorise un **decouvert maximal**
- le retrait est possible tant que la limite de decouvert n’est pas depassee

**Methodes redefinies :**
- `retirer(double montant)`
- `getType()`
- `afficher()`

---

### 3. CompteEpargne
Herite de `Compte`.

**Specificites :**
- **aucun decouvert autorise**
- application d’un **taux d’interêt**

**Methodes specifiques :**
- `appliquerInteret()`

**Methodes redefinies :**
- `retirer(double montant)`
- `getType()`
- `afficher()`

---

## Polymorphisme
Le polymorphisme est utilise via des pointeurs de type `Compte*`, permettant de manipuler
des objets `CompteCourant` et `CompteEpargne` de manière uniforme.

---

## Gestion des erreurs
Les erreurs sont gerees à l’aide des **exceptions standard C++** :
- `invalid_argument` pour les montants invalides
- `runtime_error` pour les retraits impossibles (solde insuffisant, decouvert depasse)

---

## Tests
Pour compiler : g++ -std=c++17 -Wall -Wextra -Iinclude src/*.cpp tests/test_comptes.cpp -o test_comptes
Pour executer : ./test
