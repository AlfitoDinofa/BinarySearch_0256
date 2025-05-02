#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input(){  // prosedur input
    while (true){
        cout << "masukkan banyakknya elemen pada array: ";
        cin >> nPanjang;
        if (nPanjang <= 20){
            break;
        }
        else {
            cout << "\nArray maksimal 20 elemen. \n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i=0;i<nPanjang;i++){ 
         cout << "Data ke-" << (i+1) << " = ";
         cin >> element[i];
    }
}
void bubleSortArray(){
    int pass = 1; // step 1
    do
    {
    
    for (int j=0;j<=nPanjang-1-pass;j++){  // step 2
        if(element[j]>element[j+1]){ // step 3
            int temp;
            temp = element[j];
            element[j];
            element[j] = element[j+1];
            element[j+1] = temp;
        }
     }
     pass = pass +1; // step 4
    }while(pass <= nPanjang-1);
}

void display(){
    cout << endl;
    cout << "=================================" << endl;
    cout << "element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j=0;j<nPanjang;j++){
        cout << element[j];
        if (j<nPanjang-1) {
            cout << " --> ";
        }
    }
}




