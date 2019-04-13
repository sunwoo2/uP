#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(void)
{ 
 FILE *fp;
 char fname[20],buffer[300],word[20];
 int line_num=0;
 int n=0;

 printf("파일 이름을 입력하세요 :");// d:\\test\\baby.txt
 scanf("%s", fname);
 printf("검색할 단어는 ? : ");
 scanf("%s", word);

 fp = fopen(fname,"r");
 if( fp==NULL){
  fprintf(stderr,"파일%s를 열 수 없어요 \n",fname);
  exit(1);
 }
 while( fgets(buffer, 300, fp)){
  line_num++;
  if(strstr(buffer,word))//문자열 찾아주는 함수
      n++;
 }
 fclose(fp);

    printf("%s: %d\n", word, n);

 return 0;
}

// Source : https://bymakers.tistory.com/31 [bymakers]
