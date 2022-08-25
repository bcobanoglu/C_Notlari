#include<iostream>
#include"benim_ex.h"
using namespace std;
int main() {
    double a,b;

    try {
        cout<<"iki sayı gir..: ";
        cin>> a >> b;
        if (b==0) throw benim_Exception("sıfıra bölme hatası");
        cout<<"Sonuç..:"<<(a/b)<< endl;

    } catch (benim_Exception &exc) {"\n";}
    return 0;
}