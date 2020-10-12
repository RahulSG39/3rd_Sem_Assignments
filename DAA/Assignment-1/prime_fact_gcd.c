#include<stdio.h>
#include<math.h>
int h_a[100]={0};
int h_b[100]={0};

int prime_g_c_d(int a, int b){
    while(a%2==0){
        h_a[2]++;
        a/=2;        
    }
    while(b%2==0){
        h_b[2]++;
        b/=2;        
    }
    for(int i=3;i<=sqrt(a);i+=2){
        while(a%i==0){
            h_a[i]++;
            a/=i;
        }
    }
    for(int i=3;i<=sqrt(b);i+=2){
        while(b%i==0){
            h_b[i]++;
            b/=i;
        }
    }
    if(a>2) h_a[a]++;
    if(b>2) h_b[b]++;

    int gcd=1;
    for(int i=1;i<100;i++){
        if(h_a[i]>=1 && h_b[i]>=1){
            gcd *= (h_a[i]<=h_b[i]? h_a[i]*i : h_b[i]*i);
        }
    }
    return gcd;
}

int main(){
    int a,b;
    printf("Enter Two Numbers:\n");
    scanf("%d %d",&a,&b);
    printf("The gcd of %d and %d = %d\n",a,b,prime_g_c_d(a,b)); ;
}