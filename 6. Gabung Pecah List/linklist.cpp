#include "linklist.h"

void createlist(List &L){
    L.first = NULL;
}

address alokasi(infotype x){
    address P;
    P = new elemen;
    P->next = NULL;
    P->info = x;
    return P;
}

void dealokasi(address &P){
    delete P;
}

address findelemen(List L, infotype x){
    address P;
    P = L.first;
    while(P != NULL && P->info != x){
        P = P->next;
    }
    return P;
}

void printinfo(List L){
    address P;
    P = L.first;
    while(P != NULL){
        cout<<P->info<<" - ";
        P = P->next;
    }
}

void insertfirst(List &L, address P){
    P->next = L.first;
    L.first = P;
}

void insertlast(List &L, address P){
    if(L.first == NULL){
        insertfirst(L,P);
    }
    else{
        address Q;
        Q = L.first;
        while(Q->next != NULL){
            Q = Q->next;
        }
        Q->next = P;
    }
}

void insertafter(List &L, address prec, address P){
    P->next = prec->next;
    prec->next = P;
}

void deletefirst(List &L, address &P){
    P = L.first;
    L.first = P->next;
    P->next = NULL;
}

void deletelast(List &L, address &P){
    if(L.first == NULL){
        deletefirst(L,P);
    }
    else{
        P = L.first;
        while((P->next)->next != NULL){
            P = P->next;
        }
        address Q;
        Q = P;
        P = Q->next;
        Q->next = NULL;
    }
}

void deleteafter(List &L, address prec, address &P){
    P = prec->next;
    prec->next = P->next;
    P->next = NULL;
}

int jumlahelemen(List &L){
    int i = 0;
    address P;
    P = L.first;
    while(P != NULL){
        i = i + 1;
        P = P->next;
    }
    return i;
}

int hitunggenap(List &L){
    int i = 0;
    address P;
    P = L.first;
    while(P != NULL){
        if(P->info % 2 == 0){
            i = i + 1;
        }
        P = P->next;
    }
    return i;
}

int totalinfo(List &L){
    int total = 0;
    address P;
    P = L.first;
    while(P != NULL){
        total = total + P->info;
        P = P->next;
    }
    return total;
}

int totalinfogenap(List &L){
    int total = 0;
    address P;
    P = L.first;
    while(P != NULL){
        if(P->info % 2 == 0){
            total = total + P->info;
        }
        P = P->next;
    }
    return total;
}

void pecah(List L, List &L1, List &L2){
    address P,Q,Z;
    P = L.first;

    while(P != NULL){
        if(P->info % 2 == 0){
            Q = alokasi(P->info);
            insertlast(L1,Q);
        }
        else if(P->info % 2 == 1){
            Z = alokasi(P->info);
            insertlast(L2,Z);
        }
        P = P->next;
    }
}

void gabung(List L1, List L2, List &L3){
    address P,x;
    int z;
    L3 = L2;

    P = L1.first;

    while(P != NULL){
        x = alokasi(P->info);
        insertlast(L3,x);
        P = P->next;
    }

    z = jumlahelemen(L3);

    cout<<z<<endl;

}
