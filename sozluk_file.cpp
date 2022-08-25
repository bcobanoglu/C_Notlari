#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main() {

ifstream inFile;
string tr, en;

inFile.open("sozluk.txt");
cout<<"Türkçe \t   İngilizce\n";
cout<<"-------\t   ---------\n";
while(!inFile.eof()){
    getline(inFile, tr, '\t'); // default is '\n' (newline). 
    getline(inFile, en, '\n'); 
    cout << tr << "\t";
    cout << en << endl;  
}
inFile.close();    
return 0;
}
