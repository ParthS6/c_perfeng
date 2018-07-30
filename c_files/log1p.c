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
        log1p((double)(2));
    }
   
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("log1p took %6.9f\n", secs);
    
}
