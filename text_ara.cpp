#include <iostream>
#include <string>
using namespace std;
//Arama fonksiyonu
char *araFonk(char *st, int kr){
while (*st != '\0'){
    if (*st == kr)
    return st;
    st++;
}
if (kr == '\0') return st;
else return NULL; /*hiçbir koşul sağlanamazsa NULL döndürür */

}
//Ana program
int main() {
char ata[] = "ATATURK";
char *pr;
pr = araFonk(ata, 'K');
if (pr)
cout<<" Adresi: " << &pr << endl;
else
cout<<"Aranan Bulunamadı";
return 0;
}