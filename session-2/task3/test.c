#include <stdio.h>
#include <string.h>

int main(void)
{
    int body = 1;
    int the = 5;
    float pist = 4.9;
    float ol = 3.9;
    int counter;
    char strcounter;
    counter = scanf("%d %d %f %f", &body, &the , &pist, &ol);
    strcounter = (char)counter;
    printf("%d", strcounter);
}