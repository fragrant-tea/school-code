#include <stdio.h>
#include <limits.h>
#include <float.h>

#define STRING_MAX 0x100 

void theory_2(void)
{
	printf("\n. theory, part 2.\n");
	printf(" int = %d, hex = %#x, oct = %#o.\n", 15, 15, 15);

	short int n1;
	long int a3;
	unsigned long long int a4;
	printf("\n. sizeof short int = %d bytes.\n", sizeof(n1));
	printf("\n. sizeof long int = %d bytes.\n", sizeof(a3));
	printf("\sizeof unsigned long long int = %d bytes.\n", sizeof(a4));
	printf("\n. long long constant %lld.\n", 5LLU);

}
void theory_3(void)
{
	printf("\n. theory_3, part 3, data types.\n");
	char c1 = 'a';
	short int s1 = 0b01000111;
	printf("\n. char '%c', singned short int %d.\n", c1, s1);
	float f1 = 5.5;
	double d1 = 0.047;
	printf("\n. number 1: %10.10f %3.5g %1.2E.\n", f1, d1, d1);
	int a = 6;
	const int h = 8;
	a++;
	//h++; EROR

	long double c = 6.8;

	printf("\n. tablica tipov danyh v C.\n");
	printf("tipe:\t\t\trazmer:\tbis:\tmin:\t\t\tmax:\n");


	printf("Char\t\t\t%u\t%u\t%d\t\t\t%d.\n", sizeof(char), sizeof(char) * CHAR_BIT, CHAR_MIN, CHAR_MAX);
	printf("Short\t\t\t%u\t%u\t%d\t\t\t%d.\n", sizeof(short), sizeof(short) * CHAR_BIT, SHRT_MIN, SHRT_MAX);
	printf("int\t\t\t%u\t%u\t%d\t\t%d.\n", sizeof(int), sizeof(int) * CHAR_BIT, INT_MIN, INT_MAX);
	printf("long long\t\t%u\t%u\t%lld\t%lld.\n", sizeof(long long), sizeof(long long) * CHAR_BIT, LLONG_MIN, LLONG_MAX);
	printf("unsigned long long\t%u\t%u\t%d\t\t\t%llu.\n", sizeof(long long), sizeof(long long) * CHAR_BIT, 0, ULLONG_MAX);
	printf("float\t\t\t%u\t%u\t%.2e\t\t\t%.2e.\n", sizeof(float), sizeof(float) * CHAR_BIT, FLT_MIN, FLT_MAX);
	printf("long double\t\t\t%u\t%u\t%.2e\t\t\t%.2e.\n", sizeof(c), sizeof(c) * CHAR_BIT, LDBL_MIN, LDBL_MAX);
	printf("\n. char c = '%c', int = %d, short s = '%c', hex = %#x.\n", c1, c1, s1, s1);

}





void theory_4(void)
{
	printf("Part 4, Strings and formatted input and output.\n");
	// использование имён для констант,  для улучшения читабельности и потдержки.
	char string[STRING_MAX] = "8-Bit Tea Party!!";
	int r = 5 * 1024;
	const int kilobyte = 1024;
	r = 5 * kilobyte;
	printf("Razmer stroki '%s' = %u.\n", string, sizeof(string));
	// представление строки в памяти или в андресном пространстве.
	printf("address:\tcode:\tchar:.\n");
	for (int i = 0; string[i] != '\0'; ++i)
		printf("%u:\t%d:\t'%c'\n", (unsigned int)(&string[i]), string[i], string[i]);
	// отличие константы литералла от константной строки.
	char c = 'a';
	const char s[] = "a";
	printf("sizeof char '%c' = %u, string'%s' = %u.\n", c, sizeof(c), s, sizeof(s));
	// константы и вывод.
	const int bits = CHAR_BIT;
	printf("bits v odnom simvole %d.\n", bits);
	printf("signed integer: %d, hex: %#x, double: %.2f, expanent: %.2e.\n", -5, 12, 3.5, 0.059);
	// использование модификаторов вывода.
	unsigned short int sh = 50000;
	unsigned char  b = 100, d = 255;
	b = b + d;
	printf(" signed: %+d, field: %-5d, tochnost: %.3g, short: %hu, byte: %hhd, ulong: %llu.\n"
		, 7, 66, 7.7, sh, b, ULLONG_MAX);
	//  автоматическое или не очень преобразование float v double
	float f1 = 6.123456789;
	printf("float %.10g and double %.10g.\n", f1, (double)f1);
	//  вывод строк и их форматирование.
	printf("string dlinee polya: '%3s'.\n", string);
	printf("pole dlinee stroki: '%25s'.\n", string);
	printf("stroka po pravomu krayu: '%25.5s'.\n", string);
	printf("stroka po levomu krayu: '%-25.5s'.\n", string);
	// нам нужен буфер тестированние ввода.
	printf("vvedite intenger, float, char and string: ");
	//r = scanf("%hu,%f %c %s", &sh, &f1, &c, &string);
	printf("scanf r = %d: int %d, float %.2f, char '%c' and string '%s'.\n", r, sh, f1, c, string);

	r = 16 % 10;
	printf("r = %d", r);


}

void theory_05(void)
{
	printf("Theory part 5. Operators, Expressions and Statements.\n\n");


}





