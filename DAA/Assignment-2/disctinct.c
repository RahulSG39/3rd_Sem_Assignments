#include<stdio.h>
int main(){
    int n,i,flag=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        if(a[i]==a[i-1]){
            flag=1;
        }
    }
    if(flag==1){
        printf("There are duplicate elements in the array!\n");
    }else printf("The elements of the array are distinct!\n");
}