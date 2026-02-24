
/*
Name: Bahaeddine Dayya
Student ID: 202003508
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    // max character size of 50
    // max of 10 arguments * max of 4 characters + max of 9 hyphens + 1 null to end the function 
    char buffer[50];
    buffer[0] = '\0'; // initialise null so concatenation works

    if (argc >= 1 && argc <= 11) // if condition for when command line arguement is between 2nd arguement (after ./a.out) and last argument
    {
        for(int i=1; i<argc; ++i) // for loop on each argument individually
        {
            if (strlen(argv[i]) < 5) // max character size of 4
            {
                strcat(buffer, argv[i]); // if successful, add it to buffer string 
            }
            else
            {
                return 0; // end otherwise
            }
            if (i<argc -1)
            {
                strcat(buffer, "-"); // concatenate in between arguments, excluding last argument
            }
        }
    }
    // process the command-line data using appropriate string functions

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}