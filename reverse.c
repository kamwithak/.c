#include <stdio.h>
#include <string.h>

int string_length(char *pointer)
{
   int c = 0;

   while( *(pointer + c) != '\0' )
   	c++;
   	
   return c;
}

void reverse(char *string) 
{

   int length, c;
   char *begin, *end, temp;
 
   length = string_length(string);
   begin = string;
   end = string;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
   	temp = *end;
     	*end = *begin;
     	*begin = temp;
 
      begin++;
      end--;
   }
}

int main(void) 
{
	char i[] = "Enter a String: ";
	char string[100];

	for(;;)
	{
		printf("%s", i);
		scanf("%s", string);

		reverse(string);
		printf("Reverse of String: %s\n", string);
         break;
	}

	return 0;	
}