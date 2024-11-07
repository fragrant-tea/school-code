// дополнительный код или черновики, разбросать потом по исходнику.
void college(void)
{
	printf("Some labz at college, cleanup later.\n\n");
	int a, b, c, d;
	// Вопросы к самому заданию 1:
	// - построить необходимо минимальную или другими терминами оптимальную схему или можно просто как есть, без оптимизации;
	// - неопределены правила приоритета логических операций или не хватает скобок, приоритет по Си: 
	// скобки "()", отрицание "!", логическое И "&&" и логическое ИЛИ "||", см. Прату или стандарт.
	// - если значения уже заданы, то необходимо чтобы выражение срабатывало на любых значениях A, B, C - иначе схемы могут быть сильно упрощены.
	a = 1; b = 0; c = 1;
	printf("Source bool variables A = %d, B = %d and C = %d.\n",a, b, c);
	d = (a && b) || !c;
	printf("1. (A and B) or not(C) = (%d and %d) or not(%d) = %d.\n", a, b, c, d);
	d = a || b && !c;
	printf("2. A or B and not(C) = %d or %d and not(%d) = %d.\n", a, b, c, d);
	d = !a || b && c;
	printf("3. not(A) or B and C = not(%d) or %d and %d = %d.\n", a, b, c, d);
	d = a && (b || c);
	printf("4. A and (B or C) = %d and (%d or %d) = %d.\n", a, b, c, d);
	d = a || !(b && c);
	printf("5. A or not(B and C) = %d or not(%d and %d) = %d.\n", a, b, c, d);
	return;
}

/* 
int a[5];
	for (int i = 0; i < 5; i++) {
		a[i] = i * 98;
		printf("a[%d] = %d;.\n", i, a[i]);

	}
	 unsigned int k, n, r = 0, s;
	 n = 3; k = 3;
	 printf("n = %d, k = %d.\n", n, k);
	 s = n / k - 1;
	 printf("sied = %d.\n", s);
	 for (int i = 0; i < n; ++i)
		 r = r + s;
	 r = r * 2;
	 printf("result = %d.\n", r);

	 long long  steps = 1000000000000000000, lj = 100, sj = 1, rl = 0;
	 printf("steps = %lld, lj = %lld, sj = %lld, rl = %lld.\n", steps, lj, sj, rl);
	 rl = steps / (lj + sj) * 2;
	 steps = steps % (lj + sj);
	 printf("double jumps %lld, steps %lld.\n", rl, steps);
	 if (steps > lj)
		 rl += 2;
	 else if (steps <= lj && steps > 0)
		 rl += 1;
	 printf("jumps = %lld.\n", rl);

	 k = 2; n = 1;
	 for (int i = 0; i < k; ++i)
		 n *= 10;
	 n = n - 1;
	 printf("n = %d.\n", n);
	 s = n - 1;
	 while (n % s != 0)
		 s--;
	 printf(" s = %d.\n", s);
	 r = 0;
	 for (int i = 0; i < k; ++i)
		 r = r * 10 + 3;
	 int m[2] = { 1, 2 };
	 n = m[0];
	 m[0] = m[1];
	 m[1] = n;
	 printf("m[0] = %d, m[1] = %d.\n", m[0], m[1]);
	 n = 11; r = 0; s = 0;
	 for (int i = 2; i <= n; i++)
		 if (i % 2 == 0)
			 r++;
		 else
			 s++;
	 printf("r = %d, s = %d.\n", r, s);
	 char y[5] = "Cat";
	 printf("%s.\n", y);



*/
