#include <stdio.h>

int steps(int n){
    if(n<=3){
        return n;
    }else{
        return steps(n-1)+steps(n-2);
    }
}

int main(){
    int n = 0;
    // n = steps
    printf("n = ");
    scanf("%d",&n);
    int ret = steps(n);
    printf("sum = %d",ret);
    return 0;
}