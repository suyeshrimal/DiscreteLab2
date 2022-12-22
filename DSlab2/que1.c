#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0){
        return b;
    }else{
    return gcd(b%a,a);
    }
}
int main()
{
    int a,b;
    printf("Enter a and b\n");
    scanf("%d %d",&a,&b);
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    return 0;
}