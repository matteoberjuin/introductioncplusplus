#include <iostream>
#include <chrono>
#include "declarations.h"


void printgreetings (int n) {
    for (int j=0;j<=n;j+=2) {
        std::cout << j << " ";
    };
    std::cout << "Hello world"<< " ";
    for (int j=1;j<=n;j+=2) {
        std::cout << j << " ";
    };
}

int averagearray (int T[], int n) {
    int s = 0;
    for (int i=0; i<n; i++) {
        s += T[i];
    }
    return (s/n);
}

int fibbo(int n) {
    if (n==0)
        return(0);
    if (n==1)
        return(1);
    if (n==2)
        return(2);
    else
        return fibbo(n-1)+fibbo(n-2);
    }

int mylen (char s[]) {
    int i = 0;
    while (s[i]!='\0') {
        i++;
    }
    return i;
}

int comparaisonlex (char s[], char t[]) {
    int i = 0;
    while (s[i]!='\0' && t[i]!='\0') {
        if (s[i]<t[i])
            return -1;
        if (s[i]>t[i])
            return 1;
        i++;
    }
    return 0;
}

void compteur (int N) {
    long T[N];
    for (int i=0; i<=N-1;i++) {
        T[i]= 2*i;
    }
}


