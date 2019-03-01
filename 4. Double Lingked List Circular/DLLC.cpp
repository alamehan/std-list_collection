/*/---[ DLLC.cpp ]---/*/

#include "DLLC.h"

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
        prev(P) = first(L);
        next(first(L)) = P;
        prev(first(L)) = P;
        first(L) = P;
    }
    else{
        address Q;

        Q = first(L);
        while(next(Q) != first(L)){
            Q = next(Q);
        }

        next(P) = first(L);
        prev(P) = Q;
        next(Q) = P;
        prev(first(L)) = P;
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
        prev(P) = first(L);
        next(first(L)) = P;
        prev(first(L)) = P;
    }
    else{
        address Q;

        Q = first(L);
        while(next(Q) != first(L)){
            Q = next(Q);
        }

        next(P) = first(L);
        prev(P) = Q;
        next(Q) = P;
        prev(first(L)) = P;
    }
}

void insertafter(list &L, address &Prec, address P){
    if(next(Prec) != first(L)){
        next(P) = next(Prec);
        prev(P) = Prec;
        prev(next(Prec)) = P;
        next(Prec) = P;
    }
    else{
        if(next(first(L)) != first(L)){
            next(P) = first(L);
            prev(P) = Prec;
            next(Prec) = P;
            prev(first(L)) = P;
        }
        else{
            next(P) = first(L);
            prev(P) = first(L);
            next(Prec) = P;
            prev(Prec) = P;
        }
    }
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

        P = first(L);
        next(Q) = next(P);
        prev(next(P)) = Q;
        first(L) = next(P);
        next(P) = NULL;
        prev(P) = NULL;
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
        prev(first(L)) = Q;
        next(P) = NULL;
        prev(P) = NULL;
    }
}

void deleteafter(list &L, address &Prec, address &P){
    if(next(Prec) != first(L)){
        P = next(Prec);
        next(Prec) = next(P);
        prev(next(P)) = Prec;
        next(P) = NULL;
        prev(P) = NULL;
    }
    else{
        cout<<"Tidak Ada Elemen Setelah Elemen Terakhir!"<<endl;
    }
}
