/* 
Program: pascalTriangle
Author: Janis Perren
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int inputValue;
	long fakultaetZeile;
	long fakultaetSpalte;
	long fakultaetZeileSpalte;
	long zahlenWert;

	if(argc>1){
		inputValue = atoi(argv[1]);
	}else{
		inputValue = 0;
	}

	if(inputValue<1||inputValue>20){
		printf("Usage: pascalTriangle wholeNumber\n\t wholeNumber: integer on the interval [1,20]\n");
		return 0;
	}
	
	fakultaetZeile = 1;
	for(int i=1;i<=inputValue;i++){
		for(int l=0;l<(inputValue-i);l++){
			printf("   ");
		}
		printf("1     ");
		fakultaetZeile *= i;
		fakultaetSpalte = 1;
		for(int j=1;j<=i-1;j++){
			fakultaetZeileSpalte = 1;
			for(int k=1;k<=(i-1-j);k++){
				fakultaetZeileSpalte *= k;
			}
			fakultaetSpalte *= j;
			zahlenWert = fakultaetZeile/(i*fakultaetSpalte*fakultaetZeileSpalte);
			
			if(zahlenWert>9999){
				printf("%ld ",zahlenWert);
			}else if(zahlenWert>999){
				printf("%ld  ",zahlenWert);
			}else if(zahlenWert>99){
				printf("%ld   ",zahlenWert);
			}else if(zahlenWert>9){
				printf("%ld    ",zahlenWert);
			}else{
				printf("%ld     ",zahlenWert);
			}
		}
		printf("\n");	
	}	
	return 0;
}

