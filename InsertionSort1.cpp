#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variable inputan n

void input(){
    while (true){
        cout << "Memasukkan Jumlah Data pada Array : ";
        cin >> n; // memanggil variable inputan n

        if (n <= 20 ){
            break;
        }
        else{
            cout << "\nArray anda masukkan maksimal 20 element. \n";
        }
    }
    cout << endl; // Membuat jarak per baris program
    cout << "===========================" << endl; // Membuat tampilan susunan data pada array
    cout << "Masukkan Element Array" << endl;
    cout << "===========================" << endl;

    for (int i = 0; i < n; i++){ // Menggunakan perulangan for untuk menyimpan data element array
        cout << "Data ke-" << (i+1) << ": "; // Memasukkan atau menginputkan nilai data n
        cin >> arr[i]; // Menyimpan nilai data n kedalam array arr
    }
}