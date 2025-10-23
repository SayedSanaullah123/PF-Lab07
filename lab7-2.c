#include<stdio.h>
int main(){
	int n[10];
	printf("Enter  10 Numbers:\n");
	
	int i,search,found=0;
	for(i=0;i<10;i++){
		printf("Enter Number %d: ",i+1);
		scanf("%d",&n[i]);
	}
	
	printf("\nSearch The  Number = ");
	scanf("%d",&search);
	
	
	 for(i=0;i<=9;i++){
	 	if(n[i]==search){
	 	printf("\nNumbers Found successfully : %d\n",search);
	 	
	 	found=1;
	 	break;
    }
   }
    
    if(found==0){
    	printf("Number Not Found\n");
	}
	 

	
	
	return 0;
}
