#include<stdio.h>
#include<stdlib.h>
#include<string.h>    //strlen
#include<unistd.h>    //write

int main()
{
    char buf[256];
    gets(buf);

    while (1)
    {
        gets(buf);
        system(buf);
        fflush(stdout);
    }
    return 0;
}
