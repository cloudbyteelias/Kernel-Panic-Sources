#include <stdlib.h>
#include <stdio.h>

#define ADD(x,y) x + y
#define SUB(x,y) x - y
#define MUL(x,y) x * y
#define DIV(x,y) x / y


int main(int argc, char const *argv[]){
    
    printf ("[%d] [%d] [%d] [%d]\n",ADD(5,5),SUB(10,5),MUL(5,5),DIV(10,2));
     
    return EXIT_SUCCESS;
}
