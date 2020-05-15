#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPassword(){
	char *password = "_tsQe1op";
	
	int i=0;
	while(password[i]!='\0'){
		i++;
	}

	int length = i;
	if (length<5){
		return false;
	}
	
	const int SIZE_CHAR = 63;
	char characters[SIZE_CHAR] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R',
	'S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n',
	'o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0','_'};
	
	
	const int SIZE_CHAR_UPPER = 26;
	char UpperLetters[SIZE_CHAR_UPPER] = {'A','B','C','D','E','F','G','H','I','J','K','L',
	'M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	const int SIZE_CHAR_LOWER = 26;
	char LowerLetters[SIZE_CHAR_LOWER] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
	'o','p','q','r','s','t','u','v','w','x','y','z'};
	
	const int SIZE_NUMBERS = 10;
	char numbers[SIZE_NUMBERS]= {'1','2','3','4','5','6','7','8','9','0'};
	
	bool valid = true;
	i = 0;
	int count=0;
	int countUnderscores=0;
	int countNumbers=0;
	int countUpper=0;
	int countLower=0;
	
	while(password[i]!='\0'){
		
	
		//whether username contains underscore or not  
	  	if(password[i]=='_'){
		  countUnderscores++;  }
		  
		//whether username contains numbers or not  
		for (int j = 0; j < SIZE_NUMBERS; j++) {
  		  if(password[i]==numbers[j]){
  			  countNumbers++;   }
		}
		
		//whether username contains Upper case letter or not  
		for (int j = 0; j < SIZE_CHAR_UPPER; j++) {
  		  if(password[i]==UpperLetters[j]){
  			  countUpper++;   }
		}
		
		//whether username contains Lower case letter or not  
		for (int j = 0; j < SIZE_CHAR_LOWER; j++) {
  		  if(password[i]==LowerLetters[j]){
  			  countLower++;   }
		}
		
		
		i++;
		
	}
	if(countUnderscores>1||countUnderscores==0||countNumbers==0||countUpper==0||countLower==0){
		//valid = false; 
		return false;}
	
	
	
	
	for (int j = 0; j < SIZE_NUMBERS; j++) {
		if(password[0]==numbers[j]){
		//valid = false; 
		return false; }
		 
		  
	}
	
	if(password[length-1]=='_'){
		//valid = false; 
		return false; }

	return true;
	
	
}
int main(void){
	
	
	bool valid = CheckPassword();
	
	if(valid){
		printf("Well done, your Password is Valid ");
		
	}else{
		printf("Oops, Password is Invalid!");
		
	}


}