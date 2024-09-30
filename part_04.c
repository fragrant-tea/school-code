#include <stdio.h> 
#include <math.h>


void part_04(void)
{
    printf("Part 4. Branching and Jumps.\n\n");
    int a, b, c, d, e, f, g, h;
    double w, x, y, z;
    const int base = 10;
    const double pi = acos(-1.0);
    //(((a + 2 * b < c) || (b > a) || (a > 60)) == 0)
   /*  for (c = 0, d = 0; c < 1000 && d == 0; c++)
        for (a = 0, d = 1; a <= 1000 && d == 1; a++)
            for (b = 0; b <= 1000 && d == 1; b++)
                if ((((a <= 13) <= (a * a < c)) && ((b * b <= c) <= (b < 14))) == 0) {
                    d = 0;
                    printf("Result 0: A = %d, X = %d, Y = %d.\n", c, a, b);
                }
    printf(" Result 1: A = %d, X = %d, Y = %d.\n", c - 1, a - 1, b - 1);
    return;*/

    //. Для какого наименьшего целого числа А формула
   // ((x ≤ 13) →(x⋅x < A)) ∧((y⋅y ≤ A) →(y < 14))
       // тождественно истинна(то есть принимает значение 1 при любых целых неотрицательных значениях переменных x и y) ?

    printf("\n 4.1. if x > 0, y(x) = sin(x)^2, else y(x) = 1 - 2 * sin(x^2) = ");
    x = pi / 2.0;
    if (x > 0) {
        y = sin(x) * sin(x);
        printf("SIN(%.2f)^2 = %.2f.\n", x, y);
    }
    else {
        y = 1.0 - (2.0 * sin(x * x));
        printf("1.0 - (2.0 * SIN(%.2f * %.2f)) = %.2f.\n", x, x, y);
    }
    a = 6;      // Координата Y
    if (a >= 3)
        printf("\n 4.4. see figure 4.2, y = %d, point at area I.\n", a);
    else
        printf("\n 4.4. see figure 4.2, y = %d, point at area II.\n", a);
    a = 8; b = 3;
    printf("\n 4.6. source numbers a = %d, b = %d: \n", a, b);
    if (a > b)
        printf("A) a is more than b.\n");
    else if (a < b)
        printf("A) b is more than a.\n");
    else
        printf("A) a is equal b.\n");
    if (b > a)
        printf("B) a is less than b.\n");
    else if (b < a)
        printf("B) b is less than a.\n");
    else
        printf("B) b is equal a.\n");


    x = 5.21; y = 2.4; // скорости в км/час и в м/c
    const double sec_per_hour = 3600.0, m_per_km = 1000.0;
    z = m_per_km * x / sec_per_hour;
    if (z > y)
        printf("\n4.9. km_h %.2f, m_per_sec %.2f is more than %.2f.\n", x, z, y);
    else
        printf("\n4.9. km_h %.2f, m_per_sec %.2f is less than %.2f.\n", x, z, y);


    w = 2.0; x = 3.0; y = 9.0; z = 5.7;
    printf("\n4.11. Volume and masses first '%.2f, %.2f', second '%.2f, %.2f': ",
        w, x, y, z);
    x = w / x; y = y / z; // плотность 1 и 2 обьекта.
    if (x > y)
        printf("the first %.2f object has more density than %.2f.\n", x, y);
    else
        printf("the second %.2f object has more density than %.2f.\n", y, x);

    double r1, r2;
    a = 6; b = 7; c = -7;
    printf("\n4.13. solve the equation ");
    printf(" %d * x^2 + %d * x %+d = 0, ", a, b, c);
    if (a == 0)
        printf(" not a quadratic equation (а == 0);\n");
    if (b == 0) {
        if (c == 0)
            printf("the equation is true for any x:");
        else
            printf("the equation has no results;");
    }
    else if (c == 0) {
        r1 = 0;
        r2 = -1.0 * (double)b / (double)a;
    }
    d = b * b - 4 * a * c;
    printf("discriminant = %d -", d);
    if (d > 0) {
        r1 = ((double)-b - sqrt(d)) / (2.0 * (double)a);
        r2 = ((double)-b + sqrt(d)) / (2.0 * (double)a);
        printf(" positive, results %.2f, %.2f.\n", r1, r2);
    }
    else if (d == 0) {
        r1 = (double)-b / (2.0 * (double)a);
        printf(" zero result %.2f.\n", r1);
    }
    else
        printf(" negative, no results.\n");


    int year_1 = 1979;
    int month_1 = 11;
    int year_now = 2023;
    int month_now = 9;
    int year_f = (month_1 <= month_now) ? year_now - year_1 : year_now - year_1 - 1;
    printf("\n4.15. birth date %d - %d, now %d - %d, years and month, full age: %d.\n",
        year_1, month_1, year_now, month_now, year_f);

    int x1 = 2, y1 = 3, x2 = 4, y2 = 1; //координаты левых нижних углов прямоугольников
    a = 3; b = 1; c = 1; d = 4; // размеры гор верт соотвутсвующих прямоугольников
    e = (x1 <= x2) ? x1 : x2;
    f = (y1 <= y2) ? y1 : y2;
    g = (x1 + a >= x2 + c) ? x1 + a : x2 + c;
    h = (y1 + b >= y2 + d) ? y1 + b : y2 + d;
    printf("\n4.19. Rectangles left - bottom and sizes :[%d - %d : %d - %d] and "
        "[%d - %d : %d - %d]: ", x1, y1, a, c, x2, y2, b, d);
    printf("large rect with both rects corners :[%d - %d : %d - %d].\n", e, f, g, h);

    printf("\n 4.20. Integer arithmetic and conditional operator: \n");
    a = 7; b = 4;
    if (a % b == 0)
        printf("Divided into whole %d / %d.\n", a, b);
    else
        printf("Not divided into whole %d mod %d = %d.\n", a, b, a % b);

    a = 77;
    printf("\n4.22. Number is %d: \n", a);
    if (a % 2 == 0)
        printf("A) The number %d is even.\n", a);
    else
        printf("A) Not the number %d is odd.\n", a);
    if (a % 10 == 7)
        printf("B) the last digit is 7.\n");
    else
        printf("B) the last digit is not 7.\n");

    c = 48;
    printf("\n4.23. Number is %d, ", c);
    if (c < 10 || c > 99) {
        c = (abs(c) + 10) % 100;
        printf("is not in range [10;99], correct parameter %d.\n", c);
    }
    else
        printf("is in range [10;99].\n");
    a = c / 10;
    b = c % 10;
    if (b > a)
        printf("A) Second digit %d is more than first %d.\n", b, a);
    else if (b < a)
        printf("A) First digit %d is more second %d.\n", a, b);
    else
        printf("B) First digit %d is equal second %d.\n", a, b);

    printf("\n4.24. Condition: (%d^2) is equal (4 *(%d^3 + %d^3)), ", c, a, b);
    d = c * c;
    e = 4 * (a * a * a + b * b * b);
    if (d == e)
        printf("yes, %d is equal %d.\n", d, e);
    else
        printf("no, %d is not equal %d.\n", d, e);

    c = 88;
    a = c % 10;
    b = c / 10;
    if (a + b >= 10 && a + b <= 99)
        printf("\n4.25. The sum of the digits of the number %d is two-digit, %d and %d.\n", c, a, b);
    else
        printf("\n4.25. The sum of the digits of the number %d is one-digit, %d and %d.\n", c, a, b);

    c = 91;
    a = c % 10;
    b = c / 10;
    if ((a + b) % 3 == 0)
        printf("\n4.26. The sum of the digits of the number %d is divided by 3, sum %d.\n",
            c, a + b);
    else
        printf("\n4.26. The sum of the digits  of the number %d is not divided by 3, sum %d.\n",
            c, a + b);

    d = 232;
    a = d % 10;// edinizu
    b = (d / 10) % 10; //desetki
    c = d / 100; // sotni
    if (a == c)
        printf("\n4.27. Number %d is palindrome.\n", d);
    else
        printf("\n4.27. Number %d is not palindrome.\n", d);
    printf("\n4.28. Source number %d of 3 digits:\n", d);
    if (c > a)
        printf("A) first digit %d is more than last %d.\n", c, a);
    else if (c < a)
        printf("A) first digit %d is less than last %d.\n", c, a);
    else
        printf("A) first digit %d is equal to %d.\n", c, a);


    e = a + b + c; f = 4;
    printf("\n4.30. Number %d, digits '%d' '%d' '%d', sum of digits is %d:\n", d, a, b, c, e);
    if (e % 5 == 0)
        printf("G) Yes, sum of digit is divided by 5;\n");
    else
        printf("G) No, sum of digit is not divided by 5;\n");
    if (e % f == 0)
        printf("D) The sum of the digits %d is divided by %d.\n", e, f);
    else
        printf("D) The sum of the digits %d is not divided of %d.\n", e, f);

    printf("\n4.31. Number %d, digits '%d' '%d' '%d':\n", d, a, b, c);
    if (a == b && b == c)
        printf("A) Yes, all digits are equal;\n");
    else
        printf("A) No, digits are different;\n");
    if (a == b || b == c || a == c)
        printf("B) Yes, some digits are equal.\n");
    else
        printf("B) No, all digits are different.\n");


    a = 12; b = 8; c = 4; d = 4;
    int long_side = (a / c) * (b / d);
    int short_side = (a / d) * (b / c);
    printf("\n4.35. table sizes %d horizontal, %d vertical. rectangle sizes %d, %d.\n",
        a, b, c, d);
    if (long_side > short_side)
        printf("Long side area %d is more than short side area %d.\n", long_side, short_side);
    else if (long_side < short_side)
        printf("Long side area %d is less than short side area %d.\n", long_side, short_side);
    else
        printf("Long side area %d is equal to short side area %d.\n", long_side, short_side);

    int time, mins = 0, red = 2, green = 3;
    time = 55;
    mins = time % (red + green);
    if ((mins >= 0) && (mins <= 2))
        printf("\n4.36. light traffic color is green, time %d, offset %d.\n", time, mins);
    else
        printf("\n4.36. light traffic color is red, time %d, offset %d.\n", time, mins);

    printf("\n Using complex conditions: \n");
    a = 7;
    //printf("Enter number: ");
    //scanf("%d", &a);
    if (a > -5 && a < 3)
        printf("\n4.37. Yes, %d belongs to the interval (-5:3).\n", a);
    else
        printf("\n4.37. No, %d not belongs to the interval (-5:3).\n", a);


    a = 4; b = 5;
    if (a >= 3 && b >= 2)
        printf("\n4.38. A) Yes, (%d, %d) The point is into the area 'I'.\n", a, b);
    else
        printf("\n4.38. A) No, (%d, %d) The point is into the area 'I'.\n", a, b);

    if (a <= -2 && b <= -4)
        printf("\n4.38. B) Yes, (%d, %d) The point is into the area 'I'.\n", a, b);
    else
        printf("\n4.38. B) No, (%d, %d) The point is into the area 'I'.\n", a, b);
    a = 7;
    if (a > -1 && a <= 5)
        printf("\n4.39. figure(4.5), point at %d, in II area.\n", a);
    else if (a <= -1)
        printf("\n4.39. figure(4.5), point at %d, in I area.\n", a);
    else
        printf("\n4.39. figure(4.5), point at %d, in III area.\n", a);



    x = 0.1;
    if (0.2 <= x && x <= 0.9)
        printf("4.41. Given a real number %.2f. Calculate SIN(%.2f) = %.2f.\n", x, x, sin(x));
    else
        printf("4.41. f(%.2f) == 1.0.\n", x);

    a = 6; b = 7; c = 3;
    printf("\n4.42. a = %d, b = %d and c = %d: \n", a, b, c);
    if (a < b && b < c)
        printf("A) Yes, satisfies the condition (a<b<c);\n");
    else
        printf("A) No, not satisfies the condition (a<b<c);\n");
    if (b > a && a > c)
        printf("B) Yes, satisfies the condition (b>a>c);\n");
    else
        printf("B) No, not satisfies the condition (b>a>c);\n");

    a = 8; b = 5; c = 3; d = 2;
    printf("\n4.43. Numbers a = %d, b = %d, c = %d, d = %d: \n", a, b, c, d);
    if (a % b == c || b % a == d || a % b == d || b % a == c)
        printf("Yes one of the numbers %d and %d is the divided to %d or %d;\n", a, b, c, d);
    else
        printf("No, none of the numbers %d and %d is not divided to %d or %d;\n", a, b, c, d);

    a = 4; b = 5; c = 4;
    printf("\n4.45. Numbers a = %d, b = %d, c = %d: \n", a, b, c);
    if ((a == b) || (a == c) || (b == c))
        printf("Yes, there is a pair of equals in numbers.\n");
    else
        printf("No, there is not a pair of equals in numbers.\n");


    if (a == b && b == c && a == c)
        printf("\n4.46 Yes, the triangle is equilateral.\n");
    else
        printf("\n4.46 No, the triangle not is equilateral.\n");

    printf("\n4.47. a = %d, b = %d, c = %d. Sides of the triangle ", a, b, c);
    a = 7; b = 3; c = 7;
    if (a == b || a == c || b == c)
        printf("Yes, the triangle is isosceles");
    else
        printf("No, the triangle is no isosceles");

    a = 177; b = 77; c = 99;
    if (a == b && b == c)
        printf("\n4.48 Yes, the heights %d-%d-%d is equal.\n", a, b, c);
    else
        printf("\n4.48 No, the heights %d-%d-%d is not equal.\n", a, b, c);
    a = 3; b = 4; c = 7; d = 1;
    printf("\n4.50. Numbers a = %d, b = %d, c = %d, d = %d: \n", a, b, c, d);
    if ((a <= c && b <= d) || (a <= d && b <= c))
        printf("\n4.50. Yes, can a rectangle with sides (a, b) fit inside a rectangle (c, d)\n");
    else
        printf("\n4.50. No, can a rectangle with sides (a, b) fit inside a rectangle (c, d)\n");
    a = 3; b = 2; c = 4; e = 4; f = 2;
    printf("\n4.53. Brick sides: a = %d; b = %d; c = %d. Hole dimensions: e = %d, f = %d\n"
        , a, b, c, e, f);
    if (a <= e && b <= f || b <= e && a <= f || c <= e && a <= f ||
        a <= e && c <= f || c <= e && b <= f || b <= e && c <= f)
        printf("The brick will pass through the hole\n");
    else
        printf("The brick will not pass through the hole.\n");

    a = 5142; b = 1;
    c = a / 1000;
    d = a % 1000 / 100;
    e = a % 100 / 10;
    f = a % 10;
    if (e == 4 || d == 4 || c == 4 || f == 4)
        printf("\n4.59.A) Yes, the number %d is included 4.\n", a);
    else
        printf("\n4.59.A) No, the number %d is not included 4.\n", a);
    if (e == b || d == b || c == b || f == b)
        printf("\n4.59.B) Yes, the number %d is included %d.\n", a, b);
    else
        printf("\n4.59.B) No, the number %d is not included %d.\n", a, b);

    e = 7227;
    printf("\n4.61. Numbers e = %d\n", e);
    a = e / 1000; //{Первая цифра}
    b = e % 1000 / 100; //{Вторая цифра}
    c = e % 100 / 10; //{Третья цирфа}
    d = e % 10; //{Четвертая цифра}
    if (a == d && b == c)
        printf("This number is a palindrome.\n");
    else
        printf("This number is not a palindrome.\n");

    e = 3554;
    a = e / 1000;
    b = e / 100 % 10;
    c = e / 10 % 10;
    d = e % 10;
    printf("\n4.63. a = %d, b = %d, c = %d, d = %d digits of the number e = %d.\n", a, b, c, d, e);
    if (a == b || a == c || a == d || b == c || b == d || c == d)
        printf("Some of digits of the number are equal.\n");
    else
        printf("Yes, all four digits are different.\n");

    int n = 2004;       //(n %400 == 0) || (n % 4 == 0 && n %100 != 0)
    printf("\n4.65. n = %d - year\n", n);
    if ((n % 4 != 0 || n % 100 == 0) && n % 400 != 0)
        printf("the year is not a leap year");
    else
        printf("the year is a leap year.\n");

    const int days_week = 7, work_days = 5; a = 35;
    b = (a - 1) % days_week;
    printf("\n4.67. a = %d the number of the day in the year. ", a);
    if (b < work_days)
        printf("Working day of the week.");
    else
        printf("Weekend.");

    const double grav_accel = 9.80665;
    double target_height = 5.0, target_size = 5.0, angle = pi / 6.0, speed = 27.5, distance = 50.0;
    printf("\n4.68. Book, figure 4.6.\n");
    printf("Trajectory for bullet, speed v0 = %.2f m/s, G-accel = %.2f m/s^2, "
        "alpha = %.2f rad, height = %.2f m, size of target = %.2f m, distance = %.2f m.\n",
        speed, grav_accel, angle, target_height, target_size, distance);
    double time1 = distance / (cos(angle) * speed);
    printf("Bullet time to fly distance %.2f t = distance / (speed * cos(angle) = %.2f.\n", distance, time1);
    double  traj_height = speed * time1 * sin(angle) - ((grav_accel * time1 * time1) / 2);
    printf("Trajectory height = %.2f. ", traj_height);
    if (traj_height > target_height && traj_height < target_height + target_size)
        printf("Yes, bullet hit the target.\n");
    else if (traj_height < target_height)
        printf("No, bullet hit lower than target.\n");
    else
        printf("No, bullet hit higher than target.\n");

    int pos_x1 = 3, pos_y1 = 2, sx1 = 6, sy1 = 7, pos_x2 = 3, pos_y2 = 3, sx2 = 4, sy2 = 2;
    printf("4.69. x1 = %d, y1 = %d, sx1 = %d,  sy1 = %d - sides of rects, "
        "x2 = %d, y2 = %d, sx2 = %d, sy2 = %d - pos x, pos y of rects.\n",
        x1, y1, sx1, sy1, x2, y2, sx2, sy2);
    if ((pos_x1 >= pos_x2) && (pos_x1 + sx1 <= pos_x2 + sx2) && (pos_y1 >= pos_y2)
        && (pos_y1 + sy1 <= pos_y2 + sy2))
        printf("A) First rectangle contains in second.\n");
    else
        printf("A) Firist rectangle not in second.\n");
    if (((pos_x1 >= pos_x2) && (pos_x1 + sx1 <= pos_x2 + sx2) && (pos_y1 >= pos_y2)
        && (pos_y1 + sy1 <= pos_y2 + sy2)) ||
        ((pos_x2 >= pos_x1) && (pos_x2 + sx2 <= pos_x1 + sx1) && (pos_y2 >= pos_y1)
            && (pos_y2 + sy2 <= pos_y1 + sy1)))
        printf("B) One of rectangle contains other.\n");
    else
        printf("B) Both rectangle not contains each other.\n");
    int is_x = 0, is_y = 0;
    if (pos_x1 <= pos_x2) {
        if (pos_x1 + sx1 >= pos_x2)
            is_x = 1;
    }
    else {
        if (pos_x2 + sx2 >= pos_x1)
            is_x = 1;
    }
    if (pos_y1 <= pos_y2) {
        if (pos_y1 + sy1 >= pos_y2)
            is_y = 1;
    }
    else {
        if (pos_y2 + sy2 >= pos_y1)
            is_y = 1;
    }
    if (is_x && is_y)
        printf("\nV) Yes, rectangles has common area.\n");
    else
        printf("\nV) No, rectangles has not common area.\n");





    x = 5.0; y = 7.7;
    if (x > y)
        printf("\n4.71.A) %.2f - is more than %.2f.\n", x, y);
    else
        printf("\n4.71.A) %.2f - is less than %.2f.\n", x, y);
    if (x > y)
        printf("\n4.71.B) %.2f - is more than %.2f.\n", x, y);
    if (x < y)
        printf("\n4.71.B) %.2f - is less than %.2f.\n", x, y);

    a = 3; b = 4; c = 7;
    printf("\n4.72. given 3 numbers find the largest and smallest n1 = %d, n2 = %d, n3 = %d.\n",
        a, b, c);
    if (a > b && a > c)
        printf("N1 = %d, is the largest number.\n", a);
    if (b > a && b > c)
        printf("N2 = %d, is the largest number.\n", b);
    if (c > b && c > a)
        printf("N3 = %d, is the largest number.\n", c);



    x = 5.55; y = 4.45;
    printf("\n4.75. x = %.2f, y = %.2f - real numbers.\n", x, y);
    if (x < 0)
        w = x * (-1.0);
    else
        w = x;
    if (y < 0)
        z = y * (-1.0);
    else
        z = y;
    double v = (w + z) / 2.0;
    printf("A) the half-sum of the abs values of numbers is %.2f.\n", v);
    v = pow((w * z), 0.5);
    printf("B) the square root of multiply abs values is %.2f.\n", v);

    a = -7; b = 5;
    printf("\n4.76-4.77. source numbers %d and %d: \n", a, b);
    if (abs(a) > b) { 
        a = a / 2;
        printf("4.76. Abs(first) is more than second number, first - half %d.\n", a);
    } else
        printf("4.76. Abs(first) is less than second number.\n");
    if (sqrt(b) < a) {
        b = b * 5;
        printf("4.77. The root of second number is less than first number, mult second x5 - %d.\n", b);
    } else 
        printf("4.77. The root of second number is more than first number.\n");
    
    x = 6.4;
    printf("\n4.78 - 4.80. x = %.2f.\n", x);
    if ((int)x % 2 == 0)
        printf("4.78. Integer part of number is even.\n");
    else 
        printf("4.78. Integer part of number is odd.\n");
    if (x > 0.0) {
        x = pow(x, 2.0);
        printf("4.79. The number is more than zero, to power 2 is %.2f.\n", x);
    } else 
        printf("4.79. The number is less than zero.\n");
    if (x > 1.6 && x < 3.8)
        printf("4.80. The number in range (1.6, 3.8).\n");
    else 
        printf("4.80. The number not in range (1.6, 3.8).\n");
   
    a = -2; b = 7; c = 3; d = 6;
    printf("\n4.81. Numbers: a = %d, b = %d, c = %d, d = %d.\n", a, b, c, d);
    f = (a < 0) + (b < 0) + (c < 0) + (d < 0);
    printf("4.81. Total %d negative numbers.\n", f);
    f = (a > 5 ) * a + (b > 5) * b + (c > 5) * c + (d > 0) * d ;
    printf("4.83. Summ of numbers more than 5 is %d.\n", f);
    

    a = -1;
    printf("\n4.85. To calculate the value of the function y(x).\n");
    if (a < -1) {
        b = -1;
        printf("Y(%d) = %d.\n", a, b);
    } else if (a = -1) {
        b = 1;
        printf("Y(%d) = %d.\n", a, b);
    } else {
        b = a;
        printf("Y(%d) = %d.\n", a, b);
    }



    printf("\n4.87. Calculate the value of the function b(a).\n");
    if (a <= 0)
        printf("1 case, b(%d) assigns the value 0.\n", a);
    else if (a <= 1 && a > 0)
        printf("2 case, b(%d) assigns the value 1.\n", a);
    else
        printf("3 case, b(%d) assigns the value %d.\n", a, a * a);

    x = 4.0 / 3.0 * pi;
    printf("\n4.90. Calculating the function y(w, x) and w(x).\n");
    if (sin(x) < 0) {
        printf("Sin(%.2f) = %.2f, get ABS(%.2f).\n", x, sin(x), x);
        y = fabs(x);
    } else {
        printf("Sin(%.2f) = %.2f, get POW(%.2f, 2.0).\n", x, sin(x), x);
        y = pow(x, 2.0);
    } 
    if (x >= y) {
        w = y * x;
        printf("x(%.2f) >= y (%.2f), result = y * x = %.2f.\n", x, y, w);
    } else {
        w = fabs(x);
        printf("x(%.2f) < y (%.2f), result = Fabs(x) = %.2f.\n", x, y, w);
    } 
    

    x = 0.8;
    printf("\n4.91. Figure: (4.7), x = %.2f.\n", x);
    if (x < -1.0)
        printf("A) y(x) = 0.0.\n");
    else if (x < 0.0)
        printf("A) y(x) = abs(x) = %.2f.\n", fabs(x));
    else
        printf("A) y(x) = 1.0.\n");
    if (x < -1.0)
        printf("B) y(x) = 1.0.\n");
    else if (x < 1.0)
        printf("B) y(x) = -1.0 * x = %.2f.\n", x * -1.0);
    else
        printf("B) y(x) = -1.0.\n");
    if (x < -1.0 || x > 1.0)
        printf("V) y(x) = 1.0.\n");
    else 
        printf("V) y(x) = 0.5 + abs(x/2.0) = %.2f.\n", 0.5 + fabs(x / 2.0));
    


    a = 3;
    printf("\n4.94. %d = a: the number of points received per game.\n", a);
    if (a == 3)
        printf("The team win.\n");
    else if (a == 0)
        printf("The team lost.\n");
    else  
        printf("The team played in a draw.\n");

    a = 195;
    printf("\n4.95. %d = a: athlete's weight in kg.\n", a);
    if (a <= 60)
        printf("Easy.\n");
    else if (a > 60 && a <= 64)
        printf("The first welterweight.\n");
    else if (a > 64 && a <= 69)
        printf("Welterweight.\n");
    else
        printf("The boxer does not fit into any category.\n");

    a = 1; b = 4; c = 5;
    d = a; 
    if (b > d)
        d = b;
    if (c > d)
        d = c;
    printf("\n4.103. Numbers: %d, %d, %d. Max = %d.\n", a, b, c, d);
   
    a = 11; b = 4;
    printf("\n4.108. Dignity: %d, Suit: %d.\n", a, b);
    switch (a) {
    case 6:
        printf("The Six ");
        break;
    case 7:
        printf("The Seven ");
        break;
    case 8:
        printf("The Eight ");
        break;
    case 9:
        printf("The Nine ");
        break;
    case 10:
        printf("Ten ");
        break;
    case 11:
        printf("Jack ");
        break;
    case 12:
        printf("Lady ");
        break;
    case 13:
        printf("King ");
        break;
    case 14:
        printf("Ace ");
        break;
        default: 
            printf("Some errors.\n");
    }
    switch (b) {
    case 1:
        printf("of spades.\n");
        break;
    case 2:
        printf("of diamonds.\n");
        break;
    case 3:
        printf("of clubs.\n");
        break;
    case 4:
        printf("of hearts.\n");
        break;
    }



    int a3 = 1, a2 = 2, a1 = 3, b2 = 9, b1 = 8, n1, n2, n3, m1, m2, m3;
    n1 = a3 * 100 + a2 * 10 + a1;
    n2 = b2 * 10 + b1;
    n3 = n1 + n2;
    m1 = a1 + b1;
    m2 = (a2 + b2) + (m1 / 10);
    m3 = (a3 + m2 / 10) % 10;       // остаток от деления только для страховки
    m1 %= 10;
    m2 %= 10;
    printf("\n4.118. Sum of digits for AAA + BB = NNN, %d%d%d + %d%d = %d, as digits %d - %d - %d.\n",
        a3, a2, a1, b2, b1, n3, m3, m2, m1);

    
     
    int v1, v2, v3, h1, h2, h3;
    v1 = 3; //("Координаты белой ладьи вертикаль")
    h1 = 4; //("Координаты белой ладьи горизонталь")
    v2 = 4; //("Координаты черной ладьи вертикаль")
    h2 = 6; //("Координаты черной ладьи горизонталь")
    v3 = 7; //("Координаты свободного поля вертикаль")
    h3 = 4; //("Координаты свободного поля горизонталь")
    printf("\n4.120.B) moving rook from %d:%d to %d:%d, threat from queen at %d:%d.\n",
        h1, v1, h3, v3, h2, v2);
    if ((v1 == v3 || h1 == h3)) {
        printf("Move rook correct and ");
        if (v2 == v3 || h2 == h3 || abs(v2 - v3) == abs(h2 - h3))
            printf("queen is threat.\n");
        else
            printf("queen is not threat.\n");
    } else
        printf("Move rook incorrect.\n"); 

    h1 = 2; v1 = 3; h3 = 1; v3 = 5; h2 = 3; v2 = 7;
    printf("\n4.120.I) moving knight from %d:%d to %d:%d, threat from knight at %d:%d.\n",
        h1, v1, h3, v3, h2, v2);
    if (abs(h1 - h3) == 2 && abs(v1 - v3) == 1 || abs(h1 - h3) == 1 && abs(v1 - v3) == 2) { 
        printf("Move knight correct and ");
        if (abs(h2 - h3) == 2 && abs(v2 - v3) == 1 || abs(h2 - h3) == 1 && abs(v2 - v3) == 2)
            printf("knight is threat.\n"); //"Конь({0},{1}) угрожает полю({2},{3})";
        else
            printf("knight is not threat.\n");
    } else
        printf("Move knight incorrect.\n");

    h1 = 4; v1 = 5; h3 = 4; v3 = 6; h2 = 2; v2 = 4;
    printf("\n4.120.S) moving king from %d:%d to %d:%d, threat from bishop at %d:%d.\n",
        h1, v1, h3, v3, h2, v2);
    if ((abs(h1 - h3) + abs(v1 - v3)) == 1 || (abs(h1 - h3) + abs(v1 - v3)) == 2) {
        printf("Move king correct and ");
        if (abs(h2 - h3) == abs(v2 - v3))
            printf("bishop is threat.\n"); 
        else
            printf("bishop is not threat.\n");
    }  else
        printf("Move king incorrect.\n");

    h1 = 1; v1 = 2; h3 = 6; v3 = 7; h2 = 6; v2 = 4;
    printf("\n4.120.E) moving queen from %d:%d to %d:%d, threat from rook at %d:%d.\n",
        h1, v1, h3, v3, h2, v2);
    if (((h1 == h3) || (v1 == v3)) || (abs(h1 - h3) == abs(v1 - v3))) {
        printf("Move queen correct and ");
        if ((v2 == v3 || h2 == h3))
            printf("rook is threat.\n"); 
        else
            printf("rook is not threat.\n");
    }  else
        printf("Move quen incorrect.\n");
    
    x = 4.0; y = 4.0; z = 4.0; w = 0.1;
    printf("\n4.122 - 4.124. x = %.2f, y = %.2f, z = %.2f - possible sides of the triangle, "
        "epsilon %.2f.\n", x, y, z, w);
    if ((x + y) > z && (x + z) > y && (y + z) > x) {
        printf("Triangle is exist, all sums of every 2 sides is more than other.\n");
        if (x == y && y == z)
            printf("The triangle is equilateral.\n");
        else if (x == z || z == y || x == y)
            printf("Triangle is isosceles, pair of sides are equal.\n");
        else
            printf("Triangle is scalene, all sides are different.\n");
        double g1 = pow(x, 2.0), g2 = pow(y, 2.0), g3 = pow(z, 2.0);
        if (g1 + g2 - g3 < w || g1 + g3 - g2 < w || g3 + g2 - g1 < w)
            printf("Triangle is rectangular, powers of 2 are: %.2f, %.2f, %.2f.\n", g1, g2, g3);
        else if ((x + y) > z && (x + z) > y && (y + z) > x)
            printf("Triangle has all acute-angles.\n");
        else
            printf("Triangle has at aleast one wide angles, it's obtuse.\n");
    }
    else
        printf("Triangle with these sides not exist.\n");

    a = 0;
    b = a % 10;
    if (b == 1 && a != 11)
        printf("\n4.126. My nashli %d(%d) grib.\n", a, b);
    else if ((b == 2 || b == 3 || b == 4) && a > 20)
        printf("\n4.126. My nashli %d(%d) griba .\n", a, b);   
    else
        printf("\n4.126. My nashli %d(%d) gribov.\n", a, b);
   

    a = 21;     //час прибытия поезда
    b = 5;     //минуты прибытия поезда
    c = 3;      //час отправления поезда
    d = 7;      //минуты отправления поезда
    n = 20;     //час прибытия пассажира
    int m = 7; //минуты прибытия пассажира
    printf("\n4.132. Train arrived at %02d:%02d and departs at %02d:%02d, passanger time %02d:%02d ", a, b, c, d, n, m);
    if ((n == a && m >= b) || (n == c && m < d))
        printf("in minutes, yes, train at platform.\n");
    else if ((n > a && n < c && a < c) || (a > c && (n > a || n < c)))
        printf("in hours, yes train at platform.\n");
    else
        printf("no train at platform.\n");
     
    enum Months { January = 1, February, March, April, May, June, July, August, September, October, November, December };
    const int months_per_year = 12;
    const int days_in_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int year = 2020, month = 2, day = 28, y_prev = 0, d_prev = 0, y_next = 0, d_next = 0, leap = 0, m_prev = 0, m_next = 0;
    printf("\n4.134. Year %d, month %d and day %d. ", year, month, day);
    if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0)) {
        leap = 1;
        printf("Leap year, using delta + 1 in February.\n");
    }
    else {
        leap = 0;
        printf("Not a leap year, using delta + 1 in February.\n");
    }
    d_prev = day - 1;
    d_next = day + 1;
    m_prev = m_next = month;
    y_prev = y_next = year;
    if (day == 1) {
        if (month == March)
            d_prev = days_in_month[February] + leap;
        else if (month == May || month == July || month == October || month == December)
            d_prev = days_in_month[April];
        else
            d_prev = days_in_month[December];
        printf("Day was 1, switch to previous month.\n");
        m_prev = ((months_per_year - (month - 1)) / months_per_year) * months_per_year + (month - 1);
        if (month == January) {
            printf("Month was January, switch to previous year.\n");
            y_prev = year - 1;
            if (y_prev == 0) {
                printf("Changing year scale to B.C.\n");
                y_prev = -1;
            }
        }
    }
    else {
        int l1 = (month == February && day == days_in_month[February] + leap);
        int l2 = ((month == April || month == June || month == September || month == November)
            && day == days_in_month[April]);
        int l3 = (day == days_in_month[January]);
        if (l1 || l2 || l3) {
            d_next = 1;
            printf("Day was last in month, switch to next.\n");
            m_next = ((month % months_per_year) + 1);
            if (month == December) {
                printf("Month was December, switch to next year.\n");
                y_next = year + 1;
                if (y_next == 0) {
                    printf("Changing year scale to A.D.\n");
                    y_next = 1;
                }
            }
        }
    }
    printf("Previous date year %d ", abs(y_prev));
    if (y_prev > 0)
        printf("A.D., ");
    else
        printf("B.C., ");
    printf("month %d, day %d.\n", m_prev, d_prev);
    printf("Next date year %d ", abs(y_next));
    if (y_next > 0)
        printf("A.D., ");
    else
        printf("B.C., ");
    printf("month %d, day %d.\n", m_next, d_next);
     
    a = 55;
    printf("\n4.135. Semaphore scheme G-Y-R = 3-1-2 minutes, at %d minute color is ", a);
    b = a % (3 + 1 + 2);
    if (b >= 4)
        printf("red.\n");
    else if (b >= 3)
        printf("yelow.\n");
    else
        printf("green.\n");

    
    a = 180;
    printf("\n4.137. sequence 10-11-12-...-98-99, all two-digits numbers, element %d is ", a);
    if (a % 2 == 0)
        b = (a - 1)  % (10 * 2) / 2;
    else
        b = a / (10 * 2) + 1;
    printf("%d.\n", b);

    a = 1; b = 5;
    printf("\n4.141. Summ of flat's numbers, starts from %d and limit %d, ", a, b);
    if (a == b) {
        if (a % 2 == 1)
            printf("is even.\n");
        else
            printf("is odd.\n");
    }
    else if ((b - a) % 2 == 1)
        printf("is even.\n");
    else
        printf("is odd.\n");
     
    
     

     // 10-11-12-13-14-15-16-17-18-19-20-21   
    //a = 22;
      //  if (a >= 1);
     //   else if (a <= 180);
   // b = ((a - 1) % 2) * ((a - 1) % 20) / 2 + (a % 2) * ((a / 20) + 1);
   // printf("1.137");
    

}