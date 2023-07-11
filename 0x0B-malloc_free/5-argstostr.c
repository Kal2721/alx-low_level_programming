#include "main.h"
#include <string.h>
#include <stdio.h>

char *argstostr(int ac, char **av) 
{
       	int i;
       	int len = 1;
	char * str;
	
	for (i = 1; i < argc; i++) 
	{
		len += strlen(argv[i]);
	}
      	
	str = malloc(sizeof(char)*len);
	str[0] = '\0';
	
	for (i = 1; i < argc; i++) 
	{
		strcat(str, argv[i]);
	}
	
	free(str);
}
