/*/---[ main.cpp ]---/*/

// Code Writer  : M.Raihan Rafiiful Allaam
// Created Date : Monday, March 20, 2017

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "DLL.h"

using namespace std;

address buatbaru(){
    address P;

    P = new elemen;
    next(P) = NULL;
    prev(P) = NULL;

    cout<<"Masukan Nama : "; cin>>info(P).nama;
    cout<<"Masukan NIM  : "; cin>>info(P).nim;

    return P;
}

void mainmenu(list L){

    int pilihan;
    address P,Q;
    mahasiswa dicari;

    do{
        system("cls");
        cout<<"---[ DOUBLE LINGKED LIST ]---"<<endl;
        cout<<endl;
        cout<<"1. Insert First"<<endl;
        cout<<"2. Insert Last"<<endl;
        cout<<"3. Insert After"<<endl;
        cout<<"4. Delete First"<<endl;
        cout<<"5. Delete Last"<<endl;
        cout<<"6. Delete After"<<endl;
        cout<<"7. Print Info"<<endl;
        cout<<"8. Exit"<<endl;
        cout<<endl;
        cout<<"Masukan Pilihan : "; cin>>pilihan;

        switch(pilihan){
            case 1 :
                system("cls");
                P = buatbaru();
                insertfirst(L,P);
                break;
            case 2 :
                system("cls");
                P = buatbaru();
                insertlast(L,P);
                break;
            case 3 :
                system("cls");
                cout<<"Masukan NIM Dicari : "; cin>>dicari.nim;
                Q = findelemen(L,dicari);
                if(Q != NULL){
                    P = buatbaru();
                    insertafter(L,Q,P);
                }
                else{
                    cout<<"NIM Tidak Ditemukan!"<<endl;
                    getch();
                }
                break;
            case 4 :
                system("cls");
                deletefirst(L,P);
                dealokasi(P);
                break;
            case 5 :
                system("cls");
                deletelast(L,P);
                dealokasi(P);
                break;
            case 6 :
                system("cls");
                cout<<"Masukan NIM Dicari : "; cin>>dicari.nim;
                Q = findelemen(L,dicari);
                if(Q != NULL){
                    if(next(Q) != NULL){
                        deleteafter(L,Q,P);
                        dealokasi(P);
                    }
                    else{
                        cout<<"Tidak Ada Elemen Setelah Elemen Terakhir!"<<endl;
                        getch();
                    }
                }
                else{
                    cout<<"NIM Tidak Ditemukan!"<<endl;
                    getch();
                }
                break;
            case 7 :
                system("cls");
                printinfo(L);
                getch();
                break;
            case 8 :
                system("cls");
                cout<<"Terimakasih!"<<endl;
                getch();
                break;
            default :
                system("cls");
                cout<<"Inputan Salah!"<<endl;
                getch();
                break;
        }
    }
    while(pilihan!=8);
}

int main()
{
    list L;
    createlist(L);
    mainmenu(L);
    return 0;
}
