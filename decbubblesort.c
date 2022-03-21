#include<stdio.h>
int main(){
int a[20],i,j,temp,n;
printf("Enter lenght of the array");
scanf("%d",&n);

for(int i =0; i<n; i++){
printf("%d index ",i);

scanf("%d",&a[i]);
}


for ( i =0;i<n;i++){
for ( j = 0; i<n-i-1 ; j++){
	if (a[j]>a[j+1]){
		 temp = a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		      }}

       }
for(int i =0; i<n; i++){
printf("%d  ",a[i]);
}

}
