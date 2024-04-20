#include<stdio.h>
#include<string.h>
int main(int argc,char* argv[]){
    // int n;
    // scanf("%d",&n);
    // char string[n];n
    // int k=strlen(string);
    // printf("%d",k);
    printf("argc was %d",argc);
    for(int i=0;i<argc;i++){
        printf("\n %s \a\a\a\a\a\a \n ",argv[i]);
    }
    return 0;
}