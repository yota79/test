#include <stdio.h>
#include <string.h>
    

int main ()  {
 
int result[39];
int domanda1;
int domanda2;

printf ("Inizio Test\n\n");  

printf("How many instances of a specific Alfresco susbsystem can a server have running at any time?\n ");
printf("1) One\n ");
printf("2) Two\n ");
printf("3) No morethan\n ");
printf("4) There is no restriction\n\n ");
scanf("%d", &domanda1);


switch(domanda1){
        case  1: 
//			printf("One\n");
			result[0]=0;
        break; 
        case  2: 
//			printf("Two\n");
            result[0]=0;
        break;
        case  3: 
//			printf("No morethan\n"); 
            result[0]=0;
        case  4: 
//			printf("There is no restriction\n"); 
            result[0]=1;
        break;
 }

printf("Alfresco Enterprise Edition is recommended for:\n ");
printf("1) highly technical developers on\n ");
printf("2) mission critical production environments \n ");
printf("3) those wishing to explore new Alfresco features\n ");
printf("4) small systems only with less than 100 users\n\n ");
scanf("%d", &domanda2);

switch(domanda2){
        case  1: 
//			printf("highly technical developers on\n");
			result[1]=0;
        break; 
        case  2: 
//			printf("mission critical production environments\n");
            result[1]=1;
        break;
        case  3: 
//		    printf("those wishing to explore new Alfresco features\n"); 
            result[1]=0;
        break;
        case  4: 
//			printf("small systems only with less than 100 users\n"); 
            result[1]=0;
        break;
 }
 
     if ((result[0] == 1) && (result[1] == 1))
        printf ("Le risposte sono corrette\n");
    else
        printf ("Una delle 2 o tutte e 2 le risposte sono sbagliate!!\n");
 return 0; 
}
