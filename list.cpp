#include <iostream>
#include  "list.h"
using namespace std;

void createList_1302220048(List &L){
     first(L) = NULL ;
}

address allocate_1302220048(infotype x){

    address p = new elmlist ;
    info(p) = x;
    next(p) = NULL;

    return p;

}
void insertFirst_1302220048(List &L ,address p){

      if(first(L) == NULL) {
        first(L) = p;
    } else {
        next(p) = first(L);
        first(L) = p;
    }


}
void printInfo_1302220048(List L){
    address p = first(L);
    while (p != NULL) {
        cout << info(p)<< ", ";
        p = next(p);
    }

    cout << endl;
}





