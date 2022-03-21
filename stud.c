#include <stdio.h>
#include<math.h>
int main(){
	int rem,n,count=0;
        int sum =0 ; 
	printf("Enter number");
	scanf("%d",&n);
	int temp = n;
        int a=n; 
	
	while(n!=0){
	rem = n%10;
	count = count+1;
	n=n/10;	
	}
	
	printf("count %d \n \n",count);
	
	while(a!=0){
	rem = a%10;
	sum =sum+pow(rem,count);
	a=a/10;	
	}
	
	
	
	
	printf("sum %d",sum);
	
	if(temp==sum){
	printf("ARMSTOM NUMBER \n");
	}

	
	else{
	printf(" not an ARMSTOM NUMBER \n ");
	}
	
	return 0 ; 
}

	
