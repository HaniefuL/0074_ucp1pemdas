//1. Contoh deklarasi variabel:cout ,string ,int arr.

//2. Contoh implementasi prosedur dan fungsi: void ,int.
//string nama;
//int nXpander, nProsche, nAvanza, nBrio, nLamborghini;
//int hXpander =


//void input() {
    //cin >> nama;
    //cout << "Nama Pembeli : ";
    //cout << "Jumlah :";

    //cout << "Jumlah Porsche: ";
    //cin >> nPorsche;

    //cout << "Jumlah Avanza : ";
    //cin >> nAvanza;

    //cout << "Jumlah Brio: ";
    //cin >> nBrio;

    //cout << "JUmlah Lambhorgini; ";
    //cim >> nLamborghini;


    //int TotalHarga() {
        //return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLamborgini * hLamborgini);
    //}

    //void Display() {
        //cout << "Total Harganya : " << TotalHarga() << endl;
    //}

    //int main()
        //char pilihan;
    //do(
        //input();
    //Display();
    //cout << "Apakah ingin kembali ?" << endl;
    //cin >> pilihan
        //while (pilihan == 'y' || pilihan == 'Y');
//}

//3. contoh impementasi dari looping: while
//int main() {
    //char pilihan;

    //do {
        //cout << "Berangkat ambil takjil" << endl;
        //cout << "Antre takjil" << endl;
        //cout << "Antri takjil" << endl;
        //cout << "Apakah Takjil masih ada ?" << endl;
        //cin >> pilihan;
    //} while (pilihan == "Y" || pilihan == "Y"); |

//4. contoh impementasai dari conditional statmen: if, else.
//if (nRerata >= 60) {
    //status = "Lulus";
//}
//else if (nSEHAT >= 75) {
    //status = "Sehat";
//}
//else if (nRerata < 45) {
    //status = "Tidak Sehat";
//}

//5. contoh implementasi dari struct: void input
//void input() {
  //cin >> nama;
  //cout << "Nama Pembeli : ";
  //cout << "Jumlah :";

  //cout << "Jumlah Porsche: ";
  //cin >> nPorsche;

  //cout << "Jumlah Avanza : ";
  //cin >> nAvanza;

  //cout << "Jumlah Brio: ";
  //cin >> nBrio;

  //cout << "JUmlah Lambhorgini; ";
  //cim >> nLamborghini;

//6.

#include <iostream>
using namespace std;

int main(){
    string status;
    int nSEHAT, nTIDAKSEHAT, nRerata;

    cout << "Masukan Status Sehat = ";
    cin >> nSEHAT;

    cout << "Masukan Status Tidak Sehat = ";
    cin >> nTIDAKSEHAT;
    nRerata = (nSEHAT + nTIDAKSEHAT) / 2;

    if(nRerata >= 60){
        status = "Sehat";
    }
    else if(nSEHAT >= 75){
        status = "Sehat";
    }
    else if(nRerata < 45){
        status = "Tidak Sehat";
    }
    else{
        status = "Tidak Sehat";
    }
    cout << "Tampilkan status  = " << status << endl;

    return 0;

}