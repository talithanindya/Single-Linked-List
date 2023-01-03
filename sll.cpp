#include "sll.h"

void createlist1301213230(List &TA) {
        first(TA) = nil;
}

adr newElement1301213230(infotype x) {
    adr P = new element;
    info(P) = x;
    next(P) = nil;
    return P;
}

void insertFirst1301213230(List &TA, adr p) {
    if (first(TA) == nil){
        first(TA) = p;
    } else {
        next(p) = first(TA);
        first(TA) = p;
    }
}

void show1301213230(List TA) {
    if (first(TA) != nil) {
        adr p = first(TA);
        while (p != nil) {
            cout << info(p) << " ";
            p = next(p);
        }
        cout << endl;
    } else {
        cout << "List Kosong" << endl;
    }
}

adr deleteLast1301213230(List &TA) {
    adr p, q;
    if (first(TA) == nil) {
        p = nil;
        cout << "List Kosong" << endl;
    } else if (next(first(TA)) == nil) {
        p = first(TA);
        first(TA) = nil;
    } else {
        q = first(TA);
        p = first(TA);
        while (next(p) != nil) {
            q = p;
            p = next(p);
        }
        next(q) = nil;
    }
    return p;
}


adr deleteFirst1301213230(List &TA){
    adr p;
    p = first(TA);
    first(TA) = next(first(TA));
    next(p) = nil;
    return p;
}

