#include <iostream>
using namespace std;
const int N = 2;
//Fonksiyon parametresi: V dizisi
void f1(int *V) {
 V[0] = 2;
}
//Fonksiyon parametresi: M matrisi
void f2(int M[N][N]) {
 M[0][0] = 4;
 
}
//Ana program
int main() {
 int A[N][N];
 f1(A[1]);  // A[1][0]= 2
 f2(A);     // A[0][0]= 4
 cout << A[0][0] << "\t" << A[0][1]<<"\n";
 cout << A[1][0] << "\t" << A[1][1]<<"\n";
return 0;
}