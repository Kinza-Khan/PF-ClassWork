#include <stdio.h>

main(){
char qualification[10];
char result[10];
printf("Enter Your Qualification ");
scanf("%s",qualification);
if(strcmp(qualification,"MS") == 0){
		printf("Enter Your Result ");
		scanf("%s",result);
		if(strcmp(result,"Pass") == 0){
				printf("Congratulations You are hired");
		}
		else{
			printf("Better luck next time");
		}
}	
else{
	printf("Not Eligible");	
}
}
