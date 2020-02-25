#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],n,i,j,c,c1,k=0;
    scanf("%d",&n);
    c=c1=n/2;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d ",&a[i][j]);
    for(i=0;i<n/2;i++,c++,k=0,c1=0,printf("\n")){
        for(j=0;j<n;j++){
            if(j<n/2){
                a[c][n/2+k]=a[i][j];
                k++;
            }
            else if(j>=n/2){
                a[i][j]=a[n/2+c1][c];
                c1++;
            }
            printf("%d ",a[i][j]);
        }
    }
    for(i=n/2;i<n;i++,printf("\n")){
        for(j=0;j<n;j++){
            printf("%d-",a[i][j]);
        }
    }

}