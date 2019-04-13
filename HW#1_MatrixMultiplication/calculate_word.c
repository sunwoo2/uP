#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(int argc, char* argv[])
{ 
 FILE *fp;
 char fname[20],buffer[300];
 int line_num=0;
 int MUL=0;
 int ADD=0;
 int MOV3=0;
 int MOV1=0;
 int MOV0=0;

	if(argc != 2){
		printf("tpu <file>\n");
		return -1;
	}

    strcpy(fname, argv[1]);

 fp = fopen(fname,"r");
 if( fp==NULL){
  fprintf(stderr,"파일%s를 열 수 없어요 \n",fname);
  exit(1);
 }
 while( fgets(buffer, 300, fp)){
    line_num++;
    if(strstr(buffer,"MUL"))
        MUL++;
    else if(strstr(buffer,"ADD"))
        ADD++;
    else if(strstr(buffer,"MOV3"))
        MOV3++;
    else if(strstr(buffer,"MOV0"))
        MOV0++;
    else if(strstr(buffer,"MOV1"))
        MOV1++;
    else
        ;
 }
 fclose(fp);

    printf("MUL  : %d\n", MUL);
    printf("ADD  : %d\n", ADD);
    printf("MOV3 : %d\n", MOV3);
    printf("MOV1 : %d\n", MOV1);
    printf("MOV0 : %d\n", MOV0);
    printf("Total: %d\n", MOV0+MUL+ADD+MOV3+MOV1);

 return 0;
}

// Source : https://bymakers.tistory.com/31 [bymakers]
