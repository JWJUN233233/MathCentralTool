#include <iostream>
#include <cmath>

using namespace std;
//Easy C++ Head

void error(){
    printf("\033[1,37,43mERROR!\033[0m\a\n");
}

void clear(bool i){
    if(i==false)
        system("clear");
    if(i==true)
        system("CLS");
}

void print(const char a[],bool i){
    if(i==true){
        cout << a << endl;
    }
    if(i==false){
        cout << a;
    }
}

void h1(){
    print("--------------------",true);
}

void h2(){
    print("*==================*",true);
}

void s(const char a[]){
    cout << " - " << a << endl;
}
