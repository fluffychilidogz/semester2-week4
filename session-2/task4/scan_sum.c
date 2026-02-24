
#include <stdio.h>

int main( void ) {

    // define suitable data
    char user;
    int a;
    int b;
    char opera;
    int answer;

    
    // use scanf to read from the terminal
    user = scanf("%d %c %d", &a, &opera, &b);

    // print the output from scanf and the data values
    
    if (opera == '+')
    {
        answer = a + b;
    }

    printf("%d\n", answer);


    return 0;
}