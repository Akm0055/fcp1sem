#include <stdio.h>

int main(){
    printf("enter your numbers:\n");
    
    int a[25];
    for(int i=0; i<24; i++)
    {
        int b;
        scanf("%d",&b);
        a[i]=b;
    }
    int f,e;
    printf("enter the number you want to search");
    scanf("%d",&f);

    for (int i = 0; i < 24; i++)
    {
        if(a[i]==f)
        {
            e++;
        }
    }
    if(e)
    {
        printf("your number appeard %d times",e);
    }
    else
    {
        printf("your no not found");
    }
    

    
    
return 0;
}