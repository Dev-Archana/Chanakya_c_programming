#include<stdio.h>
int main(){
    int row,col;
    printf("Enter Number of rows and columns you want\n");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    printf("Enter Matrix Values:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix Elements are:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}