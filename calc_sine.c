#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


#define PI 3.14159265

void  main (int argc, char *argv[]){


FILE *fd1,*fd2;
double ang;
char *angle_file, *sine_file;

angle_file = (char*)malloc(sizeof(char)*strlen(argv[1]));
sine_file = (char*)malloc(sizeof(char)*strlen(argv[2]));

strcpy(angle_file,argv[1]);
strcpy(sine_file,argv[2]);

fd1 = fopen(angle_file,"r");
fd2= fopen(sine_file,"w");

fscanf(fd1,"%lf",&ang);
double val = PI/180;
double result = sin(ang*val);

fprintf(fd2,"%lf",result);

fclose(fd1);
fclose(fd2);


}
