#include<stdio.h>
main(){
 int a, b;
 scanf("%d %d", &a, &b);
 if(a%b==0 || b%a==0)
  printf("So nhieu");
 else
  printf("Khong phai so nhieu");
}