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
    return;
    printf("5.15) multiplication table by the number n");
    printf("a = ");
    a = 6;
    for (b = 0; b < 10; b++) {
        printf("%d*%d = %d\n", a, b, a * b);
    }
    
    printf("5.16) print the values of sin 2 , sin3 , ..., sin 20 in a column");
    for (a = 2; a <= 21; a++) 
    printf("sin(%d) = %f\n", a, sin(a));

    
    printf("5.18) calculate the z values for the values of a equal to 2, 3, ..., 17:");
    a = 2;
    while (a) {
        x = sin(4 * a);
        y = 3.5 * pow(x, 2) - 7 * cos(x) + 1.6;
        printf("a = %2d\tx = %6.3f\ty = %6.3f\n", a, x, y);
        a = a + 1;
    }
    printf("5.20) print the values in a column sqrt 0.1 - sqrt 0.9");
    float k = 0.1;
    for (k = 1; k <= 9; k++) {
        printf("%f\n", k);
        k += 0.1;
    }
    
    printf("5.22) table of the cost of 100, 200, 300, ..., 2000 g of sweets");
    double price = 333.3;
    printf("Введите цену 1 кг конфет: ");
    price *= 0.1;
    for (a = 1; a <= 20; a++) {
        printf("%d g - %.2f RUR\n", a * 100, a * price);
    }
    
    printf("5.26) Print the following numbers in a column: 4,4, 4,6, 4,8, ..., 6,4.");
    //d = 4.4;
    //while (d < 6.5) 
    //printf("%f\n", d);
    //d = d + 0.2;
          
    printf("Processing a fixed sequence of numbers");
   // d = 0;
    //for (b = a; b <= 500; b++) 
     //   d += b;
    //printf("5.27. b) %d\n", d);
       
    

}