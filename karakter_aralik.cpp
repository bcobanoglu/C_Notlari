#include<stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int a = 3;
	int &refA = a; // Başlangıç ataması şart!!

	cout << a << endl;	  // 3
	cout << refA << endl; // 3
	cout << &a << endl;	  // 0x 7fffffffddac
	cout << &refA << endl;// 0x 7fffffffddac

	refA = 5;			  // refA sonradan değeri değişebilir
	cout << a << endl;	  // 5
	cout << refA << endl; // 5
	return 0;
}		
