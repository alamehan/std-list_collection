#include "linklist.h"

#include <iostream>
using namespace std;

int main()
{
    List L,L1,L2,L3;
    createlist(L);
    createlist(L1);
    createlist(L2);
    createlist(L3);
    address P,Q;

        int pilihan;

        do{

            insertfirst(L,alokasi(2));
            insertfirst(L,alokasi(7));
            insertfirst(L,alokasi(4));
            insertfirst(L,alokasi(3));
            insertfirst(L,alokasi(6));

            cout<<"============================"<<endl;
            printinfo(L);
            cout<<endl;

            cout<<"============================"<<endl;
            cout<<endl;
            cout<<"1. Jumlah Elemen List"<<endl;
            cout<<"2. Elemen Genap"<<endl;
            cout<<"3. Total Info Elemen"<<endl;
            cout<<"4. Total Info Elemen Genap"<<endl;
            cout<<"5. Pecah List"<<endl;
            cout<<"6. Gabung List"<<endl;
            cout<<"7. Exit"<<endl;
            cout<<endl;
            cout<<"Masukan Pilihan = "; cin>>pilihan;

            cout<<endl;

            int x;

            switch(pilihan){
                case 1:
                    x = jumlahelemen(L);
                    cout<<"Jumlah Elemen List = "<<x<<endl;
                    break;
                case 2:
                    x = hitunggenap(L);
                    cout<<"Elemen Genap = "<<x<<endl;
                    break;
                case 3:
                    x = totalinfo(L);
                    cout<<"Total Info Elemen = "<<x<<endl;
                    break;
                case 4:
                    x = totalinfogenap(L);
                    cout<<"Total Info Elemen Genap = "<<x<<endl;
                    break;
                case 5:
                    pecah(L,L1,L2);

                    cout<<"List"<<endl;
                    printinfo(L);
                    cout<<endl;
                    cout<<endl;

                    cout<<"List Genap"<<endl;
                    printinfo(L1);
                    cout<<endl;
                    cout<<endl;

                    cout<<"List Ganjil"<<endl;
                    printinfo(L2);
                    cout<<endl;

                    break;
                case 6:
                    gabung(L1,L2,L3);

                    cout<<"List Genap"<<endl;
                    printinfo(L1);
                    cout<<endl;
                    cout<<endl;

                    cout<<"List Ganjil"<<endl;
                    printinfo(L2);
                    cout<<endl;
                    cout<<endl;

                    cout<<"List Gabungan"<<endl;
                    printinfo(L3);
                    cout<<endl;

                    break;
                case 7:
                    cout<<"Exit Program"<<endl;
                    break;
                default :
                    cout<<"Inputan Anda Salah"<<endl;
                    break;
            }

            cout<<endl;
            L.first = NULL;

        } while(pilihan != 7);

    cout<<endl;

    return 0;
}
