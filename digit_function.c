#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define true 1

//Write a function that receives an integer and returns how many digits the integer has. 
//Use the function in a program that receives integers from user and displays digit count of the entered integer on display repeatedly until user enters zero. 
 
 
//In the first program I wrote and commented; Each digit is taken from the user individually. 
//And if the user presses '0', the number of digits of the number is printed on the screen. 

/*int number_of_digits(int *a){
 	
 	int i,digit=0;
 	
 	for(i=0;;i++){
 		if(a[i]==0){
 			break;
		 }
		else{
		 	digit++;	
		 }
 	  
	 }

    return digit;
 }
 
 int main(){
 	
 	int i;
 	
 	int *p=malloc(30*sizeof(int));
	

 	printf("Please enter the number(enter one digit at a time)(press '0' when you want to exit.):");
 	
 	for(i=0;;i++){
 		scanf("%d",&p[i]);
 		if(p[i]==0){
 			printf("Number of digit:%d",number_of_digits(p));
		 }
	 }
 	
    free(p);
    
 	return 0;
 }*/

int main(){
 	
 	int n,i;
    
 	
 	printf("Please enter an integer:");
 	scanf("%d",&n);
 	
 	while(true){
 		
 	   	printf("Number of digits:%d\n",digit(n));
 	   	//getch: Reads a character without using cache directly from the console and does not print the character on the screen.
 	   	//We have to need <conio.h> to use getch(); function. 
		int x=getch(); 
 	   	if(x=='0'){
 	   	   break;
	    }
      }
      
    return 0;
} 

int digit(int a){
 	
 	int digit=0;
 	
 	while(a>0){
 		a=a/10;
 		digit++;
	 }
    return digit;
 }

 
 
 
 
 
 
 
 
 
 
 
 
 
 
