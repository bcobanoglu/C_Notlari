//makro- fonksiyon farkı
#include<iostream>
#include<math.h>
#define abs(x) ((x) > (0) ? (x) :(-x) ) //makro
using namespace std;
int main()
{
    int a = 3;
    int b = 5;
    cout<< abs(abs((a-b)));
    return 0;
}
