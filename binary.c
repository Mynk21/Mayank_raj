
#include<stdio.h>
int btod(int bin );
int main(){
	int bin , dec ;
	printf("Enter binary number ");
	scanf("%d",&bin);
	dec = btod(bin);
	printf("Binary number is : %d",dec);
	return 0;


	}

	
	int btod (int bin){
	if(bin ==0 ){
		return 0 ;}

	else{
		return bin%10 + btod(bin/10)*2;

}

	
		

	
	}
