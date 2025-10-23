#include<stdio.h>
int main(){
	int n[10],min=0,max=0,dif;
	
	printf("Enter any 10 Nummbers \n");
	
	int i;
	for(i=0;i<10;i++){
		printf("Number %d : ",i+1);
		scanf(" %d",&n[i]);
	}	
	
	max=n[0];
	min=n[0];
	
	for(i=1;i<10;i++){
		if (n[i]<min){
			
		min=n[i];
	  }
	 }
	 
	for(i=1;i<10;i++){
		if(n[i]>max){
		
		max=n[i];
		
		}
	}
         printf("\nThe Min number is : %d\n",min);
            printf("\nThe Max Number is : %d\n",max);

	dif=max-min;
	printf("\nThe Difference largest and Smallest Number is : %d",dif);
	

	
	return 0;
}
