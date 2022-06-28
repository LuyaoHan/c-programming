#include <stdio.h>

void main() 
{
    FILE *fp = fopen("gnuplot", "w+");
    fprintf(gnuplot, "plot '-' \n");
    fclose(fp);


}