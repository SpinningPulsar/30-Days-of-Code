#include<stdio.h>
#include<String.h>
int main(){
    int N=1000;
    int T;
    scanf("%d",&T);
    char odd[N];
    char even[N];
    int oddIndex=0,evenIndex=0;
    char S[N+1];
    for(int Z=0;Z<T;Z++){
    //scanf("%d",&N);
    scanf("%s",S);
    int length=strlen(S);
    oddIndex=0;
    evenIndex=0;
    for(int i=0;i<length;i++){
        if(i%2==0){
            odd[oddIndex]=S[i];
            oddIndex++;
        }
        else{
            even[evenIndex]=S[i];
            evenIndex++;
        }
    }
    odd[oddIndex]='\0';
    even[evenIndex]='\0';
    printf("%s %s",odd,even);
    }
    return 0;
}