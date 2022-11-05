#include <stdio.h>  
#include <stdlib.h>
#include<math.h>










int main(){
	
int num;
int reverse=0;
printf("Enter a number: ");
scanf("%d",&num);
while(num%10!=0){
	
	
	reverse=reverse*10+num%10;
	num/=10;
	
	
}

while(reverse%10!=0){
	
	
	switch(reverse%10){
		
		case 0:
			printf("ZERO ");
			break;
		case 1:
			printf("ONE ");
			break;
		case 2:
		printf("TWO ");	
		    break;
		case 3:
			printf("THREE ");
			break;
		case 4:
			printf("FOUR ");
			break;
		case 5:
		printf("FIVE ");	
		    break;
		case 6:
			printf("SIX ");
			break;
		case 7:
			printf("SEVEN ");
			break;
		case 8:
		printf("EIGHT ");	
		    break;
		case 9:
			printf("NINE ");
			break;
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	reverse/=10;
	
	
	
	
	
	
}
	
	return 0;
}
