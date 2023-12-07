#include <stdio.h>


int inputarray(int arr[3][3])
{
    // printf("Enter your numbers :\n");
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            scanf("%d",&arr[a][b]);
        }
        
    }
    
}
int printarray(int brr[3][3])
{
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            printf("%d ",brr[a][b]);
        }
        printf("\n");
    }
    
}
int main(){
    
    int a[3][3];
    int b[3][3];
    int result[3][3];
     printf("enter your first matrix :");
     inputarray(a);
     printf("enter your second matrix :");
     inputarray(b);


    for (int i =0 ; i<3 ;i++)
    {
        for(int j =0 ;j<3 ;j++)
        {
            result[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j];   
        }
    }

    printf("your first matrix is :\n");
    printarray(a);
    printf("your second matrix is :\n");
    printarray(b);
    printf("product of two matrices is :\n");
    printarray(result);
    



return 0;
}