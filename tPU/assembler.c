#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "assem.h"

void asm_to_bin(char buffer[], int line);

int main(int argc, char* argv[]){

	int line=0; 	
	char buffer[100];

	if(argc != 2){
		printf("binary로 변환할 assemly파일을 입력하시오!\n");
		return 0;
	}

	FILE *fp = fopen(argv[1], "r");

	while(1){
		if( fgets(buffer, sizeof(buffer), fp) == NULL){
			break;
		}
		asm_to_bin(buffer, line);
		line++;		
	}

	return 0;
}

void asm_to_bin(char buffer[], int line){

	int j=0;
	int OP1, OP2;
	char* s;
	char num[5];
	char bin[5] = "0000";
	char bin1[9] = "00000000";
 
	s = strtok(buffer, " ");

	if(strcmp(s, "MOV0") == 0){	

        // OP1
		s = strtok(NULL, " ");		
		for(int i=1; isdigit(s[i])!=0; i++)	
			num[i-1] = s[i];
		OP1 = atoi(num);		
		for(int i=3; i>=0 && OP1!=0; i--){	
			if( OP1%2 == 1)
				bin[i] = '1';
			OP1 /= 2;
		}
        memset(num, '\0', sizeof(num));

        // OP2
		s = strtok(NULL, " ");	
		for(int i=1; isdigit(s[i])!=0; i++)
			num[i-1] = s[i];
		OP2 = atoi(num);		
		for(int i=7; i>=0 && OP2!=0; i--){
			if( OP2%2 == 1)
				bin1[i] = '1';
			OP2 /= 2;
		}
        memset(num, '\0', sizeof(num));

        // print binary
		printf("0000");
		for(int i=0; i<4; i++){
			printf("%c", bin[i]);
		}
		for(int i=0; i<8; i++){
			printf("%c", bin1[i]);
		}
		printf("\n");

        // initialize
        memset(bin, 0, sizeof(bin));
        memset(bin1, 0, sizeof(bin1));
        memset(num, '\0', sizeof(num));

	}else if(strcmp(s, "MOV1") == 0){

		s = strtok(NULL, " ");		
		for(int i=1; isdigit(s[i])!=0; i++){
			num[i-1] = s[i];
        }
		OP1 = atoi(num);		
		for(int i=7; i>=0 && OP1!=0; i--){
			if( OP1%2 == 1)
				bin1[i] = '1';
			OP1 /= 2;
		}
        memset(num, '\0', sizeof(num));

		s = strtok(NULL, " ");	
		for(int i=1; isdigit(s[i])!=0; i++)
			num[i-1] = s[i];
		OP2 = atoi(num);
		for(int i=3; i>=0 && OP2!=0; i--){
			if( OP2%2 == 1)
				bin[i] = '1';
			OP2 /= 2;
		}
        memset(num, '\0', sizeof(num));

		printf("0001");
		for(int i=0; i<4; i++){
			printf("%c", bin[i]);
		}
		for(int i=0; i<8; i++){
			printf("%c", bin1[i]);
		}
		printf("\n");

        memset(bin, 0, sizeof(bin));
        memset(bin1, 0, sizeof(bin1));
        memset(num, '\0', sizeof(num));

	}else if(strcmp(s, "MOV2") == 0){

		s = strtok(NULL, " ");		
		for(int i=2; isdigit(s[i])!=0; i++)
			num[i-2] = s[i];
		OP1 = atoi(num);		
		for(int i=3; i>=0 && OP1!=0; i--){		
			if( OP1%2 == 1)
				bin[i] = '1';
			OP1 /= 2;
		}
        memset(num, '\0', sizeof(num));

		s = strtok(NULL, " ");	
		for(int i=1; isdigit(s[i])!=0; i++)
			num[i-1] = s[i];
		OP2 = atoi(num);
		for(int i=3; i>=0 && OP2!=0; i--){	
			if( OP2%2 == 1)
				bin1[i] = '1';
			OP2 /= 2;
		}
        memset(num, '\0', sizeof(num));

		printf("0010");
		for(int i=0; i<4; i++){
			printf("%c", bin[i]);
		}
		for(int i=0; i<8; i++){
			printf("%c", bin1[i]);
		}
		printf("\n");

        memset(bin, 0, sizeof(bin));
        memset(bin1, 0, sizeof(bin1));
        memset(num, '\0', sizeof(num));

	}else if(strcmp(s, "MOV3") == 0){

		s = strtok(NULL, " ");		
		for(int i=1; isdigit(s[i])!=0; i++)
			num[i-1] = s[i];
		OP1 = atoi(num);		
		for(int i=3; i>=0 && OP1!=0; i--){		
			if( OP1%2 == 1)
				bin[i] = '1';
			OP1 /= 2;
		}
        memset(num, '\0', sizeof(num));

		s = strtok(NULL, " ");	
		if(s[1]=='-'){	    // negative
			for(int i=2; isdigit(s[i])!=0; i++)
				num[i-2] = s[i];
			OP2 = atoi(num);	
			OP2 = ~( (~255) | (OP2-1) );		
			for(int i=7; i>=0 && OP2!=0; i--){	 
				if( OP2%2 == 1)
					bin1[i] = '1';
				OP2 /= 2;
			}
		}else{		// positive
			for(int i=1; isdigit(s[i])!=0; i++)
				num[i-1] = s[i];
			OP2 = atoi(num);
			for(int i=7; i>=0 && OP2!=0; i--){	
				if( OP2%2 == 1)
					bin1[i] = '1';
				OP2 /= 2;
			}
		}
        memset(num, '\0', sizeof(num));

		printf("0011");
		for(int i=0; i<4; i++){
			printf("%c", bin[i]);
		}
		for(int i=0; i<8; i++){
			printf("%c", bin1[i]);
		}
		printf("\n");

        memset(bin, 0, sizeof(bin));
        memset(bin1, 0, sizeof(bin1));
        memset(num, '\0', sizeof(num));

	}else if(strcmp(s, "ADD") == 0){

		s = strtok(NULL, " ");		
		for(int i=1; isdigit(s[i])!=0; i++)
			num[i-1] = s[i];
		OP1 = atoi(num);		
		for(int i=3; i>=0 && OP1!=0; i--){		
			if( OP1%2 == 1)
				bin[i] = '1';
			OP1 /= 2;
		}
        memset(num, '\0', sizeof(num));

		s = strtok(NULL, " ");	
		for(int i=1; isdigit(s[i])!=0; i++)
			num[i-1] = s[i];
		OP2 = atoi(num);
		for(int i=3; i>=0 && OP2!=0; i--){	
			if( OP2%2 == 1)
				bin1[i] = '1';
			OP2 /= 2;
		}
        memset(num, '\0', sizeof(num));

		printf("0100");
		for(int i=0; i<4; i++){
			printf("%c", bin[i]);
		}
		for(int i=0; i<8; i++){
			printf("%c", bin1[i]);
		}
		printf("\n");

        memset(bin, 0, sizeof(bin));
        memset(bin1, 0, sizeof(bin1));
        memset(num, '\0', sizeof(num));

	}else if(strcmp(s, "SUB") == 0){

		s = strtok(NULL, " ");		
		for(int i=1; isdigit(s[i])!=0; i++)
			num[i-1] = s[i];
		OP1 = atoi(num);		
		for(int i=3; i>=0 && OP1!=0; i--){		
			if( OP1%2 == 1)
				bin[i] = '1';
			OP1 /= 2;
		}
        memset(num, '\0', sizeof(num));

		s = strtok(NULL, " ");	
		for(int i=1; isdigit(s[i])!=0; i++)
			num[i-1] = s[i];
		OP2 = atoi(num);
		for(int i=3; i>=0 && OP2!=0; i--){	
			if( OP2%2 == 1)
				bin1[i] = '1';
			OP2 /= 2;
		}
        memset(num, '\0', sizeof(num));

		printf("0101");
		for(int i=0; i<4; i++){
			printf("%c", bin[i]);
		}
		for(int i=0; i<8; i++){
			printf("%c", bin1[i]);
		}
		printf("\n");

        memset(bin, 0, sizeof(bin));
        memset(bin1, 0, sizeof(bin1));
        memset(num, '\0', sizeof(num));

	}else if(strcmp(s, "MUL") == 0){

		s = strtok(NULL, " ");		
		for(int i=1; isdigit(s[i])!=0; i++)
			num[i-1] = s[i];
		OP1 = atoi(num);		
		for(int i=3; i>=0 && OP1!=0; i--){		
			if( OP1%2 == 1)
				bin[i] = '1';
			OP1 /= 2;
		}
        memset(num, '\0', sizeof(num));

		s = strtok(NULL, " ");	
		for(int i=1; isdigit(s[i])!=0; i++)
			num[i-1] = s[i];
		OP2 = atoi(num);
		for(int i=3; i>=0 && OP2!=0; i--){	
			if( OP2%2 == 1)
				bin1[i] = '1';
			OP2 /= 2;
		}
        memset(num, '\0', sizeof(num));

		printf("0111");
		for(int i=0; i<4; i++){
			printf("%c", bin[i]);
		}
		for(int i=0; i<8; i++){
			printf("%c", bin1[i]);
		}
		printf("\n");

        memset(bin, 0, sizeof(bin));
        memset(bin1, 0, sizeof(bin1));
        memset(num, '\0', sizeof(num));
	}else if(strcmp(s, "JZ") == 0){

		s = strtok(NULL, " ");		
		for(int i=1; isdigit(s[i])!=0; i++)
			num[i-1] = s[i];
		OP1 = atoi(num);		
		for(int i=3; i>=0 && OP1!=0; i--){		
			if( OP1%2 == 1)
				bin[i] = '1';
			OP1 /= 2;
		}
        memset(num, '\0', sizeof(num));

		s = strtok(NULL, " ");	
		if(s[0]=='-'){	    // negative
			for(int i=1; isdigit(s[i])!=0; i++)
				num[i-1] = s[i];
			OP2 = atoi(num);	
			OP2 = ~( (~255) | (OP2-1) );		
			for(int i=7; i>=0 && OP2!=0; i--){	 
				if( OP2%2 == 1)
					bin1[i] = '1';
				OP2 /= 2;
			}
		}else{		        // positive
			for(int i=0; isdigit(s[i])!=0; i++)
				num[i-0] = s[i];
			OP2 = atoi(num);
			for(int i=7; i>=0 && OP2!=0; i--){	
				if( OP2%2 == 1)
					bin1[i] = '1';
				OP2 /= 2;
			}
		}
        memset(num, '\0', sizeof(num));

		printf("0110");
		for(int i=0; i<4; i++){
			printf("%c", bin[i]);
		}
		for(int i=0; i<8; i++){
			printf("%c", bin1[i]);
		}
		printf("\n");

        memset(bin, 0, sizeof(bin));
        memset(bin1, 0, sizeof(bin1));
        memset(num, '\0', sizeof(num));
    }

}
