#include<iostream>
#include<conio.h>
int main(){
    int x0,x1;
    int a,c,m;
    int i,n;
    int array[20];
    printf("Enter the seed value of x0:");
    scanf("%d",&x0);
    printf("ENter the constant multiplier a:");
    scanf("%d",&a);
    printf("Enter the modulus M:");
    scanf("%d",&m);
    printf("How many numbers you want to generate:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        x1=(a*x0+c)%m;
        array[i]=x1;
        x0=x1;
    }
    printf("The generated random numbers are:");
    for(i=0;i<n;i++){
        printf("%d",array[i]);
        printf("/t");
    }
    getch();
    return 0;
}