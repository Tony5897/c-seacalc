#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[]) 
{
    float valueOne;
    float valueTwo;
    char operator;
    float answer;

    printf("Enter Here:\n\n");
    scanf("%f %c %f", &valueOne, &operator, & valueTwo);

    switch(operator)
        {
        case '/': answer = valueOne/valueTwo;
            break;
        case '*': answer = valueOne*valueTwo;
            break;
        case '+': answer = valueOne+valueTwo;
            break;
        case '-': answer = valueOne-valueTwo;
            break;
        case '^': answer = pow(valueOne,valueTwo);
            break;
        case ' ': answer = sqrt(valueTwo);
            break;
        default: goto fail;
        }
    printf("%.9g%c%.9g = %.6g\n\n",valueOne, operator, valueTwo, answer);
    goto exit;
    fail:
    printf("Invalid Calculation.\n");
    exit:
    return 0;

}

/* Quick test run and generally, reviewing the 
many fundamentals of the C Programming langauge */