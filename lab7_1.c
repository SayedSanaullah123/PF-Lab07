#include<stdio.h>
int main(){
	int n[5];
	
	int i,last;
	
	for(i=0;i<5;i++){
		scanf("%d",&n[i]);
	}
	
	last=n[4];
	
    for(i=4;i>0;i--){
    	n[i]=n[i-1];
	}
    
    n[0]=last;
    
	for(i=0;i<5;i++){
		printf("%d",n[i]);
			}
	
	
	
	return 0;
}

