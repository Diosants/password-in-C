#include <stdio.h>
#include <string.h>

int main()
{
     char  password[20];
     printf("Enter Password!!\n");
     scanf("%s",password);

     if (strcmp(password,"secret123") == 0){

        printf("Acess granted .\n");

     }

     else {

        printf("Acess denied.\n");
     }
    return 0;
}

