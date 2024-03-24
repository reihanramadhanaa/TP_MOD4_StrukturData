#include <iostream>
#define first(L) L.first
#define next(p) p->next
#define info(p) p->info

using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
   infotype info;
   address next;
};
struct List {
    address first;

};

void createList_1302220048(List &L);
address allocate_1302220048(infotype x);
void insertFirst_1302220048(List &L,address p);
void printInfo_1302220048(List L);
