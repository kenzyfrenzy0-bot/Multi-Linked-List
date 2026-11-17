
#ifndef ESPORT_H
#define ESPORT_H

#include <iostream>
#include <string>
using namespace std;

// ADT Child
struct Tim {
    string idTim;
    string namaTim;
    string namaKapten;
    int jumlahPemain;
    int jumlahMenang;
    int jumlahKalah;
    int poin;

    Tim* nextTim;
};

// ADT Parent
struct Turnamen {
    string idTurnamen;
    string namaTurnamen;
    string namaGame;
    string tanggal;
    string status;

    Tim* firstTim;
    Turnamen* nextTurnamen;
};

// ADT List
struct ListTurnamen {
    Turnamen* firstTurnamen;
};

// Fungsi Parent
void createList(ListTurnamen &L);
Turnamen* createParent();
void insertParent(ListTurnamen &L, Turnamen* P);
void deleteParent(ListTurnamen &L, string id);
Turnamen* findParent(ListTurnamen L, string id);
void printParent(ListTurnamen L);

// Fungsi Child
Tim* createChild();
void insertChild(Turnamen* P, Tim* C);
void deleteChild(Turnamen* P, string id);
Tim* findChild(Turnamen* P, string id);
void printChild(Turnamen* P);

// Fungsi keseluruhan
void printAll(ListTurnamen L);

#endif
