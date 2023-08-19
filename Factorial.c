#include <stdio.h>
int main() {
    int a, b;
    unsigned long long fact = 1;
    printf("Enter The Number : ");
    scanf("%d",&a);
    if (a < 0){
        printf("Error");
    }
    else{
        for(b = 1; b <= a; ++b){
            fact*=b;
        }
        printf("The Factorial Of %d = %llu",a,fact);
    }
    
    return 0;
}
