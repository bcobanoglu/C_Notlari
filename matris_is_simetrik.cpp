#include<iostream>
using namespace std;
  
const int MAX = 100;
//void yazMatris (int pa[][3], int satir);
//void yazMatris (int *pa[3], int satir)
bool isSimetri(int mat[][MAX], int N)
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] != mat[j][i])
                return false;
    return true;
}
  
// Driver code
int main()
{
    int mat[][MAX] = { { 1, 3, 5 },
                       { 3, 2, 4 },
                       { 5, 3, 1 } };
  
    if (isSimetri(mat, 3))
        cout << "Evet, Simetri";
    else
        cout << "Hayır, Simetri değil";
    return 0;
}