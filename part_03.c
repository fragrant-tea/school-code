#include <stdio.h>
#include <math.h>

void part_03(void)
{
	printf("Part_03. Logical type and statements.\n\n");
	int a, b, c, d, e, f, g, h;
	a = 1; b = 0; c = 0;
	printf("\n3.1. A = %d, B = %d, C = %d, boolean data.\n", a, b, c);
	d = a || b;
	printf("\nA). A or B = %d or %d = %d.\n", a, b, d);
	d = a && b;
	printf("\nB). A and B = %d and %d = %d.\n", a, b, d);
	d = b || c;
	printf("\nV). B or C = %d or %d = %d.\n", b, c, d);



	a = 1; b = 0; c = 0;
	printf("\n3.3. A = %d, B = %d, C = %d, boolean data.", a, b, c);
	d = !a && b;
	printf("\nA) not A and b = not %d and %d = %d\n", a, b, d);
	c = a || !b;
	printf("\B) A or not B = %d or not %d = %d\n", a, b, c);
	e = a && b || c;
	printf("V) A and B or B = %d and %d or %d = %d\n", a, b, c, e);

	a = 1; b = 0; c = 0;
	printf("\n3.5. A = %d, B = %d, C = %d, boolean data.", a, b, c);
	d = a || b && !c;
	printf("\nA. A or B and not C = %d or %d and not %d = %d.\n", a, b, c, d);
	d = !a && !b;
	printf("\nB. not A and not B + %d and %d = %d.\n", a, b, d);
	d = !(a && c) || b;
	printf("\nV. not(A and c) or B = (%d and %d) or %d = %d.\n", a, c, b, d);
	d = a && !b || c;
	printf("\nG. A and not B or c = %d and %d or %d = %d.\n", a, b, c, d);
	d = a && (!b || c);
	printf("\nD. A and (not B or C) = %d and (%d or %d) = %d.\n", a, b, c, d);
	d = a || (!(b && c));
	printf("\nE. A or (ne(B and C) = %d or (ne(%d and %d)) = %d.\n", a, b, c, d);


	a = 1; b = 0; c = 0;
	printf("\n3.7. A = %d, B = %d, C = %d, boolean data.", a, b, c);
	d = a || !(a && b) || c;
	printf("\nA. A or not(A and B) or C = %d or not(%d and %d) or %d = %d.\n", a, a, b, c, d);
	d = !a || a && (b || c);
	printf("\nB. not A or A and (B and C) = not %d or %d and (%d and %d) = %d.\n", a, a, b, c, d);
	d = (a || b && !c) && c;
	printf("\nV. (A or B and not C) and C = (%d or %d and not %d) and %d = %d.\n", a, b, c, c, d);

	int x = 1, y = -1;
	printf("\n3.11. X = %d, Y = %d, boolean data.", x, y);
	d = (x * x + y * y <= 4);
	printf("\nA. %d * %d + %d * %d equal or less 4 = %d.\n", x, x, y, y, d);
	x = 1, y = 2;
	d = (x >= 0 || y * y != 4);
	printf("\nB. (%d equal or more 0 or %d * %d not equal 4) = %d.\n", x, y, y, d);
	x = 1, y = 2;
	d = (x <= 0 && y * y != 4);
	printf("\nV. (%d equal or less 0 and %d * %d not equal 4) = %d.\n", x, y, y, d);
	x = 2; y = 1;
	d = (x * y != 0 && y > x);
	printf("\nG. (%d * %d not equal 0 and %d more %d) = %d.\n", x, y, y, x, d);
	x = 2; y = 1;
	d = (x * y != 0 || y < x);
	printf("\nD (%d * %d not equal 0 or %d less %d) = %d.\n", x, y, y, x, d);
	x = 2; y = 1;
	d = ((!(x * y < 0)) && (y > x));
	printf("\nE. (not(%d * %d less 0)) and (%d more %d) = %d", x, y, y, x, d);
	x = 1; y = 2;
	d = (!(x * y < 0)) || (y > x);
	printf("\nJ. (not(%d * %d less 0)) or (%d more %d) = %d", x, y, y, x, d);


	a = 0; b = 0; d = !(a && b);
	printf("\n1.13A1. not(%d and %d) = %d", a, b, d);
	a = 0; b = 1; d = !(a && b);
	printf("\n1.13A2. not(%d and %d) = %d", a, b, d);
	a = 1; b = 0; d = !(a && b);
	printf("\n1.13A3. not(%d and %d) = %d", a, b, d);
	a = 1; b = 1; d = !(a && b);
	printf("\n1.13A4. not(%d and %d) = %d", a, b, d);

	a = 0; b = 0; d = !a && !b || a;
	printf("\n3.17A1. not %d and not %d or %d = %d", a, b, a, d);
	a = 0; b = 1; d = !a && !b || a;
	printf("\n3.17A2. not %d and not %d or %d = %d", a, b, a, d);
	a = 1; b = 0; d = !a && !b || a;
	printf("\n3.17A3. not %d and not %d or %d = %d", a, b, a, d);
	a = 1; b = 1; d = !a && !b || a;
	printf("\n3.17A4. not %d and not %d or %d = %d", a, b, a, d);

	a = 0; b = 0; d = !(!a || b) || !a;
	printf("\n3.20A1. not(not %d or %d) or not %d = %d", a, b, a, d);
	a = 0; b = 1; d = !(!a || b) || !a;
	printf("\n3.20A2. not(not %d or %d) or not %d = %d", a, b, a, d);
	a = 1; b = 0; d = !(!a || b) || !a;
	printf("\n3.20A3. not(not %d or %d) or not %d = %d", a, b, a, d);
	a = 1; b = 1; d = !(!a || b) || !a;
	printf("\n3.20A4. not(not %d or %d) or not %d = %d", a, b, a, d);


	a = 0; b = 0; c = 0; d = a || !b && !(a || !c);
	printf("\n3.26V. %d or not %d and not(%d or not %d) = %d", a, b, a, c, d);
	a = 0; b = 0; c = 1; d = a || !b && !(a || !c);
	printf("\n3.26V. %d or not %d and not(%d or not %d) = %d", a, b, a, c, d);
	a = 0; b = 1; c = 1; d = a || !b && !(a || !c);
	printf("\n3.26V. %d or not %d and not(%d or not %d) = %d", a, b, a, c, d);
	a = 1; b = 1; c = 1; d = a || !b && !(a || !c);
	printf("\n3.26V. %d or not %d and not(%d or not %d) = %d", a, b, a, c, d);
	a = 1; b = 0; c = 1; d = a || !b && !(a || !c);
	printf("\n3.26V. %d or not %d and not(%d or not %d) = %d", a, b, a, c, d);
	a = 1; b = 1; c = 0; d = a || !b && !(a || !c);
	printf("\n3.26V. %d or not %d and not(%d or not %d) = %d", a, b, a, c, d);
	a = 0; c = 1; b = 0; d = a || !b && !(a || !c);
	printf("\n3.26V. %d or not %d and not(%d or not %d) = %d", a, b, a, c, d);
	a = 1; b = 0; c = 0; d = a || !b && !(a || !c);
	printf("\n3.26V. %d or not %d and not(%d or not %d) = %d.\n", a, b, a, c, d);


	x = 0; y = 1;
	d = x >= 0 && y < 5;
	printf("\n3.27V. %d >= 0 and %d < 5 = %d", x, y, d);
	x = 4;
	d = x > 3 || x < -1;
	printf("\nG. %d > 3 or %d < -1 = %d", x, x, d);
	x = -1;
	d = !(x > 0 && x < 5);
	printf("\nJ. not(%d > 0 and %d < 5) = %d", x, x, d);
	x = 4; y = 4;
	d = y > 0 && y <= 4 && x < 5;
	printf("\nI. 0 < %d and y <= 4 and %d < 5 = %d", y, x, d);



	x = 20; y = 20;
	d = x % 2 != 0 && y % 2 != 0;
	printf("\n3.29A %d mod 2 not = 0 and %d mod 2 not = 0 = %d", x, y, d);
	x = 19; y = 21;
	d = ((x < 20 + y < 20) == 1);
	printf("\nB. ((%d < 20 and %d >= 20) or (%d >= 20 and %d < 20)) = %d", x, y, x, y, d);

	x = 35;
	d = (x % 5 == 0) || (x % 7 == 0);
	printf("\n3.31A. %d mod 5 or %d mod 7 = %d", x, x, d);
	x = 40;
	d = (x % 4 == 0) && (x % 10 != 0);
	printf("\nB. %d mod 4 and %d mod 10 = %d", x, x, d);

	e = ((x >= 2) && (y >= 1 || y <= -1.5));
	printf("\n3.32.E. (%d >= 2) and (%d >= 1 or %d <= -1.5) = %d", x, y, y, e);
	e = (x >= 1 && y >= -1) || (x >= 2 && y <= -1);
	e = (x >= 3 && (y <= -2 || y >= -1));
	e = (x >= 2 || (y <= 1.5 && y >= 0.5));

	d = x >= 1 && x >= 4 && y >= 2 && y <= 4;
	printf("\n3.32.A ((%d >= 1 and %d >= 0) or (%d >= 1 and %d <= -1)) = %d", x, y, x, y, d);
	d = (x <= -1 && y >= 1) || (x >= 2 && y >= 1);
	printf("\nB (%d >= 1 and %d <= 3 and %d <= -1 and %d >= -2) = %d", x, x, y, y, d);
	d = (x >= 3 && (y <= 2 || y >= 1));
	printf("\nc. (%d >= 3 and (%d <= 2 or %d >= 1)) = %d", x, y, y, d);
	d = (y >= 2) || (x >= 1 && x <= 3 && y < 2 && y >= -2);
	printf("\nD %d >= 2 or %d <= 1 and %d >= -1 = %d", x, y, y, d);

	printf("\n\n.3.34. Shahmaty, doska. stolbzy slevo - napravo[1:8], ryady snizu - vverh[1:8].\n");
	a = 4; b = 2; c = 6; d = 2;
	e = (a == c) || (b == d);
	printf("\n. Ladya na (%d, %d) atakuet pole (%d, %d) = %d.\n", a, b, c, d, e);
	a = 3; b = 5; c = 1; d = 3;
	e = (abs(a - c) == abs(b - d));
	printf("\nSlon na (%d, %d) atakuet pole (%d, %d) = %d.\n", a, b, c, d, e);
	a = 1; b = 4; c = 2; d = 4;
	e = (abs(a - c) == 1) && (abs(b - d) == 1) || (abs(c - a) == 1 && (d == b)) || (abs(d - b) == 1 && (a == c));
	printf("\n Korol:na (%d, %d) atakuet pole (%d, %d) = %d.\n", a, b, c, d, e);
	a = 6; b = 7; c = 6; d = 4;
	e = (abs(a - c) == abs(b - d)) || (a == c || b == d);
	printf("\n. Ferz:na (%d, %d) atakuet pole (%d, %d) = %d.\n", a, b, c, d, e);
	a = 1; b = 2; c = 2; d = 3;
	e = (d - b) == 1 && abs(c - a) == 1;
	printf("\nD Peshka:na (%d, %d) atakuet pole (%d, %d) = %d.\n ", a, b, c, d, e);
	a = 5; b = 6; c = 3; d = 5;
	e = ((abs(c - a) == 1 && abs(d - b) == 2) || (abs(c - a) == 2 && abs(d - b) == 1));
	printf("\n. Kon kuchaet: (%d, %d) atakuet pole (%d, %d) = %d.\n", a, b, c, d, e);


	printf("\n\n.3.35. Shahmaty, doska. stolbzy slevo - napravo[1:8], ryady snizu - vverh[1:8].\n");
	a = 3; b = 5; c = 3; d = 7;
	e = (a == c && abs(b - d) == 1 || b == d & abs(a - c) == 1 || abs(a - c) == abs(b - d) && abs(a - c) == 1);
	printf("\n. Korol: atakuet pole (%d, %d) = %d.\n", a, b, c, d, e);
	a = 4; b = 7; c = 4; d = 8;
	e = (a == c || b == d || abs(a - c) == abs(b - d));
	printf("\n. Ferz: atakuet pole (%d, %d) = %d.\n", a, b, c, d, e);
	a = 2; b = 3; c = 4; d = 2;
	a = 2; b = 1; c = 1; d = 3;
	e = (a == c || b == d);
	printf("\n. Ladia: atakuet pole (%d, %d) = %d.\n", a, b, c, d, e);
	a = 4; b = 3; c = 7; d = 3;
	e = (abs(a - c) == 2 & abs(d - b) == 1 || abs(a - c) == 1 && abs(d - b) == 2);
	printf("\n. Kon: atakuet pole (%d, %d) = %d.\n", a, b, c, d, e);
	a = 2; b = 4; c = 5; d = 2;
	e = abs(a - c) == abs(b - d);
	printf("\n. Slon: atakuet pole (%d, %d) = %d.\n", a, b, c, d, e);
	//p slon and kon
	a = 2; b = 3;// - otkuda idet slon 
	c = 6; d = 3;// otkuda kon atakuet slona posle peremecheniy
	e = 4; f = 5;// kuda idet slon
	g = abs(e - a) == abs(f - b);
	h = ((abs(e - c) == 1 && abs(f - d) == 2) || (abs(e - c) == 2 && abs(f - d) == 1));
	printf("\n3.35p:Slon s (%d, %d) dvigaetsya na (%d, %d), kon atakuet ego s (%d, %d) = %d and not %d = %d.\n ",
		a, b, e, f, c, d, g, h, g && !h);



	a = 3; b = 2;
	c = 3; d = 6;
	e = 5; f = 4;
	g = abs(e - a) == abs(f - b);
	h = (abs(e - c) == abs(f - d)) || (e == c || f == d);
	printf("\n3.35o:Slon s (%d, %d) dvigaetsya na (%d, %d), Ferz atakuet ego s (%d, %d) = %d and not %d = %d.\n ",
		a, b, e, f, d, c, g, h, g && !h);

	a = 4; b = 2;
	c = 4; d = 5;
	e = 5; f = 3;
	g = (abs(e - a) == abs(f - b)) || (e == a || f == b);
	h = ((abs(e - c) == 1 && abs(f - d) == 2) || (abs(e - c) == 2 && abs(f - d) == 1));
	printf("\n3.35j:Fers s (%d, %d) dvigaetsya na (%d, %d), kon atakuet ego s (%d, %d) = %d and not %d = %d.\n ",
		a, b, e, f, d, c, g, h, g && !h);

	a = 1; b = 3;
	c = 1; d = 2;
	e = 4; f = 3;
	g = (a == e) || (b == f);
	h = abs(e - c) == abs(f - d);
	printf("\n3.35V:Laday s (%d, %d) dvigaetsya na (%d, %d), Ferz atakuet ego s (%d, %d) = %d and not %d = %d.\n ",
		a, c, b, d, e, a, f, b, g && !h);


	a = 2; b = 3;
	c = 6; d = 3;
	e = 3; f = 4;
	g = (abs(a - e) == 1) && (abs(b - f) == 1) || (abs(e - a) == 1 && (f == b)) || (abs(f - b) == 1 && (a == e));
	h = (c == e) || (b == f);
	printf("\n3.35f:korol s (%d, %d) dvigaetsya na (%d, %d), ladia atakuet ego s (%d, %d) = %d and not %d = %d.\n ",
		a, c, b, d, c, a, d, b, g && !h);


	y = -2; x = 1;
	d = y <= -1 || x >= -2;
	printf("\n.3.33A. %d <= -1 or %d >= -2 = %d", y, x, d);
	y = -1;
	d = y <= 1 || y >= -3;
	printf("\n3.33B %d <= 1 or %d >= -3 = %d ", y, y, d);
	x = 3;
	d = x >= 1 && x >= 4 && y >= 2 && y <= 4;
	printf("\n3.33.D ((%d >= 1 and %d >= 0) or (%d >= 1 and %d <= -1)) = %d", x, y, x, y, d);
	x = 3; y = 1;
	d = (x <= -1 && y >= 1) || (x >= 2 && y >= 1);
	printf("\nE (%d >= 1 and %d <= 3 and %d <= -1 and %d >= -2) = %d", x, x, y, y, d);
	x = 4; y = 1;
	d = (x >= 3 && (y <= 2 || y >= 1));
	printf("\nJ. (%d >= 3 and (%d <= 2 or %d >= 1)) = %d", x, y, y, d);
	x = 4; y = -2;
	d = (y >= 2) || (x >= 1 && x <= 3 && y < 2 && y >= -2);
	printf("\nZ %d >= 2 or %d <= 1 and %d >= -1 = %d", x, y, y, d);

	y = -2; x = 3;
	e = y >= 1 && x <= -2;
	printf("\n3.32A. %d <= -1 or %d >= 2 = %d", y, x, e);
	y = -1;
	e = y >= -2 && y <= 2;
	printf("\n3.32B. %d <= 2 and y >= -2 = %d", y, y, e);
	y = 3; x = 2;
	e = y <= 4 && (x >= 1 && x <= 2);
	printf("\n3.32V. %d > 4 and (%d > 1 or %d > 2) = %d", y, x, x, e);
	y = 3; x = 7;
	e = (y >= 2 && y <= 4) && x >= 1;
	printf("\n3.32G. %d >= 2 and %d <= 4 or %d >= 1 = %d", y, y, x, e);
	x = 3; y = -2;
	e = (x >= 2 && y >= 0) || (x >= 1 && y <= -1);
	printf("\n 3.32D.%d >= 2 and %d >= 0 or %d <= 1 and %d <= -1 = %d", x, y, x, y, e);
	x = 3; y = 1;
	e = ((x >= 2) && (y >= 1 || y <= -2));
	printf("\n3.32.E. (%d >= 2) and (%d >= 1 or %d <= -2) = %d", x, y, y, e);
	x = 2; y = -1;
	e = (x >= 1 && x <= 3) && (y <= -1 && y >= -2);
	printf("\n3.32J. %d >= 1 and %d <= -1 and %d <= 3 and %d >= - 2 = %d", x, y, x, y, e);
	x = 3; y = 1;
	e = (x >= 2) || (y >= 1 && y <= 2);
	printf("\n3.32Z. %d >= 2 or %d >= 1 and %d <= 2 = %d", x, y, y, e);


}

