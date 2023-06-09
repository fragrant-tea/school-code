#include <stdio.h>
#include <math.h>


void part_02(void)
{

	printf("Part2.Celochislenay arifmetika.\n\n");
	int a, b, c, e, f, k;

	f = 124;
	int f5 = 100;
	int y7;
	y7 = f / f5;
	printf("\n2.2. Kilograms  %d / %d In Center = %d\n", f, f5, y7);

	const int sec_per_min = 60, min_per_hour = 60;
	int s1 = 3675;
	int m1 = s1 / sec_per_min % min_per_hour;
	int h1 = s1 / (sec_per_min * min_per_hour);
	int y9 = s1 % sec_per_min;
	printf("\n2.6a. Chasow proshlo: %d / 60 = %d", s1, h1);
	printf("\nb. minut proshlo: %d / 60 = %d", s1, m1);
	printf("\nv. sekund proshlo: (%d mod %d) = %d\n", s1, sec_per_min, y9);

	const int days_per_week = 7, months_per_year = 12;
	int n = 6, d = 7;
	k = ((n - 1) + (d - 1)) % days_per_week + 1;
	printf("\n.2.8: den v godu %d[1..365], perviy den %d[1..7], Den Nedeli %d.\n", n, d, k);

	n = 3; int x = 4;
	k = (n % months_per_year) + 1;
	printf("\n2.9. mesyac from 1990(%d % %d) + 1 = %d.\n", n, months_per_year, k);

	const int base = 10;

	a = 675;
	b = a % base;
	printf("\n2.12. Edinic: %d % 10 = %d.\n", a, b);
	c = a / base % base;
	printf("desytkow: %d / 10 % 10 = %d.\n", a, c);
	d = a / base * base;
	printf("soten: %d / 100 = %d.\n", a, d);

	int y;
	printf("\n2.13. y:");
	printf("%d\n", y % 10 * 100 + (y % 100) / 10 * 10 + y / 100);

	a = 123;
	b = a / base + (a % base) * base * base;
	printf("\n2.14. a = %d, perestanovka = %d.\n", a, b);

	int abc = 456;
	a = abc / base * base;
	b = (abc / base) % base;
	c = abc % base;
	int bac = b * base * base + a * base + c;
	printf("\n2.16. abc = %d, perestanovka 1 - 2 = %d.\n", abc, bac);

	abc = 123;
	printf("\n2.18. Number = %d, vse perestonovki: ", abc);
	a = abc / (base * base);	// sotni
	b = (abc / base) % base; //desytki
	c = abc % base; // edinicy
	d = b * base * base + a * base + c;// bac 
	printf("BAC = %d ", d);
	d = c * base * base + b * base + a;
	printf("CBA = %d ", d);
	d = a * base * base + c * base + b;
	printf("ACB = %d ", d);
	d = b * base * base + c * base + a;
	printf("BCA = %d ", d);
	d = c * base * base + a * base + b;
	printf("CAB = %d.\n", d);

	a = 10;
	c = a % base;
	printf("\n2.21. Edinic v chisle = %d mod %d = %d.\n", a, base, c);
	b = a / base;
	printf("Desytkov = %d / base = %d.\n", a, b);

	a = 237;
	k = a / 100;
	printf("\n2.24 %d / 100 = %d.\n", a, k);
	int k1 = a % 100;
	printf("%d mod 100 = %d.\n", a, k1);
	int k2 = k1 * 10 + k;
	printf("%d * 10 + %d = %d.\n", k1, k, k2);

	a = 123;
	k = ((a % 10) * 100 + (a / 10));
	printf("\n2.27. (%d mod 10) * 100 + (%d / 10) = %d.\n", a, a, k);

	a = 456;
	k = a % 10;
	printf("\n2.30.Obmen cifr 2 or 3: %d % 10 = %d.\n", a, k);
	k1 = (a / 10) % 10;
	printf("(%d / 10) % 10  = %d.\n", a, k1);
	k2 = a / 100;
	printf("%d / 100 = %d.\n", a, k2);
	int k3 = 100 * k2 + 10 * k + k1;
	printf("100 * %d + 10 * %d + %d = %d.\n", k2, k, k1, k3);

	n = 654;
	k = n / 100;
	printf("\n2.32. %d / 100 = %d.\n", n, k);
	k1 = n / 10 % 10;
	printf("%d / 10 % 10 = %d.\n", n, k1);
	k2 = n % 10;
	printf("%d % 10 = %d.\n", n, k2);
	k3 = 100 * k2 + 10 * k1 + 1 * k;
	printf("100 * %d + 10 * %d + 1 * %d = %d.\n", k2, k1, k, k3);

	n = 123;
	x = n % 10 + n / 100 * 10 + n / 10 % 10 * 100;
	printf("\n2.29.obmen 1 or 2 cifry: %d % 10 + %d / 100 * 10 + %d % / 10 mod 10 * 100 = %d.\n", n, n, n, x);

	int a1 = 8, a2 = 9, b1 = 3;
	a = (a1 + b1) % base;
	b = (a1 + b1) / base;	// flag perepolneniy
	c = (a2 + b) % base;
	d = (a2 + b) / base;
	printf("\n2.34. Cifry a1 = %d, b1 = %d - edinicy, a2 = %d - desytki.\n", a1, b1, a2);
	printf("vse cifry v summe A2A1 and B1:.\n");
	printf("suma edinic: %d + %d = %d cifra, perepolnenie %d.\n", a1, b1, a, b);
	printf("suma desytkov and perepolnenie: %d + %d = %d cifra, next perep %d.\n", a2, b, c, d);
	e = d * 100 + c * 10 + a;
	printf("suma cifr: %d %d %d, suma = %d.\n", a, c, d, e);

	a1 = 4; a2 = 6; b1 = 8;
	int b2 = 9;
	printf("\n2.35.Cifry A1 = %d, A2 = %d, B1 = %d, B2 = %d, Cifry in sum.\n", a1, a2, b1, b2);
	a = (a1 + b1) % 10;
	b = (a1 + b1) / 10;
	printf("a1 + b1 = %d + %d, Perepolnenie %d.\n", a1, b1, b);
	c = (a2 + b2 + b) % 10;
	d = (a2 + b2 + b) / 10;
	printf("a2 + b2 + Perep = (%d + %d +%d) = %d, perep + %d.\n", a2, b2, b, d);
	e = d * 100 + c * 10 + a;
	printf("Resultat cifry v sume: %d %d %d, suma = %d.\n", d, c, a, e);
	//36

	printf("suma cifr: %d %d %d, suma = %d.\n", a, c, d, e);
	// 101.102.103.104.105.106.107.108.109.110.
	// 111.112.113.114.115.116.117.118.119.120.
	k = 26;
	k1 = (k / 3) % 10;
	printf("\n2.38: 3,6,9,12 = (%d / 3) mod 10 = %d.\n", k, k1);
	k2 = 1;
	printf("chisla: 1, 4, 7.... vsegda %d.\n", k2);
	k3 = (k + 1) / 30;
	printf("chisla 2, 5, 8 = (%d / 10) mod 10 = %d.\n", k, k3);

	double clocks = 190.0, radians = (clocks / 180.0) * acos(-1.0);
	double hours = radians / (acos(-1.0) * 2.0 / 12.0);
	printf("\n2.40 cloks %.3f, radians %.3f, hours %.3f, full hours %.3f.\n",
		clocks, radians, hours, floor(hours));

	a = 7; b = 21;
	n = a % b * b % a + 1;
	printf("\n2.43. %d mod %d * %d mod %d + 1 = %d", a, b, b, a, n);
	
}
