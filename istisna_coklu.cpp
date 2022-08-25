#include<iostream>
using namespace std;
int main () {
 string fruits[] = {"banana", "melon", "cherry", "apple", "kiwi", "grape", "mango"};
 int indis;
 while(1) { //sonsuz döngü
   try  {
       cout<< "indis no..: ";
       cin>> indis;
       if (indis > 6 ) throw indis;
       if (indis < 0) throw '-';
       cout<<"Benim favori meyvem..:"<< fruits[indis]<<endl;
       break;
   }
 catch (int i) {
   cout << "Exception: ";
   cerr << "indis taşması " << i << endl;
 }
 catch (char st)  {
   cout << "Exception: " ;
   cerr << "negatif indis " << st << endl;
 }
}
return 0; }
