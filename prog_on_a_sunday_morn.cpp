//Given a base-10 integer, , convert it to binary (base-2). 
//Then find and print the base- integer denoting the maximum number of consecutive 1's in 's binary representation.
// When working with different bases, it is common to show the base as a subscript.
#include<Stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int remainder;
    int count=0,new_count=0;
    while(n>0){
        remainder=n%2;
        n=n/2;
        if(remainder==1){
            new_count++;
            if(count<new_count){
                count=new_count;
            }
        }
        else{
            new_count=0;
        }
    }
    printf("%d",count);
}