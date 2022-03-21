#include <stdio.h>
int main(){
	int a[20][20],b[20][20],c[20][20];
	int i , j , k , m ,n ,p , q ;
	printf("Enter the first matrix row ,col:  ");
	scanf("%d%d",&n,&m);
	for(i = 0 ;i<n ; i++){
		for(j = 0 ; j<m;j++){
			printf("Enter the a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);			
		}
	
	}
	printf("Enter the second  matrix row ,col:  ");
	scanf("%d%d",&p,&q);
	for(i = 0 ;i<p ; i++){
		for(j = 0 ; j<q;j++){
		printf("Enter the a[%d][%d]",p,q);
			scanf("%d",&b[i][j]);			
		}
	
	}

	
	if(n!=p){
	printf("Matrix multiplication not possible ");
	
	return 0 ; 
	}
	else{
	for(i = 0 ;i<n ; i++){
		for(j = 0 ; j<p;j++){
		c[i][j]=0;
		for(k = 0 ; k<n;k++){
		c[i][j]=c[i][j]+a[i][k]*b[k][j];
					
		}
					
		}
	
	}

	

	
	}


	printf("product   matrix ");
	printf("\n");

	for(i = 0 ;i<m ; i++){
		for(j = 0 ; j<q;j++){
			printf("%d ",c[i][j]);			
		}
		printf("\n");
	
	}
		
}
