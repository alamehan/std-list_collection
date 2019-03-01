/*/---[ SLLC.cpp ]---/*/

#include "SLLC.h"

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

    if(first(L) != NULL){
        P = first(L);
        do{
            if(info(P).nim == X.nim){
                return P;
            }
            P = next(P);
        }while(P != first(L));

        return NULL;
    }
    else{
        return NULL;
    }
}

void printinfo(list L){
    address P;

    if(first(L) != NULL){
        P = first(L);
        do{
            cout<<info(P).nama<<endl;
            cout<<info(P).nim<<endl;
            cout<<endl;
            P = next(P);
        }while(P != first(L));
    }
    else{
        cout<<"List Kosong!"<<endl;
    }
}

void insertfirst(list &L, address P){
    if(first(L) == NULL){
        first(L) = P;
        next(P) = P;
    }
    else if(next(first(L)) == first(L)){
        next(P) = first(L);
        next(first(L)) = P;
        first(L) = P;
    }
    else{
        address Q;

        Q = first(L);
        while(next(Q) != first(L)){
            Q = next(Q);
        }

        next(P) = first(L);
        next(Q) = P;
        first(L) = P;
    }
}

void insertlast(list &L, address P){
    if(first(L) == NULL){
        first(L) = P;
        next(P) = P;
    }
    else if(next(first(L)) == first(L)){
        next(P) = first(L);
        next(first(L)) = P;
    }
    else{
        address Q;

        Q = first(L);
        while(next(Q) != first(L)){
            Q = next(Q);
        }

        next(P) = first(L);
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
    else if(next(first(L)) == first(L)){
        first(L) = NULL;
    }
    else{
        address Q;

        Q = first(L);
        while(next(Q) != first(L)){
            Q = next(Q);
        }

        P = next(first(L));
        next(Q) = P;
        next(first(L)) = NULL;
        first(L) = P;
    }
}

void deletelast(list &L, address &P){
    if(first(L) == NULL){
        cout<<"List Kosong!"<<endl;
    }
    else if(next(first(L)) == first(L)){
        first(L) = NULL;
    }
    else{
        address Q;

        Q = first(L);
        while(next(next(Q)) != first(L)){
            Q = next(Q);
        }

        P = next(Q);
        next(Q) = first(L);
        next(P) = NULL;
    }
}

void deleteafter(list &L, address &Prec, address &P){
    if(next(Prec) != first(L)){
        P = next(Prec);
        next(Prec) = next(P);
        next(P) = NULL;
    }
    else{
         cout<<"Tidak Ada Elemen Setelah Elemen Terakhir!"<<endl;
    }
}
