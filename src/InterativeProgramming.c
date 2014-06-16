#include "InterativeProgramming.h"
#include "stdio.h"

int isSubstringInString(char *string, char *substring)
{
	int i = 0, j = 0, indexOfLastFound = 0;

restart:
	for(; string[i] != 0; i++)
	{
		if(string[i] == substring[j])
		{
			indexOfLastFound = i;
			break;
		}
	}
	
	printf("i:%d, j:%d, index:%d\n", i, j, indexOfLastFound);
	if(string[i] == 0)
		return 0;
	
	for(; string[i] != 0; i++, j++)
	{
		printf("%c", string[i]);
		printf("%c", substring[j]);
		
		if(string[i] != substring[j])
		{
			if(substring[j] == 0)
				return 1;
			
			j = 0;
			i = indexOfLastFound + 1;
			printf("\n-----i:%d, j:%d, index:%d\n", i, j, indexOfLastFound);
			
			goto restart;
		}
	}
	// puts("");
	// for(i = 0; substring[i] != 0; i++)
	// {
		// printf("%c", substring[i]);
	// }
	return 0;
}