#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    long long int count;
    for( count=0; count <= 1000000; count++) 
    {
        nanl("1");
    }
   
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("nanl took %6.9f\n", secs);
    
}
