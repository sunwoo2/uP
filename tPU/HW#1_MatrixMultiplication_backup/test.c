#include <stdio.h>

int main(){
    int n=0;

    for(int k=0; k<80; k++){
        // 10 of matrix term
        for(int i=1; i<=10; i++){
            if(i<=5)
                printf("MOV3 R%d, #%d\n", i-1, i);
            else
                printf("MOV3 R%d, #%d\n", i-1, i-5);
        }
        for(int i=0; i<10; i++)
                printf("MOV1 [%d], R%d\n", n++, i);
    }

    return 0;
}
