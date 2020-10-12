//Euclid's Method To Find GCD Of Two Numbers
#include<stdio.h>
int g_c_d(int a, int b){
    if(b==0) return a;
    return g_c_d(b,a%b);
}

int main(){
    int a,b,gcd;
    printf("Enter Two Numbers:\n");
    scanf("%d %d",&a,&b);
    printf("The GCD of %d and %d is = %d\n",a,b,gcd = g_c_d(a,b));
}