#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P)(P) -> info
#define next(P)(P) -> next
#define first(TA) ((TA).first)
#define nil NULL

typedef float infotype;
typedef struct element *adr;

//digit terakhir 0 -> float

struct element {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

void createlist1301213230(List &TA);
adr newElement1301213230(infotype x);
void insertFirst1301213230(List &TA, adr p);
void show1301213230(List TA);
adr deleteLast1301213230(List &TA);
adr deleteFirst1301213230(List &TA);

#endif // SLL_H_INCLUDED
