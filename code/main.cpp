#include <iostream>
#include "header.h"

using namespace std;

int main() {
    List L;

    createList(L);

    int x;

    cout << "Masukkan elemen: ";
    cin >> x;

    ElmList *p = allocate(x);

    insertFirst(L, p);

    cout << "Isi list: ";
    printInfo(L);

    return 0;
}