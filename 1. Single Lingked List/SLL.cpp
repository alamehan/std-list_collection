/*/---[ SLL.cpp ]---/*/

#include "SLL.h"

void createlist(list &L){
    first(L) = NULL;
}

address alokasi(mahasiswa X){
    address P;

    P = new elemen;
    info(P) = X;
    next(P) = NULL;

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
    while(P!= NULL){
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

        next(Q) = P;
    }
}

void insertafter(list &L, address &Prec, address P){
    next(P) = next(Prec);
    next(Prec) = P;
}

void deletefirst(list &L, address &P){
    if(first(L) == NULL){
        cout<<"List Kosong!"<<endl;
    }
    else{
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
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
    }
}

void deleteafter(list &L, address &Prec, address P){
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
}
