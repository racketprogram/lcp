#include <stdio.h>

char* strcpy(char *d, char *s)
{
	for (int i = 0; s[i] != '\0'; d[i++] = s[i++]);
}


char* shrink(char *d, char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; s[i] != '\0'; i++) {
		
		while ( s[i] == ' '|| s[i] == '\n' || s[i] == '\t' ||
		        s[i] == '\r') 
		{
			i++;
			j = 1;
		}
		
		while (j == 1) {
			d[k++] = ' ';
			j = 0;
		}
		d[k++] = s[i];
	}
}
		
			

int main(void)
{
	char buf[10];
	char buf2[128];
	shrink(buf2, "aa   	  cc	 dd");
	strcpy(buf, "Fuck you  ");
	printf("%s\n", buf);
	printf("%s\n", buf2);
	return 0;
}
