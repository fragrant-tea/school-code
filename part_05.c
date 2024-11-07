#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void part_05(void)
{
    printf("Part 5. Loops with prameters.\n");
    srand(0);
    int a, b, c, d, e, f, g, h, i, j;
    double x, y, z, w;
    printf("\n5.3. Print data in column:\nA)\n");
    for (b = 20; b <= 35; b++)
        printf("%d\n", b);
    printf("B)\n");
    for (a = 45; a <= 50; a++)
        printf("%d\n", a * a);
    printf("V)\n");
    for (b = 45; b <= 50; b++)
        printf("%d\n", b * b * b);
    printf("G)\n");
    for (b = 34, c = 37; b <= c; b++)
        printf("%d\n", b);
    const double cm_per_inch = 2.54, gram_per_pound = 453.0,
        gram_per_kg = 1000.0, rub_usd = 93.47;
    printf("\n5.8-5.10. Conversion between of some values, "
        "Cm per inch is %.2f, Gram per pound is %.2f, Gram per kg is %.2f, "
        "Rubles -- USD is %.2f.\n", cm_per_inch, gram_per_pound, gram_per_kg, rub_usd);
    printf("Grams:\tPounds:\tKilograms:\tInches:\tCentimeters:\tUSD:\tRUB:\n");
    for (i = 1, j = 5; i <= j; i++) {
        double gram = i * ((rand() % j) * 100);
        double pounds = gram / gram_per_pound;
        double kg = gram / gram_per_kg;
        double cm = i * cm_per_inch;
        double rub = i * rub_usd;
        printf("%.2f\t%.2f\t%.2f\t\t%d\t%.2f\t\t%d\t%.2f\n", gram, pounds, kg, i, cm, i, rub);
    }
    printf("\n5.11. To the horizon line from the point with height in km:\n");
    const double radius = 6350.0;
    for (double height = 1.0, horizon; height < 10.0; height += 1.0) {
        horizon = (radius + height) * (radius + height) - (radius * radius);
        horizon = sqrt(horizon);
        printf("horizon at %.2f km = %.6f;\n", height, horizon);
    }
    a = 6;
    printf("\n5.15. Table multiply using number A = %d.\n", a);
    for (b = 1; b <= 9; b++)
        printf("%d*%d = %d\n", a, b, a * b);
    printf("\n5.16. F((sin(n)) = sin(2), sin(3), ..., sin(5) in a column:\n");
    for (a = 2; a <= 5; a++)
        printf("sin(%d) = %f\n", a, sin(a));
    printf("\n5.18. Z(a) = 3.5 * T^2 - 7 * T + 16, T = 4 * A, A in [2...7].\n");
    a = 2;
    while (a < 5) {
        x = 4 * a;
        y = 3.5 * pow(x, 2.0) - 7.0 * x + 16.0;
        printf("\tt = 4 * %d = %.2f, Z(a) = 3.5 * %.2f^2 - 7 * %.2f + 16 = %.2f\n", a, x, x, x, y);
        a = a + 1;
    }
    printf("\n5.20. Print values of sqrt(0.1...0.5):\n");
    for (a = 1; a <= 5; a++) {
        x = a / 10.0;
        printf("%.2f\t%.2f\n", x, sqrt(x));
    }
    double price = 333.3;
    printf("\n5.22. Price of candys in kg = %.2f.\n", price);
    printf ("Grams:\tValue:\n");
    price /= 1000.0;
    for (a = 1; a <= 5; a++)
        printf("%dg\t%.2frub\n", a * 100, (double)a * 100.0 * price);
    
    printf("\n5.26. Print numbers in a column: 4.4, 4.6, ..., 6.4:\n");
    d = 44;
    while (d < 50) {
        x = d / 10.0;
        printf("%.2f\n", x);
        d = d + 2;
    }
    
    printf("\nProcessing a fixed sequence of numbers.\n\n");
    for (a = 3, b = 6, c = a, d = 0; c <= b; c++) 
        d += c;
    printf("\n5.27. B) Sum from %d to %d = %d.\n", a, b, d);
    
    b = 5;
    printf("\n5.28. B) Multiply from %d to %d: ", 1, b);
    if (b >= 1 && b <= 10) 
        for (a = 1, c = a, d = 1; c <= b; c++) {
            d *= c;
            printf("%d(%d) ", c, d);
        }
    // Вещание 3!!!!!!!!!!!!!!!!
    return;
    for (a = 1, b = 10, c = a, d = 0; c <= b; c++) {
        d += c;
       // print 
        }
    x = (double)d / (double)(b - a + 1);
    printf("\n\n5.29.A)The arithmetic mean from %d to %d: %.2f.\n", a, b, x);
    return;
    // б) Среднее арифметическое всех целых чисел от 100 до b
    // а) Сумма кубов всех целых чисел от 20 до 40
    e = 0;
    for (i = 20; i <= 40; i++) {
        a += i * i * i;
    }
    printf("The sum of the cubes of all integers from 20 to 40: %d\n", a);
            
    long long suthe_cat_in_the_boots = 0; // Используем long long для предотвращения переполнения
    a  = 33;
    // Вычисление суммы квадратов чисел от n до 2n
    for (i = a; i <= 2 * a; i++) {
    suthe_cat_in_the_boots += i * i;
    }
     printf("The sum of the numbers from n^2 to (2n)^2: %lld\n", suthe_cat_in_the_boots);


 }