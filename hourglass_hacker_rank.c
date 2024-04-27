#include<Stdio.h>
int main(){
    int A[6][6];
    printf("Input: \n");
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            scanf("%d",&A[i][j]);
        }
    }
    int IS_IT_MAX, MAX;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            IS_IT_MAX=A[i][j]+A[i][j+1]+A[i][j+2]+A[i+1][j+1]+A[i+2][j]+A[i+2][j+1]+A[i+2][j+2];
            if(MAX<IS_IT_MAX){
                MAX=IS_IT_MAX;
            }
        }
    }
    printf("%d",MAX);
    return 0;
}