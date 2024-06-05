#include<stdio.h>
int main(){
  float bs,da,hra,gs;
  printf("Enter the BS : ");
  scanf("%f",&bs);

  da = 0.4*bs;
  hra =0.2*bs;
  gs = bs+hra+da;
  printf("\nthe da : %f ",da);
  printf("\nthe hra :  %f ",hra);


  printf("\nThe gross salary %0.2f",gs);
}