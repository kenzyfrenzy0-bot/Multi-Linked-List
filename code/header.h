#ifndef header_h
#define header_h

struct ElmList {
    int info;
    ElmList *next;
    ElmList *prev;
};

struct List {
    ElmList *first;
    ElmList *last;
};

void createList(List &L);
ElmList* allocate(int x);
void insertFirst(List &L, ElmList *p);
void printInfo(List L);

#endif
