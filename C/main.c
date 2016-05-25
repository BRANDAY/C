#include "stdio.h"
#include "stdlib.h"

#define MAXLINE 1000 //������������ ������ �������� ������ 
int maxxx = 1000;
int getline(char line[], int maxxx);
void copy(char to[], char from[]);

int main()
{	
	int len;
	int max;						// ����� ������������ �� ������������� ����� 
	char line[MAXLINE];				// ������� ������ 
	char longest[MAXLINE];			// ����� ������� ������ 

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max){
			max = len;
		    copy(longest, line);			
		}

	if (max > 0)					// ���� �� ���� ���� ������? 

		for (int i = 0; i < max; i++){
			putchar(longest[i]);
			printf("%d", i);
		}
		

		//printf("%s\n", longest);
	


	system("PAUSE");
}

int getline(char s[], int maxxx) // ������ ������ � s, ���������� ����� 
{
	int i, c;

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == 'n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char longest[], char line[])
{
	int i = 0;

	while ((longest[i] = line[i]) != '\0')
		i++;	
}
