# Groupe 3 — Opérations & Exceptions

## Rôle du module
Ce module gère :
- les opérations bancaires (dépôt, retrait, virement)
- les erreurs via des exceptions personnalisées

## Exceptions
- BankException : classe mère
- InvalidAmountException : montant <= 0
- NotFoundException : client ou compte introuvable
- InsufficientFundsException : solde insuffisant

## Classe Operation
La classe Operation permet de mémoriser une action bancaire
et de l'afficher dans l'historique d'un compte.

## Tests
Les exceptions sont testées dans tests/test_exceptions.cpp
