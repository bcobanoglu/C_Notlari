#include <stdio.h>
void yazMatris (int pa[]*, int satir){
  return;
}

int main() {
  /*
  int b = 13;

  swap(a, b);
  printf("A = %d \nB = %d\n", a, b);*/
  int arr[] = {10, 20, 30, 40, 50, 60};
  int *ptr = NULL;
  // sizof(int) * (number of element in arr[]) is printed
  printf("Size of arr %ld\n", sizeof(arr));
  // sizeof a pointer is printed which is same for all type
  // of pointers (char *, void *, etc)
  printf("Size of ptr %ld", sizeof(ptr));
  
  yazMatris(pa, sa);


  return 0;
}