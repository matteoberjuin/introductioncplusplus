#include <iostream>
#include "declarations.h"
#include <chrono>

int main () {
    printgreetings(20);
    std::cout << " " << std::endl;
    int T[] = {1,2,3,4,5};
    std::cout << "la moyenne du tableau est " << averagearray(T,5)<< std::endl;
    std::cout << "fibbonqcci de 10 est " << fibbo(10) << std::endl;
    char mot[] = "legoatducplusplus";
    std::cout << "la longueur de legoatducplusplus est " << mylen(mot)<< std::endl;
    char a[] = "abc";
    char b[] = "abd";
    // fonction pas ajustée pour les caracteres type éèà
    std::cout << comparaisonlex(a, b)<< std::endl;
    auto start = std::chrono::high_resolution_clock::now();
    compteur(100000);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "durée " << duration.count() << std::endl;
    // Ce tableau int T[N]; est créé sur la pile (stack), donc en mémoire locale.
    // Or, un tableau de 1 000 000 d’entiers (1 million × 4 octets ≈ 4 Mo) dépasse la taille allouée par défaut à la pile (souvent 1 Mo à 8 Mo sur Windows).

}