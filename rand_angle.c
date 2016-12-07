#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (int argc, char ** argv){

FILE *fd;
time_t t;
srand((unsigned) time(&t));
double ang = rand() % 360;

fd = fopen("angle.txt","w");

fprintf(fd,"%lf",ang);

fclose(fd);

return 1;
}
