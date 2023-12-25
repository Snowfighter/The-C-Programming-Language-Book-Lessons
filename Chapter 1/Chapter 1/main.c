//
//  main.c
//  Chapter 1
//
//  Created by Sergey Chernyaev on 2023-12-25.
//

#include <stdio.h>

getting_started(void)
{
    printf("hello, world\n"); // prints character string || string constant
    printf("hello \\\\ world \n");
    return 0; // <- Removing it outputs an error message: Non-void fucntion does not return a value
}

main(void) {
    getting_started();
    return 0;
}
