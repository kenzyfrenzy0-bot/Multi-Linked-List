
#include <iostream>
#include "header.h"

using namespace std;

void createList(List &L) {
    L.first = nullptr;
    L.last = nullptr;
}

ElmList* allocate(int x) {
    ElmList *p = new ElmList;

    p->info = x;
    p->next = nullptr;
    p->prev = nullptr;

    return p;
}

void insertFirst(List &L, ElmList *p) {
    if (L.first == nullptr) {
        L.first = p;
        L.last = p;
    } else {
        p->next = L.first;
        L.first->prev = p;
        L.first = p;
    }
}

void printInfo(List L) {
    ElmList *p = L.first;

    while (p != nullptr) {
        cout << p->info << " ";
        p = p->next;
    }

    cout << endl;
}