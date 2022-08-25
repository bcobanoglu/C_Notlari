#include<iostream>
#include<cstdlib>
#include <climits>
using namespace std;
int main()
{
    try{
    short a = SHRT_MAX; //a=32767
    short b = a + 1;
    cout<<"a..:"<< a <<endl;
    if (b<0)
        throw int(b);

    cout<<"b..:"<< b <<endl;
    }
    catch(int b){
        cout<<"b..:"<< ~b+1 <<endl;
    }
    return 0;
}