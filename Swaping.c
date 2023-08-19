#include<stdio.h>
void main(){
    int a,b,temp,i;
    printf("Enter The Number to Be Reversed : ");
    scanf("%d",&a);
    while(a!=0){
        temp = a%10;
        printf("%d",temp);
        a= a/10;
    }
}