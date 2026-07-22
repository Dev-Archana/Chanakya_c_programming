// Write a program to multiply every element of the array following matrix by 5
/*
2 4 6
1 3 5
*/
#include<stdio.h>
int main(){
    int matrix_1[2][3]={{2,4,6},{1,3,5}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            printf("%d\t",matrix_1[i][j]*5);
        }
        printf("\n");
    }
    return 0;
}