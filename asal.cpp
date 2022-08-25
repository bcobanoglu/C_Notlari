//ASAL MI
#include<stdio.h>
#include<math.h>
#include<iostream>
bool isAsal(int n){
    if (n<2)
        return false;
    for(int i=2;i<sqrt(n);i++){
        if (n%i==0)
            return false;
    }
    return true;
}

//main fonksiyonu
int main(){
    int a [20];
    for(int i=0; i<100;i++)
    {
        if (isAsal(i))
            printf("%d ", i);
    }
    
    return 0;
}