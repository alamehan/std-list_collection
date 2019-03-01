/*/---[ DLL.cpp ]---/*/

#include "DLL.h"

void createlist(list &L){
    first(L) = NULL;
}

address alokasi(mahasiswa X){
    address P;

    P = new elemen;
    info(P) = X;
    next(P) = NULL;
    prev(P) = NULL;

    return P;
}
void dealokasi(address &P){
    P = NULL;
    delete P;
}

address findelemen(list L, mahasiswa X){
    address P;

    P = first(L);
    while(P != NULL && info(P).nim != X.nim){
        P = next(P);
    }

    return P;
}

void printinfo(list L){
    address P;

    P = first(L);
    while(P != NULL){
        cout<<info(P).nama<<endl;
        cout<<info(P).nim<<endl;
        cout<<endl;
        P = next(P);
    }
}

void insertfirst(list &L, address P){
    if(first(L) == NULL){
        first(L) = P;
    }
    else{
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void insertlast(list &L, address P){
    if(first(L) == NULL){
        first(L) = P;
    }
    else{
        address Q;

        Q = first(L);
        while(next(Q) != NULL){
            Q = next(Q);
        }

        prev(P) = Q;
        next(Q) = P;
    }
}

void insertafter(list &L, address &Prec, address P){
    if(next(Prec) != NULL){
        next(P) = next(Prec);
        prev(P) = Prec;
        prev(next(Prec)) = P;
        next(Prec) = P;
    }
    else{
        prev(P) = Prec;
        next(Prec) = P;
    }
}

void deletefirst(list &L, address &P){
    if(first(L) == NULL){
        cout<<"List Kosong!"<<endl;
    }
    else if(next(first(L)) == NULL){
        first(L) = NULL;
    }
    else{
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
        prev(first(L)) = NULL;
    }
}

void deletelast(list &L, address &P){
    if(first(L) == NULL){
        cout<<"List Kosong!"<<endl;
    }
    else if(next(first(L)) == NULL){
        first(L) = NULL;
    }
    else{
        address Q;

        Q = first(L);
        while(next(next(Q)) != NULL){
            Q = next(Q);
        }

        P = next(Q);
        next(Q) = NULL;
        prev(P) = NULL;
    }
}

void deleteafter(list &L, address &Prec, address &P){
    if(next(next(Prec)) != NULL){
        P = next(Prec);
        next(Prec) = next(P);
        prev(next(P)) = Prec;
        next(P) = NULL;
        prev(P) = NULL;
    }
    else{
        P = next(Prec);
        next(Prec) = NULL;
        prev(P) = NULL;
    }
}
