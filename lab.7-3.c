#include<stdio.h>
int main(){
	int student[10];
	int marks[10],total=0;
	float avg;
	
	printf("Enter Marks Of student One by One from (0-10): \nRemember \n     Marks>5='FAIL'\n      Marks<5='PASS'\n\n");
	
	int i;
	for(i=0;i<10;i++){
		printf("Student %d marks : ",i+1);
	scanf("%d",&student[i]);
	total+= student[i];
     }
     printf("\n-------------PASS------------\n");
     for(i=0;i<10;i++){
     	if(student[i]>=5){
     	printf("Student %d marks : %d\n",i+1,student[i]);
	 }
    }
	 printf("\n------------FAIL-------------\n");
	 for(i=0;i<10;i++){
	 	if(student[i]<5){
	 		printf("Student %d marks :  %d\n",i+1,student[i]);
		 }
	 }

	 printf("\n");
	 printf("The  Average Is = %d",total/student[10]);
	
	
	return 0;
}
