#include <stdlib.h>
#include <iostream>
using namespace std;

int pil_1(int row, int col)
{
    int mA[row][col], mB[row][col];
    cout<<"===============Matriks A==============="<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<"Elemen "<<i+1<<","<<j+1<<": ";
            cin>>mA[i][j];
        }
        cout<<endl;
    }
    cout<<"===============Matriks B==============="<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<"Elemen "<<i+1<<","<<j+1<<": ";
            cin>>mB[i][j];
        }
        cout<<endl;
    }
    system("CLS");
    cout<<"Matriks A = "<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<"  "<<mA[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Matriks B = "<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<"  "<<mB[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"A + B = \n"<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j  < col; j++){
            cout<<"  "<< mA[i][j] + mB[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"A - B = \n"<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j  < col; j++){
            cout<<"  "<< mA[i][j] - mB[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

int pil_2(int row, int col)
{
    float det, invers, A11, A12, A13, A21, A22, A23, A31, A32, A33, x1, x2, x3, x4, x5, x6;
    int m[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<"Elemen "<<i+1<<","<<j+1<<": ";
            cin>>m[i][j];
        }
        cout<<endl;
    }
    cout<<"Matriks  = "<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<"  "<<m[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    if(row == 2 && col == 2)
    {
        //menghitung determinan dan ivers matriks A
        det = ((m[0][0]*m[1][1])-(m[0][1]*m[1][0]));
        invers = 1/det;
        A11 = invers*(m[1][1]);
        A12 = invers*(-m[1][0]);
        A21 = invers*(-m[0][1]);
        A22 = invers*(m[0][0]);
        if(det != 0)
        {
            cout<<"Determinan matriks A = "<<det<<endl;
            cout<<"Invers matriks A = "<<endl;
            cout<<"     "<<A11<<"     "<<A21<<endl;
            cout<<"     "<<A12<<"     "<<A22<<endl;
        }
        else
        {
            cout<<"Salah satu determinan bernilai nol. jika determinan bernilai nol, maka tidak memenuhi syarat invers"<<endl;
        }
    } else if(row == 3 && col ==3) {
         //menghitung determinan dari matriks
        x1 = m[0][0]*m[1][1]*m[2][2];
        x2 = m[0][1]*m[1][2]*m[2][0];
        x3 = m[0][2]*m[1][0]*m[2][1];
        x4 = m[0][2]*m[1][1]*m[2][0];
        x5 = m[0][0]*m[1][2]*m[2][1];
        x6 = m[0][1]*m[1][0]*m[2][2];
        det = ((x1 + x2 + x3) - (x4 + x5 + x6));
        if (det != 0){
            //menghitung invers dari matriks
            A11 = 1/det*((m[1][1]*m[2][2])-(m[1][2]*m[2][1]));
            A12 = 1/det*((m[1][0]*m[2][2])-(m[1][2]*m[2][0]));
            A13 = 1/det*((m[1][0]*m[2][1])-(m[1][1]*m[2][0]));
            A21 = 1/det*((m[0][1]*m[2][2])-(m[0][2]*m[2][1]));
            A22 = 1/det*((m[0][0]*m[2][2])-(m[0][2]*m[2][0]));
            A23 = 1/det*((m[0][0]*m[2][1])-(m[0][1]*m[2][0]));
            A31 = 1/det*((m[0][1]*m[1][2])-(m[0][2]*m[1][1]));
            A32 = 1/det*((m[0][0]*m[1][2])-(m[0][2]*m[1][0]));
            A33 = 1/det*((m[0][0]*m[1][1])-(m[0][1]*m[1][0]));
            cout<<"Determinan matriks  = "<<det<<endl;
            cout<<"Invers matriks  = "<<endl;
            cout<<"     "<<A11<<"     "<<A21<<"     "<<A31<<endl;
            cout<<"     "<<A12<<"     "<<A22<<"     "<<A32<<endl;
            cout<<"     "<<A13<<"     "<<A23<<"     "<<A33<<endl;
        } else {
            cout<<"Determinan matriks  = "<<det<<endl;
            cout<<"Determinan dari matriks diatas tidak memenuhi syarat."<<endl;
        }
    } else if (row > 4 && col > 4) {
        cout<<"Untuk matriks yang berordo n, dimana n lebih dari 3, belum tersedia."<<endl;
    } else {
        cout<<"Matriks yang tidak memiliki nilai ordo yang sama tidak memenuhi syarat dari determinan dan invers"<<endl;
    }
    return 0;
}
int main ()
{
    int row, col, pil;
    cout<<"===============Kalkulator Matriks==============="<<endl;
    cout<<"1. Penjumlahan dan Pengurangan antara dua Matriks"<<endl;
    cout<<"2. Determinan dan Invers Matriks"<<endl;
    cout<<"================================================"<<endl;
    cout<<endl;
    cout<<"Masukkan Pilihan : ";
    cin>> pil;
    system("CLS");
    if(pil == 1)
    {
        cout<<"================Penjumlahan dan Pengurangan antara dua Matriks==============="<<endl;
        cout<<"Syarat : Kedua matriks memiliki jumlah baris dan kolom yang sama"<<endl;
        cout<<"============================================================================="<<endl;
        cout<<endl;
        cout<<"Masukkan baris : ";
        cin>>row;
        cout<<"Masukkan kolom : ";
        cin>>col;
        system("CLS");
        if (row == col)
        {
            pil_1(row,col);
        }
        else
        {
            cout<<"Syarat tidak terpenuhi."<<endl;
        }
    }
    else if(pil == 2)
    {
        cout<<"==========================Determinan dan Invers Matriks========================="<<endl;
        cout<<"Syarat Determinan : "<<endl;
        cout<<"1. Jika pada semua elemen dari baris atau kolom sama dengan nol, maka determinan matriksnya tersebut ialah nol."<<endl;
        cout<<"2. Jika pada elemen dari salah satu baris atau kolom itu sama dengan elemen baris lain, maka determinan matriksnya tersebut ialah nol."<<endl;
        cout<<"3. Apabila elemen salah satu dari baris atau kolom yakni merupakan kelipatan dari elemen baris atau kolom lain maka determinan matriksnya tersebut adalah nol."<<endl;
        cout<<"================================================================================"<<endl;
        cout<<endl;
        cout<<"Syarat Invers : "<<endl;
        cout<<"1. Determinan dari matriks tersebut tidak sama dengan nol."<<endl;
        cout<<"2. Matriks berbentuk matriks persegi / memiliki jumlah baris dan kolom yang sama."<<endl;
        cout<<"================================================================================"<<endl;
        cout<<endl;
        cout<<"Masukkan baris : ";
        cin>>row;
        cout<<"Masukkan kolom : ";
        cin>>col;
        system("CLS");
        if (row == col)
        {
            pil_2(row,col);
        }
        else
        {
            cout<<"Kolom dan Baris yang anda masukkan tidak sama besar, tidak bisa menjalankan program."<<endl;
        }
    }
    else
    {
        cout<<"Pilihan tidak sesuai."<<endl;
    }
    system("pause");
    return 0;
}
