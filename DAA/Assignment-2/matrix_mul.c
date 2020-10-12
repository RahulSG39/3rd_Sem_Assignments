#include<stdio.h>
int main(){ 
    int m,n,p,q,i,j,k,a[100][100],b[100][100],c[100][100],sum=0;
    printf("Enter the order of the first matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the order of the second matrix:\n");
    scanf("%d%d",&p,&q);
    if(n!=p) printf("The given 2 arrays cannot be multiplied!!\n");
    else{
        printf("Enter the elements of the first matrix:\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements of the second matrix:\n");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                for(k=0;k<p;k++){
                    sum+=a[i][k]*b[k][j];
                }
                c[i][j]=sum;
                sum = 0;
            }
        }
        printf("Product of the two matrices are:\n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
}