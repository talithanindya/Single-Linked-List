#include "sll.h"

int main() {
    cout << "Create List" << endl;

    List TA;
    cout << "first(TA) sebelum createList : " << first(TA) << endl;

    createlist1301213230(TA);
    cout << "first(TA) setelah createList : " << first(TA) << endl;
    cout << endl << endl;

// newElement
    cout << "New Element" << endl;

    adr p;
    p = newElement1301213230('1');
    cout << "Info(P) : " << info(p) << endl;
    cout << "Next(P) : " << next(p) << endl;
    cout << endl << endl;

//  insertFirst
    cout << "Insert First" << endl;

    cout << "first(TA) sebelum insertFirst : " << first(TA) << endl;
    insertFirst1301213230(TA, p);
    cout << "first(TA) setelah insertFirst : " << first(TA) << endl;

    p = newElement1301213230('5');
    insertFirst1301213230(TA, p);
    cout << "info First(TA) : " << info(first(TA)) << endl;
    cout << endl << endl;

// show
    cout << "Show" << endl;

    show1301213230(TA);

    p = newElement1301213230('Y');
    insertFirst1301213230(TA, p);
    show1301213230(TA);
    cout << endl << endl << endl;

//  deleteLast
    cout << "Delete Last" << endl;

    p = deleteLast1301213230(TA);
    show1301213230(TA);
    cout << info(p) << endl << endl;

    p = deleteLast1301213230(TA);
    show1301213230(TA);
    cout << info(p) << endl << endl;

    p = deleteLast1301213230(TA);
    show1301213230(TA);
    cout << info(p) << endl << endl;


 //deleteFirst
    cout << "Delete First" << endl;
    p = deleteFirst1301213230(TA);
    show1301213230(TA);
    cout << info(p) << endl << endl;

return 0;
}
