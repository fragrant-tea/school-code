#include <stdio.h>
#include <math.h>

void part_01(void)
{
	printf("Part 1. Input and output and simple examples. \n\n");

	printf("1.2. exponent(1): %.1f.\n", exp(1.0));

	int a1 = 5;
	//scanf("%d", &a1);
	printf("\n1.4. %d is integer.\n", a1);

	int b1 = 7, c1 = 15, c2 = 100;
	printf("\n1.6. chisla: %d  %d  %d.\n", b1, c1, c2);

	b1 = 6, c1 = 4, a1 = 6;
	int b2 = 7;
	printf("\n1.8. chisla: %d %d %d %d.\n", b1, c1, a1, b2);

	a1 = 5;
	int a2 = 10;
	printf("\n1.12a. chisla:\t%d %d\n\ta\t7cm.\n", a1, a2);

	a1 = 10;
	a2 = 149;
	printf("\n1.12b. chisla:\t100 %d\n\t\t1949 %d.\n", a1, a2);

	a1 = 7; a2 = 34;
	printf("\n1.12v. chisla:\t%d 25\n\t\t%d %d.\n", a1, a1, a2);

	double x1, x2, x3, x4, y, y1, y2;
	x1 = 4.6;
	y = 2.0 * x1;
	printf("\n1.14a. chisla 2 * x = 2.0 * %.2f = %.2f.\n", x1, y);

	x1 = 4.0; x2 = 5.0;
	y = sin(x1) * cos(x2) + cos(x1) * sin(x2);
	printf("\n1.14i. SIN(%.2f) * COS(%.2f) + COS(%.2f) * SIN(%.2f) = %.2f.\n",
		x1, x2, x1, x2, y);

	x1 = 2.0; x2 = 4.0;
	y = sqrt(sqrt(y) + x1) * (-5.0);
	printf("\n1.14m. -5.0 * SQRT(SQRT(%.2f) + (%.2f)) = %.2f.\n", x2, x1, y);

	x1 = 6.0; x2 = 5.0;
	y = 3.0 * sin(2.0 * x1) * cos(3.0 * x2);
	printf("\n1.14l. 3.0 * SIN(2.0 * %.2f) * COS(3.0 * %.2f) = %.2f.\n", x1, x2, y);

	x1 = 2.0; x2 = 4.0;
	y = (x1 + x2) / 2.0;
	printf("\n1.15g. (%.2f + %.2f) / 2.0 = %.2f.\n", x2, x1, y);

	x1 = 2.0; x2 = 3.0;
	y1 = pow(x1, x2);
	y = pow(2.0, y1);
	y = pow(2.0, pow(x1, x2));
	printf("\n1.15k. POW(2.0, POW(%.2f, %.2f) = %.2f", x1, x2, y);

	x1 = 20.0; x2 = 2.0; x3 = 4.0;
	y = (x1 / x2) * x3;
	printf("1.15v. (%.2f / %.2f) * %.2f = %.2f\n", x1, x2, x3, y);

	x1 = 3.0; x2 = 4.0;
	y = 5.45 * (x1 + 2 * x2) / (2 - x1);
	printf("\n1.15d. 5.45 * (%.2f + 2 * %.2f) / (2 - %.2f) = %.2f", x1, x2, x1, y);

	x1 = 10.0; x2 = 2.0; x3 = 4.0;
	y = x1 / x2 * x3;
	printf("1.15b. %.2f / %.2f * %.2f = %.2f\n", x1, x2, x3, y);

	x1 = 16.0; x2 = 2.0; x3 = 3.0;
	y = x1 / x2 / x3;
	printf("\n1.16a. %.2f / %.2f / %.2f = %.2f\n", x1, x2, x3, y);

	x1 = 15.0; x2 = 6.0; x3 = 11.0;
	y = x1 + x2 / x2 + x1;
	printf("1.16j. %.2f + %.2f / %.2f + %.2f = %.2f", x1, x2, x2, x1, y);

	x4 = 20.0; x1 = 6.0; x2 = 7.0; x3 = 3.0;
	y = 4 * x4 * sin(x1 / 2.0) * sin(x2 / 2.0) * sin(x3 / 2.0);
	printf("\n1.16l. 4 * %.2f * SIN(%.2f / 2) * SIN(%.2f / 2) * SIN(%.2f / 2) = %.2f", x4, x1, x2, x3, y);

	x1 = 2.0; x2 = 3.0;
	y = sqrt(x1 * x1 + x2 * x2);
	printf("\n1.17a. SQRT(%.2f + %.2f) = %.2f.\n", x1 * x1, x2 * x2, y);

	x1 = 1.0; x2 = 3.0; x3 = 2.0;
	y = x1 * x2 + x1 * x3 + x2 * x3;
	printf("\n1.17b. %.2f * %.2f + %.2f * %.2f + %.2f * %.2f = %.2f.\n", x1, x2, x1, x3, x2, x3, y);

	x1 = 3.14; x2 = 4.0; x3 = 2.0;
	y = x1 * x2 * x3;
	printf("\n1.17j. %.2f * %.2f * %.2f = %.2f.\n ", x1, x2, x3, y);

	x1 = 10.0;
	y = (sqrt(x1 + 1.0) + sqrt(x1 - 1.0)) / (2.0 * sqrt(x1));
	printf("\n1.17r. (SQRT(%.1f + 1.0) + SQRT(%.1f - 1.0)) / (2.0 * SQRT(%.1f)) = %.1f.\n", x1, x1, x1, y);

	x1 = -6.0;
	y1 = fabs(x1);
	y = fabs(1.0 - y1);
	printf("\n1.17t. ABS(1.0 - ABS(%.2f)) = %.2f.\n", x1, y);

	int s = 5;
	printf("\n1.18a. s = %d.\n", s);
	s = 57;
	printf("s = %d.\n", s);

	int k = 10;
	printf("\n1.19a. x = %d\n", k);
	k = -10;
	printf("x = %d.\n", k);

	x1 = 5.8;
	printf("\n1.21a. a = %.2f\n", x1);
	x2 = -7.9;
	printf("b = %.2f\n", x2);
	x2 = x1;
	printf("b = %.2f\n", x2);
	x1 = x2;
	printf("a = %.2f\n", x1);

	x1 = 10.0;
	y = 7.0 * x1 * x1 - 3.0 * x1 + 6.0;
	printf("\n1.22a. 7.0 * %.2f * %.2f - 3.0 * %.2f + 6.0 = %.2f.\n", x1, x1, x1, y);

	x1 = 15;
	y = (x1 * x1 + 10.0) / sqrt(x1 * x1 + 1.0);
	printf("\n1.23. (%.2f * %.2f + 10) / SQRT(%.2f * %.2f + 1) = %.2f.\n", x1, x1, x1, x1, y);

	x1 = 5.0;
	y = sqrt((2.0 * x1) + sin(fabs(3.0 * x1)) / 3.56);
	printf("\n1.24a.SQRT((2.0 * %.2f) + SIN(FABS(3.0 * %.2f)) / 3.56) = %.2f.\n", x1, x1, y);

	x1 = 6.0;
	y = sin(3.2 + sqrt(1 + x1) / fabs(5 * x1));
	printf("\n1.24b. SIN(3.2 + SQRT(1 + %.2f) / FABS(5 * %.2f)) = %.2f.\n", x1, x1, y);

	x1 = 5.0;
	y = x1 + x1 + x1 + x1;
	printf("\n1.25. Perimetr kvadrata = %.2f + %.2f + %.2f + %.2f = %.2f.\n", x1, x1, x1, x1, y);

	x1 = 7.0;
	y = x1 * 2.0;
	printf("\n1.26. Diametr kruga = %.2f * 2.0 = %.2f.\n", x1, y);

	x1 = 6350.0; x2 = 10.0;
	y = sqrt(x2 * (x2 + 2.0 * x1));
	printf("\n1.27. Do gorisonta s vysoty = SQRT(%.2f * (%.2f + 2.0 * %.2f)) = %.2f.\n", x2, x2, x1, y);

	x1 = 5.0;
	y = x1 * x1 * x1;
	printf("\n1.28. V kuba = %.2f * %.2f * %.2f = %.2f", x1, x1, x1, y);
	y = x1 * x1;
	printf("\n.S boka = %.2f * %.2f = %.2f", x1, x1, y);

	x1 = 2.0; x2 = 3.14;
	y = 2.0 * x2 * x1;
	printf("\n1.29. dlina kruga = 2.0 * %.2f * %.2f = %.2f", x2, x1, y);
	y = x2 * x1 * x1;
	printf("\n. S kruga = %.2f * %.2f * %.2f = %.2f", x2, x1, x1, y);

	x1 = 9.0; x2 = 5.0;
	y = x1 * x1 * x1 - 2.5 * x1 * x2 + 1.78 * x1 * x1 - 2.5 * x2 + 1.0;
	printf("\n1.30a. %.2f * %.2f * %.2f - 2.5 * %.2f * %.2f + 1.78 * %.2f * %.2f - 2.5 * %.2f + 1.0 = %.2f.\n",
		x1, x1, x1, x1, x2, x1, x1, x2, y);

	x1 = 6.0; x2 = 3.0;
	y = 3.56 * x1 + x2 * x2 * x2 - 5.8 * x2 * x2 + 3.8 * x1 - 1.5;
	printf("\n1.30b. 3.56 * %.2f + %.2f * %.2f * %.2f - 5.8 * %.2f * %.2f + 3.8 * %.2f - 1.5 = %.2f.\n",
		x1, x2, x2, x2, x2, x2, x1, y);

	b1 = 10;  c1 = 20;
	y = (b1 + c1) / 2;
	printf("\n1.31a. (%d) + %d) / 2 = %.2f.\n", b1, c1, y);

	b1 = 20; c1 = 18;
	y = sqrt(b1 * c1);
	printf("\n1.31b. SQRT(%d * %d) = %.2f.\n", b1, c1, y);

	x1 = 6.0; x2 = 7.0;
	y = x1 / x2;
	printf("\n1.32. P/Vm = %.2f / %.2f = %.2f.\n", x1, x2, y);

	x1 = 1200.0; x2 = 4000.0;
	y = x1 / x2;
	printf("\n1.33.  Plotnost naselenie grajdan = %.2f / %.2f km = %.2f", x1, x2, y);

	x1 = 3.0; x2 = 3.0; x3 = -9.0;
	y = x1 * x2 + x3;
	printf("\n1.34. Linear = %.2f * %.2f + %.2f = %.2f", x1, x2, x3, y);

	x1 = 4.0; x2 = 3.0;
	y = sqrt(x1 * x1 + x2 * x2);
	printf("\n1.35. Pifagor = SQRT(%.2f * %.2f + %.2f * %.2f) = %.2f", x1, x1, x2, x2, y);

	x1 = 7.0; x2 = 4.0; x3 = 3.14;
	y = x1 * x1 * x3 - x2 * x2 * x3;
	printf("\n1.36. Kolco %.2f * %.2f * %.2f - %.2f * %.2f * %.2f = %.2f", x1, x1, x3, x2, x2, x3, y);

	x1 = 4.0; x2 = 3.0;
	x3 = sqrt(x1 * x1 + x2 * x2);
	printf("\n1.37. SQRT(%.2f * %.2f + %.2f * %.2f) = %.2f", x1, x1, x2, x2, y);
	y = x1 + x2 + x3;
	printf("\n.Perimetr treugolnika %.2f + %.2f + %.2f = %.2f", x1, x2, x3, y);

	x1 = 5.0; x2 = 6.0; x3 = 7.0;
	y = ((x1 + x2) / 2.0) * x3;
	printf("\n1.38. Trapezi Perimetr (%.2f + %.2f) / 2.0 * %.2f = %.2f.\n", x1, x2, x3, y);

	x1 = 4.0; x2 = 5.0; x3 = 6.0;
	y = sqrt(fabs(x1 * x1 * x1 - 3.0 * 3.0 * 3.0 / x2 * x2 * x2) + x3);
	printf("\n1.41. SQRT(FABS(%.2f * %.2f * %.2f - 3.0 * 3.0 * 3.0 / %.2f * %.2f * %.2f) + %.2f) = %.2f",
		x1, x1, x1, x2, x2, x2, x3, y);
	x1 = exp(1.0); x2 = 7.0;
	y = sin(x1) + cos(x2) * cos(x2);
	printf("\n. SIN(%.2f) + COS(%.2f) ^ 2.0 = %.2f", x1, x2, y);
	x1 = 4.5; x2 = 5.6; x3 = 8.9;
	y = 33.0 * x1 / (exp(1.0) * x2 - 3.0);
	printf("\n. 33.0 * %.2f / (%.2f * %.2f - 3.0) = %.2f", x1, exp(1.0), x2, y);

	x1 = 5.0; x2 = 3.0;
	y = 2.0 * x1 + 2.0 * x2;
	printf("\n1.44. Perimetr = 2.0 * %.2f + 2.0 * %.2f = %.2f", x1, x2, y);
	y = sqrt(x1 * x1 + x2 * x2);
	printf("\n. Diagonal = SQRT(%.2f * %.2f + %.2f * %.2f) = %.2f", x1, x1, x2, x2, y);

	x1 = 25.0; x2 = 5.0;
	y = x1 + x2;
	printf("\n1.45. %.2f + %.2f = %.2f", x1, x2, y);
	y = x1 - x2;
	printf("\n. %.2f - %.2f = %.2f", x1, x2, y);
	y = x1 * x2;
	printf("\n. %.2f * %.2f = %.2f", x1, x2, y);
	y = x1 / x2;
	printf("\n.  %.2f / %.2f = %.2f", x1, x2, y);

	x1 = 15.0; x2 = 20.0; x3 = 4.0;
	y = x1 * x2 * x3;
	printf("\n1.46. V Paralelepipeda = %.2f * %.2f * %.2f = %.2f", x1, x2, x3, y);
	y = 2.0 * (x1 + x2) * x3;
	printf("\n. S Powerhnosti = 2.0 * (%.2f + %.2f) * %.2f = %.2f", x1, x2, x3, y);

	x1 = 3.0; x2 = 4.0; x3 = 5.0; x4 = 6.0;
	y = sqrt(x2 * x2 - x1 * x1) + sqrt(x4 * x4 - x3 * x3);
	printf("\n1.47. dist Tochiki = SQRT(%.2f * %.2f - %.2f * %.2f) + SQRT(%.2f * %.2f - %.2f * %.2f) = %.2f.\n",
		x2, x2, x1, x1, x4, x4, x3, x3, y);

	x1 = 5.0; x2 = 6.0; x3 = 8.0;
	y = x1 + x2 + 2.0 * sqrt(x3 * x3 + (x1 * x1 - x2 * x2) / 4.0);
	printf("\n1.48. Perimetr Trapizoid = %.2f + %.2f + 2.0 * SQRT(%.2f * %.2f + (%.2f * %.2f - %.2f * %.2f) / 4.0 = %.2f",
		x1, x2, x3, x3, x1, x1, x2, x2, y);

	x1 = 4.0; x2 = 6.0; x3 = 7.0; x4 = 8.0;
	double x5 = 7.5, x6 = 7.6; // Pari koordinat 3 tochek.
	printf("\n1.50. Koordinaty Treugolnika: (%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f).\n",
		x1, x2, x3, x4, x5, x6);
	y1 = sqrt((x3 - x1) * (x3 - x1) + (x4 - x2) * (x4 - x2));
	y2 = sqrt((x5 - x3) * (x5 - x3) + (x6 - x4) * (x6 - x4));
	double y3 = sqrt((x5 - x1) * (x5 - x1) + (x6 - x2) * (x6 - x2));
	printf("\n. Dliny Storon: %.2f, %.2f, %.2f.\n", y1, y2, y3);
	y = (y1 + y2 + y3) / 2.0;
	printf("\n.Poluperimetr = %.2f, Perimetr = %.2f.\n", y, y * 2.0);
	double y4 = sqrt(y * (y - y1) * (y - y2) * (y - y3));
	printf("\n. S Treug = SQRT(%.2f * (%.2f - %.2f) * (%.2f - %.2f) * (%.2f - %.2f)) = %.2f"
		, y, y, y1, y, y2, y, y3, y4);

	x1 = 134.0; x2 = 67.0; x3 = 78.90;
	y = x1 + x1 + x1 + x2 / 2.0 + x3 * 3.5;
	printf("\n1.52.Stoimost = %.2f + %.2f + %.2f + %.2f / 2.0 + %.2f * 3.5 = %.2f", x1, x1, x1, x2, x3, y);

	x1 = 200.0; x2 = 180.0; x3 = 1000.0;
	y = x3 / (x1 + x2);
	printf("\n1.55. Cars = %.2f km / (%.2f + %.2f) = %.2f chasa", x3, x1, x2, y);

	double cels, fahr, kelv;
	printf("\n1.57 - 1.58. Teblica Temperatur");
	printf("\nCelsius:\tFahr:\tKelvin:\n");
	cels = 56.6; fahr = 9.0 / 5.0 * cels + 32.0; kelv = cels + 273.15;
	printf("%6.2f\t\t%.2f\t%.2f\n", cels, fahr, kelv);
	cels = 78.6; fahr = 9.0 / 5.0 * cels + 32.0; kelv = cels + 273.15;
	printf("%6.2f\t\t%.2f\t%.2f\n", cels, fahr, kelv);
	cels = -72.5; fahr = 9.0 / 5.0 * cels + 32.0; kelv = cels + 273.15;
	printf("%6.2f\t\t%.2f\t%.2f\n", cels, fahr, kelv);

	fahr = 451;
	cels = (fahr - 32.0) * 5.0 / 9.0;
	printf("\n1.58. %.2f fahr = %.2f celsius", fahr, cels);

	k = -8; s = 5;
	printf("\n.1.59.  k = %d, s = %d\n", k, s);
	int t = k;
	k = s;
	s = t;
	printf("k = %d, s = %d\n", k, s);
	k = k - s;
	s = s + k;
	k = s - k;
	printf("k = %d, s = %d\n", k, s);

	int a = 1;
	int b = 2;
	int c = 3;
	b = c;
	printf("\n1.60. b = %d\n", b);
	a = b;
	printf("a = %d\n", b);
	c = a;
	printf("c = %d\n", c);

	a = 2; b = 4; c = 8;
	printf("\n1.60b. a = %d, b = %d, c = %d.\n", a, b, c);
	b = a;
	c = b;
	a = c;
	printf("\t a = %d, b = %d, c = %d.\n", a, b, c);

	x1 = 4.0;
	y1 = x1 * x1;
	y = y1 * y1;
	printf("\n1.61a. %.2f ^ 4.0 = %.2f", x1, y);

	x1 = 2.0;
	y = x1 * x1;
	y2 = x1 * x1;
	x1 = x1 * y2;
	printf("\n1.61b. %.2f ^ 6.0 = %.2f", x1, y2);

	x1 = 2.0;
	y1 = x1 * x1;
	y = x1 * y1;
	y2 = y * y;
	y3 = y2 * y2;
	x2 = y * y3;
	printf("\n.1.61z. %.2f ^ 15.0 = %.2f", x1, x2);

	x1 = 2.0;
	y = x1 * x1;
	y2 = x1 * x1;
	x1 = y2 * x1;
	printf("\n1.61g. %.2f ^ 8.0 = %.2f", x1, y2);

	x1 = 2.0;
	y = x1 * x1;
	y2 = x1 * y;
	y3 = y2 * y;
	printf("\n1.62g. %.2f ^ 5.0 = %.2f", x1, y3);
	y1 = y3 * y3;
	x2 = y1 * y3;// a ^ 15
	x3 = x2 * y2 * x1;
	printf("\n1.61g. %.2f ^ 19.0 = %.2f", x1, x3);
}
