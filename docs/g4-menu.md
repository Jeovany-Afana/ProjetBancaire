# Groupe 4 — Menu Console & InputUtils
Rokhaya BADIANE, Serigne Fallou DIOP

## Rôle du groupe 4
Le groupe 4 est responsable de l’interface utilisateur en console de l’application MiniBank.
Il gère :
- le menu principal
- les sous-menus (Clients, Comptes, Opérations, Affichages)
- la sécurisation des saisies utilisateur via la classe InputUtils

Aucune logique bancaire n’est implémentée dans ce module.

~ Structure des menus

// Menu principal
- Clients
- Comptes
- Opérations
- Affichages
- Quitter

// Menu Clients
- Ajouter client
- Lister clients
- Chercher client (par id)
- Retour

// Menu Comptes
- Ouvrir compte courant
- Ouvrir compte épargne
- Lister comptes
- Lister comptes d’un client
- Retour

// Menu Opérations
- Dépôt
- Retrait
- Virement
- Appliquer intérêts (épargne)
- Retour

Les opérations sont protégées par un bloc try/catch afin d’éviter tout crash de l’application.

// Menu Affichages
- Détails d’un compte
- Historique d’un compte
- Retour

---

// InputUtils

La classe InputUtils permet de sécuriser les saisies utilisateur :
- lecture d’entiers (menus)
- lecture de nombres réels (montants)
- nettoyage du flux "cin" en cas d’erreur

Cela empêche l’application de planter si l’utilisateur saisit du texte au lieu d’un nombre.

---

// Comment tester le module

1. Compiler le projet
2. Lancer l’exécutable
3. Naviguer dans les menus
4. Tester des saisies invalides (lettres au lieu de chiffres)
5. Vérifier que l’application ne plante jamais

## Remarque importante

Les messages "(à implémenter)" présents dans les menus sont volontaires.
Ils indiquent les emplacements où les appels à la logique métier (classe Banque)
seront ajoutés lors de l’intégration finale du projet.

Le groupe 4 se limite volontairement à la gestion de l’interface console
et de la sécurisation des saisies utilisateur, conformément à la répartition
des rôles définie pour le projet.

