#include <stdio.h>
#include <string.h>
void main(){
    char Inpstring[20];
    int i, length;
    int condition = 0;
    printf("Enter a string:");
    scanf("%s", Inpstring);
    length = strlen(Inpstring);
    for(i=0;i < length ;i++){
        if(Inpstring[i] != Inpstring[length-i-1]){
            condition = 1;
            break;
   }
}
    if (condition) {
        printf("%s is not a palindrome", Inpstring);
    }    
    else {
        printf("%s is a palindrome", Inpstring);
    }
}