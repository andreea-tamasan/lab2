#include <iostream>
#include "consola.h"
#include "problem.h"
#include "tests.h"

int main(){
    TestSecventa1();
    TestSecventa2();
    int ok = 1,l=0,v[100];
    char option;
    while(ok == 1)
    {
        Options();

        std::cout<<"Give option: ";
        std::cin >> option;
        switch (option)
        {
            case '1':
                readVector(l,v);
                break;
            case '2':
                printVector(l,v);
                break;
            case '3':{
                int start,end;
                prime_sequence(v,l,start,end);
                sequence(v,start,end);
                break;
            }
            case '4': {
                int x, y, start, end;
                std::cout << "capat inferior interval(x)= ";
                std::cin >> x;
                std::cout << std::endl;
                std::cout << "capat superior interval(y)= ";
                std::cin >> y;
                interval_sequence(v, l, start, end, x, y);
                sequence(v, start, end-1);
                break;
            }
            case 'x':
                ok = 0;
                break;
            default:
                std::cout<<"Try again!"<< std:: endl;
        }
    }
    }