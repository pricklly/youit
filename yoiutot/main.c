#include <stdio.h>
#include <stdlib.h>
int mass[9]={234,34,2213,234,123,123,456,14,1234};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i;
int nf,ns,nt;
int main(int argc, char *argv[]) {
	return 0;

for(i=0;i<9;i++)
{

printf("%d ",mass[i]);
}
printf("\n");


printf("Enter three number\n ");
printf("Enter first\n");
scanf("%d",&nf);
printf("Enter second\n");
scanf("%d",&ns);
printf("Enter therd\n");
scanf("%d",&nt);

printf("Sum=%d\n",(nf+ns+nt));
printf("a-b+c=%d\n",(nf-ns+nt));
printf("(a-b)*c=%d\n",((nf-ns)*nt));

}