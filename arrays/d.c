#include <stdio.h>
int inputarray(int arr[3][3])
{
    // printf("Enter your numbers :\n");
    printf("input your Matrix\n");
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

int main()
{
    int a[3][3];
    inputarray(a);
    if(a[1][0]==a[0][1] && a[2][0]==a[0][2] && a[2][1]==a[1][2])
    {
        printf("your Matrix is symmetric\n");
        printarray(a);
    }
    else{
        printf("Your matrix is not symmetric");
    }

    


return 0;
}