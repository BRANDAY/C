#include "stdlib.h"
#include "stdio.h"

#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char amessage[] = "Hello,World!"; // сам массив
char *pmassage = "Hello,World!"; //указатель на первый элемент массива

int len(char *p);
void strcpya(char *s, char *t);
void strcpyp(char *s, char *t);
void strio(char *s);

int main()
{
	int lenmas1 = 0;
	int lenmas2 = 0;
	int lenmas3 = 0;

	printf("Source:\n");
	strio(pmassage);
	
	lenmas1 = len(pmassage);
	printf("- %d", lenmas1);

	char mas[20];
	char *m;
	m = &mas[0];

	printf("\n\nZero\n");
	strio(m);	
	lenmas2 = len(m);
	printf("- %d\n", lenmas2);
	
	strcpyp(m, pmassage);

	printf("\nNew\n");
	strio(m);

	lenmas3 = len(m);
	printf("- %d\n", lenmas3);

	system("PAUSE");		
}

char *alloc(int n)
{
	if (allocbuf + ALLOCSIZE - allocp >= n){
		allocp += n;
		return allocp - n;
	}
	else
		return 0;			
}
void afree(char *p)
{
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}
// len: возвращает длину строки s
int len(char *s) 
{
	char *p = s;
	while (*p != '\0')
		p++;
	return p - s;
}
//копирование с индексом массива
void strcpya(char *s, char *t)
{
	for (int i = 0; (s[i] = t[i]) != '\0'; i++)
		;
}
//клпирование с указателями
void strcpyp(char *s, char *t)
{
	while(*s++ = *t++)
		;
}
// вывод массива
void strio(char *s)
{
	for (; *s != '\0'; s++){
		printf("%c", *s);
	}		
}