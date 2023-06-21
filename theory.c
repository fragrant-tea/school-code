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

void  theory_05_add(short int h, unsigned char c)
{	// дополнительная функция для отслеживания преобразования параметров.
	printf("Short integer size %u bytes, value %hd.\n", sizeof(h), h);
	printf("Unsigned char size %u bytes, value '%c' or %hhu.\n\n", sizeof(c), c, c);
}

void theory_05(void)
{
	printf("Theory part 5. Operators, Expressions and Statements.\n\n");
    int a, b, c, d;
	a = 3;
	d = 0;
	printf("Using while with single line operator: ");
	while (a-- > 0)
		printf("%d ", a);
	printf("\n\n Using while with block of operators: \n");
	a = 1; b = 2; c = 4;
	while (c > 0) {
		printf("%d :\t %d + %d = %d\n", c, a, b, a + b);
		a--;
		b++;
		c--;
	}
#define ADDER 5
	const int r = 2 + ADDER;
	printf("\n#define ADDER %d and constant result is %d.\n", ADDER, r);

	c = a;
	printf("\nAssign operator '=', a = % d, b = % d, c = %d.\n", a, b, c);
	a = 15;		// lvalue, левосторонние значение А, rvalue, правостороннее значение.
	//15 = a;
	const int e = 7;		// e - правосторонний объект, так как не может быть модифицированным.
	//e++;
	a = b = c = d;
	printf("\nAssign using many =: a = %d, b = %d, c = %d, d = %d.\n", a, b, c, d);
	printf("\nArithmetic operators with integers:\n");
	a = 5; b = 3;
	c = a + b + 3 + 77;
	printf("a + b + 3 + 77 = %d + %d + 3 + 77 = %d.\n", a, b, c);
	c = a - b - 77;
	printf("a - b - 77 = %d - %d - 77 = %d.\n", a, b, c);
	c = a * b * 89;
	printf("a * b * 89 = %d * %d * 89 = %d.\n", a, b, c);
	c = a / b;
	printf("a / b = %d / %d = %d.\n", a, b, c);
	c = (-a);
	printf("Unary operator minus, a = %d, c = %d.\n", a, c);

	printf("\nBits:\tM = 2 ^ N:\n");
	a = 1; b = 2;
	while (a <= 10) {
		printf("%d\t%d\n", a, b);
		b = b * 2;
		a = a + 1;
	}
	double f = 2.5, g = 0.5, h;
	h = f / g;
	printf("\nDivide floating point %.2f / %.2f = %.2f.\n", f, g, h);
	h = f / (double)a;
	printf("Divide floating point %.2f and integer %d = %.2f.\n", f, a, h);
	

	a = 3; b = 5; c = -7;
	d = -a * 3 + b * 2 * (3 + (c + 1));
	printf("\nOperators priority: -%d * 3 + %d * 2 * (3 + (%d + 1)) = %d.\n", a, b, c, d);


	size_t max = UINT_MAX;
	printf("\nSizeof of maximum size_t type is %u.\n", max);
	printf("Sizeof size_t with this compiler is %u bytes.\n", sizeof max);
	printf("Sizeof unsigned integer, using compiler is %u bytes.\n", sizeof(unsigned int));

	printf("\nOperator modulus '%%'.\n");
	const int sec_per_min = 60;
	a = 75;
	b = a / sec_per_min;
	c = a % sec_per_min;
	printf("Seconds %d is %d minutes and modulus %d seconds.\n", a, b, c);
	printf("Negative modulus: %d mod %d = %d.\n", -7, -3, -7 % -3);

	a = 0;
	printf("\nIncrement and decrement using prefix and postfix variants a = %d.\n", a);
	c = a; b = ++a;
	printf("Prefix increment before a = %d, b = %d, after a = %d.\n", c, b, a);
	c = a; b = a++;
	printf("Postfix increment before a = %d, b = %d, after a = %d.\n", c, b, a);
	c = a; b = --a;
	printf("Prefix decrement before a = %d, b = %d, after a = %d.\n", c, b, a);
	c = a; b = a--;
	printf("Postfix decrement before a = %d, b = %d, after a = %d.\n", c, b, a);
	a = +5; b = -5;
	printf("\nOperators while and increment, decrement, a = %d, b = %d.\n", a, b);
	printf("a:\tb:\t--a * 2:\tb++ * 3:\n");
	while (a != b) {
		//printf("%d\t%d\t%d\t\t%d\n", a, b, --a * 2, b++ * 3); последовательность вычислений негарантированна
		printf("%d\t%d", a, b);
		printf("\t%d\t\t%d\n", --a * 2, b++ * 3);
	}

	printf("\nPriority operators:\n");
	a = 7; b = -6;
	printf("Expression: --a + b++ * 5 = --%d + %d++ * 5 = ", a, b);
	c = --a + b++ * 5;
	printf("%d + %d * 5 = %d.\n", a, b - 1, c);
	a = 0; b = 0;
	printf("b = a++ + a++ = %d++ + %d++ = ", a, a);
	b = a++ + a++;
	printf("%d, a = %d.\n", b, a);
	;	//пустой оператор.
	5;	//тоже оператор.
	a = 5;	// после ; - точка следования, без ветвлений.
	b = a + 2;	// побочный эфект - присвоение переменной, прямой -  вычисление выражения.
	while (b < a)
		printf("full operators, this line never run.\n");
	printf("\nType conversion:\n");
	short int i = 0x7FFF;
	unsigned char j = 0xFF;
	printf("short int + unsigned char = %hd + %hhu = integer %d, short %hd.\n",
		i, j, i + j, (short int)(i + j));
		//j = i + 1; преобразование "int" в "unsigned char", возможна потеря данных
	j = (unsigned char)(i + 1);
	printf("short int + 1, %d + 1 = integer %d(%d), short int %hd, unsigned char %hhu.\n",
		i, i + 1, SHRT_MAX,(short int)(i + 1), j);
	j = (unsigned char)((short int)a + (unsigned char)b);
	printf("unsigned char  after: %hhu.\n", j);
	
	printf("\nCalling function, parameters, conversion:\n");
	theory_05_add(USHRT_MAX, 'A');		// приведение вниз первого и нормальный второй аргумент.
	theory_05_add('B', UCHAR_MAX + 'C');	// приведение вверх первого и вниз второго.
	theory_05_add(SHRT_MAX, 'C');		//нормальный вызов без приведений.
}






