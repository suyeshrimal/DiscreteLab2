#include <stdio.h>
int main()
{
    int i, j, num, Prime;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Prime Factors of %d are: \n", num);
    for(i=2; i<=num; i++){
        if(num%i==0)
        {
            Prime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    Prime = 0;
                    break;
                }
            }
            if(Prime==1)
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}