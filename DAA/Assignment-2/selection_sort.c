#include<stdio.h>
void sort(int a[],int n)  
{  
    int i,j,min_idx;  
    for(i=0;i<n-1;i++)  
    {  
        min_idx=i;  
        for(j=i+1;j<n;j++)  
        if(a[j]<a[min_idx])  
            min_idx = j;  
        int temp = a[min_idx];  
        a[min_idx]= a[i];  
        a[i] = temp;  
    }  
}  

int main(){
    int n,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("Sorted array: \n");  
    for (i=0;i<n;i++)  
        printf("%d\t",a[i]);  
    printf("\n");
}