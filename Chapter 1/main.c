//
//  main.c
//  Chapter 1
//
//  Created by Sergey Chernyaev on 2023-12-25.
//

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

// 1.1
getting_started(void)
{
    printf("hello, world\n"); // prints character string || string constant
    printf("hello \\\\ world \n");
    return 0; // <- Removing it outputs an error message: Non-void fucntion does not return a value
}


// 1.2
fahrenheit_celcius_int(void)
{
    /* print Fahrenheit-Celcius table
        for fahr = 0, 20, ..., 300 */
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0; /* lower limit of the temperature table */
    upper = 300; /* upper limit of the temperature table */
    step = 20; /* step size */
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9; // (5/9) * (fahr - 32) will not work as int/int gives int => 5/9 = 0
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
    
    return 0;
}

// 1.2
fahrenheit_celcius_float(void)
{
    /* print Fahrenheit-Celcius table
        for fahr = 0, 20, ..., 300; floating-point version*/
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
    
    return 0;
}

// 1.2
fahrenheit_celcius_exercises(void)
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
    
    return 0;
}

// 1.2
celsius_farenheit_exercise(void)
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
    
    return 0;
}

// 1.3
fahrenheit_celsius_for(void)
{
    /* print Fahrenheit-Celcius table */
    int fahr;
    
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    return 0;
}

// 1.3
fahrenheit_celsius_for_reverse(void)
{
    /* print Fahrenheit-Celcius table */
    int fahr;
    
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    return 0;
}

// 1.4
fahrenheit_celsius_symbolic_constant(void)
{
    int fahr;
    
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    return 0;
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
    fahrenheit_celsius_symbolic_constant();
    
    return 0;
}
