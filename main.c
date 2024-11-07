#include <stdio.h>
#include <math.h>


void theory_02(void);
void theory_03(void);
void theory_04(void);
void theory_05(void);
void theory_06(void);
void theory_07(void);


void part_01(void);
void part_02(void);
void part_03(void);
void part_04(void);	
void part_05(void);

// Условный оператор.

double line_size(double x1, double y1, double x2, double y2)
{	// Функция вычисления длинны отрезка по Пифагору.
	if (x1 == NAN || y1 == NAN || x2 == NAN || y2 == NAN) {
		printf("Some points incorrect, return NAN.\n");
		return NAN;
	}
	return sqrt(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0));
}

int reverse(int value)
{	// Вычисления и возврат числа обратного к аргументу.
	const int base = 10;
	int result = 0, order = 1, val = value;
	while (val > 0) {
		val /= base;
		order *= base;
	}
	while (value > 0) {
		order /= base;
		result += (value % base) * order;
		value /= base;
	} 
	return result;
}

int main(void)
{
	//theory_07();
	part_05();
	//college(); 
	return;
	//heory_07();
	

	// найти длинну отрезка заданного координатами точек, через функцию
	double x1 = 2.5, y1 = 3.7, x2 = 6.4, y2 = 2.2, length = 0.0;
	length = line_size(x1, y1, x2, y2);
	printf("\n Points coordinates (%.2f, %.2f) and (%.2f, %.2f). "
		"Length of line is %.2f.\n", x1, y1, x2, y2, length);

	// Вывод чисел в порядке, обратным к вводу.
	printf("\n Enter integers separated by space or tab, any char for exit: ");
	 int right = 50, field = 5, value;
   for (int i = 0, j; scanf("%d", &value) != 0 && i < right / field; ++i) {
		printf("\rIntegers in reverse: ");
		for (j = 0; j < right - i * field; ++j)
			printf(" ");
		printf("%5d", value);
	}
	

	// Нахождение перевернутого заданного целого числа через функцию.
    value = 12345;
	printf("\n Enter value for reverse: ");
	int r = scanf("%d", &value); 
	printf("Reverse of value %d is %d.\n", value, reverse(value));
	

	// Исполнитель калькулькулятор с двумя командами и количеством программ.
	int limit = 14, programs = 0, is_all = 0;
	value = 4; field = 8;
	const int bits_max = 10;
 #define TEXT_MAX 0x100
	char text[TEXT_MAX];
	printf("\nCalculator '0' - increase '+1', '1' - multiply 'x2', start %d and limit %d.\n",
		value, limit);
	printf("All programs and result of combiations:\n");
	for (int prog_len = 1, prog = 0; prog_len <= bits_max; ++prog_len) {
		for (int i = 0, prog_val = 0, offs; i < 0x0001 << prog_len; ++i, prog ++) {
			prog_val = value;
			for (int j = 0; j < prog_len; ++j) {
				offs = j * field;
				switch((prog >> j) & 0x01){
				case 0:
					sprintf_s(&text[offs], TEXT_MAX - offs, "%03d(+1) ", prog_val);
					prog_val++;
					break;
				case 1:
					sprintf_s(&text[offs], TEXT_MAX - offs, "%03d(*2) ", prog_val);
					prog_val *= 2;
					break;
				default:
					printf("Erorr in command.\n");
				}
			}
			offs = prog_len * field;
			sprintf_s(&text[offs], TEXT_MAX - offs, "= %d", prog_val);
			if (prog_val == limit) {
				printf("%s, yes, program is equal to limit %d.\n", text, limit);
				programs++;
			}
			else
				if (is_all == 1)
				printf("%s, no, program is not equal to limit %d.\n", text, limit);
		}
	} 
	printf("Total programs equal to %d is %d.\n", limit, programs);

	





	
	
	
}

	

