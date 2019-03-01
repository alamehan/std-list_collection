#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

#include <iostream>
using namespace std;

#define nil NULL
#define next(P) P->next
#define info(P) P->info
#define first(L) L.first

// DEKLARASI //

typedef struct elemen *address;
typedef long infotype;
struct elemen{
    infotype info;
    address next;
};
struct List{
    address first;
};

// FUNCTION & PROCEDURE //

void createlist(List &L);

address alokasi(infotype x);
void dealokasi(address &P);

address findelemen(List L, infotype x);
void printinfo(List L);

void insertfirst(List &L, address P);
void insertlast(List &L, address P);
void insertafter(List &L, address prec, address P);
void deletefirst(List &L, address &P);
void deletelast(List &L, address &P);
void deleteafter(List &L, address prec, address &P);

int jumlahelemen(List &L);
int hitunggenap(List &L);
int totalinfo(List &L);
int totalinfogenap(List &L);

void pecah(List L, List &L1, List &L2);
void gabung(List L1, List L2, List &L3);

#endif // LINKLIST_H_INCLUDED
