#include<stdio.h>
#include<math.h>

int main(){
float sum , term ,num,den ,x,deg;
int i ;
printf("Enter degree");
scanf("%f",&deg);
x=deg *( 3.14283/180);
i = 1;
sum = x ;
term = x;
num =x;
den =1.0;
do{
i=i+2;
num=(-num)*x*x;
den = den*i*(i-1);
term = num/den;
sum=sum+term ;
}while(fabs(num)>=0.00001);
printf("inbuilt function sin(%.2f)=%0.2f\n",deg,sin(x));
printf("user defined  function sin(%.2f)=%0.2f\n  ",deg,sum);
}


