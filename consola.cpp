//
// Created by Home on 01.03.2022.
//
#include <iostream>
using namespace std;

void readVector(int &l, int v[]){
    int i;
    cout << "nr elements = ";
    cin >> l;
    for(i = 0; i < l; i++){
        cout << "v[" << i + 1 << "] = ";
        cin >> v[i];
    }
}

void printVector(int l, int v[]){
    int i;
    cout << "vector is [";
    for(i = 0; i < l; i++)
        cout << v[i] << " ";
    cout <<"]"<< endl;
}

void sequence(int v[], int start, int end)
{
    for(int i = start; i<= end; i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

void Options(){
    std::cout << std::endl << "1.Cititi lista de numere."<<std:: endl;
    std::cout << "2.Afisati lista de numere intregi."<<std:: endl;
    std::cout << "3.Afisarea pe consola a celei mai lungi secvente de numere prime."<<std::endl;
    std::cout << "4.Afisarea pe consola a celei mai lungi secvente cu numere din intervalul [x,y]. "<<std::endl;
    std::cout << "x.Inchideti aplicatie."<<std::endl;
}