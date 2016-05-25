#include <stdio.h>
#include <ctype.h>
#include <stdarg.h>
#include <string.h>

void minprintf(char *fmt, ...);
char *s = "Hello,World!";

FILE *fopen(char *name, char *mode);
void *calloc(size_t n, size_t size);

int main(int argc, char *argv[])
{
/*
	int *ip;
	ip = (int*)calloc(n, sizeofF(int));

	for (p = head; p != NULL; p = q){
		q = p->next;
		free(p);
	}
*/

	FILE *fp;
	void filecopy(FILE *, FILE *);
	char *prog = argv[0]; //имя программы

	
	if (argc == 1)  //нет аргументов, капируеться стандартный ввод
		filecopy(stdin, stdout);
	else
		while (--argc > 0 )
			if ((fp = fopen(*++argv, "r")) == NULL){
				fprintf(stderr,"%s err %s\n", prog, *argv);
				exit(1);
			}
			else {
				filecopy(fp, stdout);
				fclose(fp);
			}
	if (ferror(stderr)){
		fprintf(stderr, "%s err in stdout\n", prog);
		exit(2);
	}
	exit(0);	
}

void filecopy(FILE *ifp, FILE *ofp)
{
	int c;
	while ((c = getc(ifp)) != EOF)
		putc(c, ofp);
}

void minprintf(char *fmt, ...)
{
	va_list ap; // указатель на очередной безымянный аргумент
	char *p, *sval;
	int ival;
	double dval;
	char cval;
	
	va_start(ap, fmt); //устанавливает ap на первый безымянный аргумент
	for (p = fmt; *p; p++){
		if (*p != '%'){
			putchar(*p);
			continue;
		}
		switch (*++p){
		case 'c':
			cval = va_arg(ap, char);
			printf("%c", cval);
			break;
		case 'd':
			ival = va_arg(ap, int);
			printf("%d", ival);
			break;
		case 'f':
			dval = va_arg(ap, double);
			printf("%f", dval);
			break;
		case 's':
			for (sval = va_arg(ap, char *); *sval; sval++)
				putchar(*sval);
			break;
		defult:
			putchar(*p);
			break;
		}
	}
	va_end(ap); //очистка когда все сделано

}
