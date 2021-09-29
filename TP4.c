//
// Created by Sam on 29/09/2021.
//
#include "mesFonctions.h"
#include "TP4.h"
#include <stdio.h>

/*
void Exercice1(){
    int a = 0, b = 0;
    printf("Entrez un entier a :");
    scanf("%d",&a);
    printf("Entrez un entier b :");
    scanf("%d",&b);
    printf("%d est le plus grand ", getMax(a,b));
}

void Exercice2(){
    int entier = 0;
    printf("l'entier est %d", saisirEntier(entier));
}

*/
void exercice4(){
    int a = 0, b = 0;
    const int trois = 3;
    int entier = 0;
    printf("a est-il un multiple de b? \r\n", multiplesecond(a,b));
    printf("l'entier est-il un Multiple de trois et est-il supérieur ou égal à dix? \r\n", multipledetrois());
}
void exercice5(){
    float note1 = 0.0f;
    float note2 = 0.0f;
    float note3 = 0.0f;
    printf("%f",Moyenne());
}