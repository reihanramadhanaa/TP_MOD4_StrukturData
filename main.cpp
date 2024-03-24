#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    infotype x;
    address p ;
    List L ;

    createList_1302220048(L);

    cout << "Masukan angka pertama : ";
    cin >> x;

    p = allocate_1302220048(x);
    insertFirst_1302220048(L,p);
    printInfo_1302220048(L);

    cout << "Masukan angka kedua : ";
    cin >> x;

    p = allocate_1302220048(x);
    insertFirst_1302220048(L,p);
    printInfo_1302220048(L);

    cout << "Masukan angka ketiga : ";
    cin >> x;

    p = allocate_1302220048(x);
    insertFirst_1302220048(L,p);
    printInfo_1302220048(L);

    return 0;

}
