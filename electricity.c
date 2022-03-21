#include<stdio.h>
int main(){
char name[20];
printf("Enter name :");
float units , charge, total;
gets(name);
printf(" \n enter units consumed:  ");
scanf("%f",&units);
if(units>1 && units<=200){
charge = units*0.8;
}
else if(units >200 && units<=300){
charge=((units*0.8) + ((units-200)*0.9));

}

else {
charge = ((200*0.8) +(100*0.9)+(units-300)*1 );

}

total = charge +100;
if (total >400){
total =total +(0.15*total);

}

printf("bill \n");

printf("name: %s \n" , name);

printf("bill: %0.2f \n ", total);




}
