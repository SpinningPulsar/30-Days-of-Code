#include<Stdio.h>
int main(){
    int array[4096]={0};

    array[7000]=0;
    printf("%d",array[7000]);
    printf("Ohai!");
    return 0;
}