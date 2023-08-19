#include<stdio.h>
int arms (int a){
    int temp = a,sum = 0,d;
    while(temp!=0){
        d = temp%10;
        sum += d*d*d;
        temp = temp/10;
    }
    return sum;
}
void main(){
    int a,b;
    printf("Enter The Number : ");
    scanf("%d",&a);
    b= arms(a);
    if (b == a)
        printf("The Number Is Armstrong Number");
    else
        printf("The Number Is Not An Armstrong Numeber");    
}