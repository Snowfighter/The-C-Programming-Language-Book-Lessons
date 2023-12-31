//
//  main.c
//  Chapter 1
//
//  Created by Sergey Chernyaev on 2023-12-25.
//

#include <stdio.h>
#include <limits.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

// 1.1
getting_started(void)
{
    printf("hello, world\n"); // prints character string || string constant
    printf("hello \\\\ world \n");
    return 0; // <- Removing it outputs an error message: Non-void fucntion does not return a value -> should make it void
}


// 1.2
void fahrenheit_celcius_int(void)
{
    /* print Fahrenheit-Celcius table
        for fahr = 0, 20, ..., 300 */
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0; /* lower limit of the temperature table */
    upper = 300; /* upper limit of the temperature table */
    step = 20; /* step size */
    
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9; // (5/9) * (fahr - 32) will not work as int/int gives int => 5/9 = 0
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

// 1.2
void fahrenheit_celcius_float(void)
{
    /* print Fahrenheit-Celcius table
        for fahr = 0, 20, ..., 300; floating-point version*/
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0; /* lower limit of the temperature table */
    upper = 300; /* upper limit of the temperature table */
    step = 20; /* step size */
    
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0); // (5/9) * (fahr - 32) will not work as int/int gives int => 5/9 = 0
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

// 1.2
void fahrenheit_celcius_exercises(void)
{
    /* print Fahrenheit-Celcius table
        for fahr = 0, 20, ..., 300; floating-point version*/
    
    printf("Fahrenheit-Celcius table\n");
    
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0; /* lower limit of the temperature table */
    upper = 300; /* upper limit of the temperature table */
    step = 20; /* step size */
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0); // (5/9) * (fahr - 32) will not work as int/int gives int => 5/9 = 0
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

// 1.2
void celsius_farenheit_exercise(void)
{
    printf("Celsius-Fahrenheit Table\n");
    
    float celsius, fahrenheit;
    int upper, lower, step;
    
    lower = -100;
    upper = 100;
    step = 2;
    
    celsius = lower;
    while (celsius <= upper)
    {
        fahrenheit = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
}

// 1.3
void fahrenheit_celsius_for(void)
{
    /* print Fahrenheit-Celcius table */
    int fahr;
    
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

// 1.3
void fahrenheit_celsius_for_reverse(void)
{
    /* print Fahrenheit-Celcius table */
    int fahr;
    
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

// 1.4
void fahrenheit_celsius_symbolic_constant(void)
{
    int fahr;
    
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}


// 1.5
// 1.5.1
void copy_input_output_v1(void)
{
    /* copy input to output; 1st version */
    int c;
    
    c = getchar();
    printf("%d\n", c);
    while (c != EOF) // EOF used to be a character in very old systems. Now, Ex: macOS, it is Control-D
    {
        putchar(c);
        c = getchar();
    }
}

// 1.5.1
void copy_input_output_v2(void)
{
    /* copy input to output; 2nd version */
    int c;
    
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}

// 1.5.1 Ex: 1-6
void verify_eof(void)
{
    /* copy input to output; 2nd version */
    int c;
    
    c = getchar() != EOF; // if a character -> 1: 1 is not EOF -> truth (1); Control-D -> 0; Control-D is EOF -> false (0);
    printf("%d\n", c);
}

// 1.5.1 Ex: 1-7
void print_eof(void)
{
    int c;
    
    c = getchar();
    
    if (c == EOF)
    {
        putchar(c); // EOF is represented as a character in octal escape sequence \377 -> -1 in int notation
        printf("\n");
        printf("%d\n", c); // EOF will be printed as -1
    }
}

// 1.5.2
void count_characters_input_v1(void)
{
    /* count characters in input; 1st version */
    
    long nc;
    
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}

// 1.5.2
void count_characters_input_v2(void)
{
    /* count characters in input; 2nd version */
    
    double nc;
    
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}

main(void) {
    // 1.1
    // getting_started();
    
    // 1.2
    // fahrenheit_celcius_int();
    // fahrenheit_celcius_float();
    // fahrenheit_celcius_exercises();
    // celsius_farenheit_exercise();
    
    // 1.3
    // fahrenheit_celsius_for();
    // fahrenheit_celsius_for_reverse();
    
    // 1.4
    // fahrenheit_celsius_symbolic_constant();
    
    // 1.5
    // 1.5.1
    // copy_input_output_v1();
    // copy_input_output_v2();
    // verify_eof();
    // print_eof();
    //
    // 1.5.2
    // count_characters_input_v1();
    // count_characters_input_v2();
    
    return 0;
}
