#include <stdio.h>
#include <string.h>
    

int main ()  {
 
int result[39];
int scelta;
int scelta2;

printf ("Inizio Test\n\n");  

printf("Quanto fa 2+2?:\n ");
printf("1) 4\n ");
printf("2) 6\n ");
printf("3) 8\n\n ");
scanf("%d", &scelta);

switch(scelta){
        case  1: 
			printf("4\n");
			result[0]=1;
        break; 
        case  2: 
			printf("6\n");
            result[0]=0;
        break;
        case  3: 
			printf("8\n"); 
            result[0]=0;
        break;
 }

printf("Quanto fa 6*7?:\n ");
printf("1) 46\n ");
printf("2) 42\n ");
printf("3) 43\n ");
scanf("%d", &scelta2);

switch(scelta2){
        case  1: 
			printf("46\n");
			result[1]=0;
        break; 
        case  2: 
			printf("42\n");
            result[1]=1;
        break;
        case  3: 
			printf("43\n"); 
            result[1]=0;
        break;
 }
 
     if ((result[0] == 1) && (result[1] == 1))
        printf ("La risposta è corretta\n");
    else
        printf ("La risposta è sbagliata\n");
 return 0; 
}
