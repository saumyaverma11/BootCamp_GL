#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
       
        for (int k = 0; k < n; k++)
        {
             for (int j = 0; j < n * i; j++)
            {
                printf(" ");
            }
            for(int j=0;j<k+1;j++){
                printf("*");
            }
            printf("\n");
        }
    }
}
