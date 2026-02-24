
/*
Name: Bahaeddine Dayya
Student ID: 202003508
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[9 * 4 + 8 + 1];
    buffer[0] = '\0';
    if (argc >= 1 && argc <= 10)
    {
        for(int i=1; i<argc; ++i)
        {
            if (strlen(argv[i]) < 5)
            {
                strcat(buffer, argv[i]);
            }
            else
            {
                return 0;
            }
            if (i<argc -1)
            {
                strcat(buffer, "-");
            }
        }
    }
    // process the command-line data using appropriate string functions

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}