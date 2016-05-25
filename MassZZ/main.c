#include <stdio.h>
#include <string.h>

#define MAXLINES 5000     // макс число строк	
char *lineptr[MAXLINES];  // указатель на строки

int readlines(char *lineptr[], int nlines);  // чтение строк
void writelines(char *lineptr[], int nlines);
void qsort(char *lineptr[], int left, int right);

#define MAXLEN 1000
int getlines(char *, int);
char *alloc(int);

// сортировка строк
int main()
{
	int nlines; //количество прочитанных строк

	if ((nlines = readlines(lineptr, MAXLINES)) >= 0){
		qsort(lineptr, 0, nlines - 1);
		writelines(lineptr, nlines);
		return 0;
	} else {
		printf("error");
		return 1;
	}
}

// чтение строк
int readlines(char *lineptr[], int nlines)
{
	int len;
	char *p, line[MAXLEN];

	nlines = 0;
	while ((len = getline(line, MAXLEN)) > 0)
		if (nlines >= MAXLINES || (p = alloc(len)) == NULL)
			return -1;
		else{
			line[len - 1] = '\0';
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
		return nlines;
}
//writelenes печать строк
void writelines(char *lineptr[], int nlines)
{
	while (nlines --> 0)
		printf("%s\n", *lineptr++);
}
//qsort сортировка по возр
void qsort(char *v[], int left, int right)
{
	int i, last;
	void swap(char *v[], int i, int j);

	if (left >= right)
		return;
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if (strcmp(v[i], v[left]) < 0)
			swap(v, ++last, i);
	swap(v, left, last);
	qsort(v, left, last);
	qsort(v, last + 1, right);
}

// программа перестоновки
void swap(char *v[], int i, int j)
{
	char *temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}