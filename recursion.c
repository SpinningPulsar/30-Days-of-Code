    #include<stdio.h>
    int recursion(int N){
        //printf("%d",N);
        if(N>1){
        return (N * recursion(N-1));
        }
        else{
            return 1;
        }
    }
    int main(){
        int N=10;
        int Z= recursion(N);
        printf("%d",Z);
    }