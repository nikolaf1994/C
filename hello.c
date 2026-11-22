#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

string name;

void increment(int *x) {
    *x = *x + 1;
}

void swap(int *a, int *b) {

    
    int* t;
    t = malloc(sizeof(int));
    *t = *a;
    *a = *b;
    *b = *t;

}


int main(void) {    
    // string s = "Hello";

    int a = 1;
    char c = 'a';
    int *b = &a;
    char *d = &c;

    printf("a: %d\n", a);
    printf("b: %p\n", (void*) b);   
    printf("*b: %d\n", *b);
    printf("c: %c\n", c);
    printf("d: %p\n", (void*) d);
    printf("*d: %c\n", *d);


    int f = 5;
    printf("f: %d\n", f);
    b = &f;
    *b = 10;

    

    int x = 7;
    increment(&x);
    printf("x: %d\n", x);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Memory address: %p\n", &s[i]);
    // }

    int a1 = 1;
    int b1 = 2;
    
    printf("a1: %d, b1: %d\n", a1, b1);

    swap(&a1, &b1);

    printf("a1: %d, b1: %d\n", a1, b1);
    
}
        
  
    
 


