//Q.1 Write a Program to convert the given string in uppercase without using any string function. 

#include<stdio.h>

main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) 
	{
        if(str[i] >= 'a' && str[i] <= 'z') 
		{
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s\n", str);

}
