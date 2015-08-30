#include<stdio.h>
int brace(char*, char*, char*);
int main()
{
	char a[50], b[60], s[100], r;
	printf("enter the string containing braces \n");
	gets(a);
	printf("enter the string you want to insert into the first string \n");
	gets(b);
	r = brace(a, b, s);
	if (r == 1)

		printf("invalid input\n");
	else
		printf("the string is---%s\n", s);
}
int  brace(char *a, char *b, char *s)
{
	int i, length, j;
	for (length = 0; a[length]; length++);
	if (length % 2 != 0)
	{
		return 1;
	}
	for (i = 0, j = length - 1;i<j; i++, j--)
	{
		switch (a[i])
		{
		case '(':
			if (a[j] != ')')
				return 1;
			break;
		case '[':
			if (a[j] != ']')
				return 1;
			break;
		case '{':
			if (a[j] != '}')
				return 1;
			break;
		case '<':
			if (a[j] != '>')
				return 1;
			break;
		default:
			return 1;
		}
	}
	for (i = 0; i < (length / 2); i++)
		s[i] = a[i];
	for (i, j = 0; b[j]; j++, i++)
		s[i] = b[j];
	for (j = (length / 2), i; a[j]; j++, i++)
		s[i] = a[j];
	s[i] = '\0';
	return 0;
}
