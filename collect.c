#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>



void  main (int argc, char *argv[]){


FILE *fd1,*fd2,*fd3;
double s,c;
char *sineres, *cosineres, *res;

 
sineres = (char*)malloc(sizeof(char)*strlen(argv[1]));
cosineres = (char*)malloc(sizeof(char)*strlen(argv[2]));
res = (char*)malloc(sizeof(char)*strlen(argv[3]));

strcpy(sineres,argv[1]);
strcpy(cosineres,argv[2]);
strcpy(res,argv[3]);

fd1 = fopen(sineres,"r");
fd2 = fopen(cosineres,"r");
fd3 = fopen(res,"w");

fscanf(fd1,"%lf",&s);
fscanf(fd2,"%lf",&c);
double result = pow(s,2)+pow(c,2);

fprintf(fd3,"%lf",result);

fclose(fd1);
fclose(fd3);


}
