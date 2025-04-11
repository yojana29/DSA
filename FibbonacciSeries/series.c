#include <stdio.h>

int fib(int n){
    int a = 0 , b = 1 ,c ;
    printf("%d ",a);
    printf("%d ",b);
    for( int i = 2; i<=n;i++){
        c = a+b;
        printf("%d ",c);
        a = b;
        b = c;
    }
    printf("\n");
    // return c;
}
int main(){
    int n;
    printf("Enter the size of series: \t");
    scanf("%d",&n);

    printf("The Fibonacci series up to position %d is: \n",n);
    fib(n);
    return 0;
}