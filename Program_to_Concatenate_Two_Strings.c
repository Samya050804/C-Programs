#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char string1[20], string2[20];
    int i, j; /*  Initialize the string to NULL values */
    memset(string1, 0, 20);
    memset(string2, 0, 20);
    printf("Enter the first string : ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);
    printf("First string  = %s\n", string1);
 
    /*  Concat the second string to the end of the first string */
    printf("Second string = %s\n", string2);
    for (i = 0; string1[i] != '\0'; i++)
    { 
     /*  null statement: simply traversing the string1 */ ;
    }
    for (j = 0; string2[j] != '\0'; i++)
    {
        string1[i] = string2[j++];
    } /*  set the last character of string1 to NULL */
    string1[i] = '\0';
    printf("Concatenated string = %s\n", string1);
}
