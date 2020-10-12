//Consecutive Integer Method To Find GCD Of Two Numbers
#include<stdio.h>
int consec_g_c_d(int a,int b){
    int min = (a<b ? a:b);
    while(a%min!=0 || b%min!=0){
        min--;
    }
    return min;
}

int main(){
    int a,b;
    printf("Enter Two Numbers:\n");
    scanf("%d %d",&a,&b);
    printf("The GCD of %d and %d is = %d\n",a,b,consec_g_c_d(a,b));
}