#include<stdio.h>
#include<string.h>
void words(char s[]){
    int count = 0, i;
    for (i = 0;s[i] != '\0';i++){
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    printf("\tNumber of words in given string are: %d\n", count + 1);
}

void vowelCon(char sentence[]){
    int i, vowels = 0, consonants = 0, special = 0;
    for (i = 0; sentence[i] != '\0'; i++)
    {
        if ((sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] =='i' || sentence[i] == 'o' || sentence[i] == 'u') ||
        (sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] =='I' || sentence[i] == 'O' || sentence[i] == 'U'))
            vowels = vowels + 1;
        else
            consonants = consonants + 1;
        if (sentence[i] =='\t' ||sentence[i] =='\0' || sentence[i] ==' ')
            special = special + 1;
        
    }
    consonants = consonants - special;
    printf("No. of vowels in %s = %d\n", sentence, vowels);
    printf("No. of consonants in %s = %d\n", sentence, consonants);
}

void substring(char str[], char search[]){
    int count1 = 0, count2 = 0, i, j, flag;
    while (str[count1] != '\0')
        count1++;
    while (search[count2] != '\0')
        count2++;
    for (i = 0; i <= count1 - count2; i++){
        for (j = i; j < i + count2; j++){
            flag = 1;
            if (str[j] != search[j - i]){
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("\t%s is present in the String",search);
    else
        printf("\t%s is not present in the String",search);
}

void upLower(char str[]){
    int i=0;
    //convert small letter string to capital letter string
    while(str[i]!='\0')
    {
        if(str[i]>96 && str[i]<123 )//if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
        i++;
    }
    printf("\tIn Upper Case :%s",str);
    for(i=0;i<=strlen(str);i++){
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }
   printf("\tIn Lower Case :%s",str);
    
}

void encoding(char str[]){
    int i = 0;
    while (str[i] != '\0') {
      str[i] = str[i] + 1;  
      i++;
    }
    printf("Encoded String is: %s",str);
}

void main(){
    int i = 0;
    char x[1000];
    char y[1000];
    printf ("Choose an option : \n");
    printf("\t1. Find number of words present in a string\n");
    printf("\t2. Find number of vowels and consonants present in a string\n"); 
    printf("\t3. Search a substring present in a string\n"); 
    printf("\t4. Print the string in lower case or upper case\n"); 
    printf("\t5. String Encoding\n"); 
    printf("\t6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&i);
    if (i==1){
        printf("Enter the string:\n");
        getchar();
        gets(x);
        words(x);
    }
    else if (i==2){
        printf("Enter  the string : ");
        getchar();
        gets(x);
        vowelCon(x);
    }
    else if(i==3){
        printf("Enter a string:");
        getchar();
        gets(x);
        printf("Enter search substring:");
        getchar();
        gets(y);
        substring(x,y);
    }
    else if(i==4){
        printf("Enter your String:");
        getchar();
        gets(x);
        upLower(x);
    }
    else if(i==5){
        printf("\nEnter the String to be Encode : ");
        getchar();
        gets(x);
        encoding(x);
    }
    else
        printf("Programm Ended");
}