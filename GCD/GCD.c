#include <stdio.h>
int Gcd(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a =2100 , b= 980 ;
    int result = Gcd(a,b);
    printf("The GCD of %d and %d is %d:",a,b,result);
}
