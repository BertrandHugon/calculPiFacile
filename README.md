# Calcul des premières décimales de Pi 

## Pourquoi ce programme:

on trouve sur le net des gens qui croient que l'on nous ment sur les décimales de Pi(dès la 3ème ou 4ème décimale !), l'idée est donc de fournir un programme simple pour vérifier par soi-même.

## Méthode utilisée:

**Aire du disque**: on imagine un disque sur un quadrillage. Une approximation de l'aire du disque est la surface cumulée des carrés qui sont à l'intérieur du disque. Cette approximation permet de trouver une approximation de Pi selon la formule de l'aire du disque Pi x rayon².

## Installation:

Installer Perl

Puis

> perl Makefile.PL
> make
> make test

## Utilisation:

Multipliez par 8 la précision que vous voulez. Par exemple si vous voulez 3 chiffres exacts après la virgule vous voulez une précision au millième, donc utilisez 8000. Ensuite, inspirez vous du programme de test t/kalkulu.t

## Implémentation en C++

Utile si vous voulez claculer plus vite. L'implémentaiton utilise la GNU Multi-Precision library (GMP) compilée avec --enable-cpp. Vous devez donc l'installer avant de compiler le programme:

> g++ kalkulu.cpp -lgmpxx -lgmp -o kalkulu
> ./kalkulu

