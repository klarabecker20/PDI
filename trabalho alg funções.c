#include<stdio.h>
#include<string.h>
#include<locale.h>
float afim()
{
	float a,b,x,result;
	printf("diga o valor de a:");
	scanf("%f",&a);
	printf("diga o valor de b:");
	scanf("%f",&b);
	printf("diga o valor de x:");
	scanf("%f",&x);
	result=a*x+b;
	printf("\n o resultado da fun��o �:%f",result);
}
float quadratica()
{
	float a,b,c,x,result;
	printf("diga o valor de a:");
	scanf("%f",&a);
	printf("diga o valor de b:");
	scanf("%f",&b);
	printf("diga o valor de c:");
	scanf("%f",&c);
	printf("diga o valor de x:");
	scanf("%f",&x);
	result=a*(x*x)+b*x+c;
	printf("o resultado da fun��o �:%f",result);
}
float logaritmica()
{
	float a,x,base,result;
	printf("diga o valor da base");
	scanf("%f",&a);
	printf("diga o valor de x:");
	scanf("%f",&x);
	base=pow(a,x);
	printf("o resultado da fun��o �:%f",base);
}
float exponencial()
{
		float a,x,base;
	printf("diga o valor da base");
	scanf("%f",&a);
	printf("diga o valor de x:");
	scanf("%f",&x);
	base=pow(a,x);
	printf("o resultado da fun��o �:%f",base);
}
main()
{
	int i=0,op;
	char *fim;
	setlocale(LC_ALL, "Portuguese");
	printf("\t ol�!\n vamos aprender sobre fun��es!\n");
	printf("\n");
	printf("Fun��o � a regra que relaciona cada elemento de um conjunto (vari�vel x) e um unico elemento de outro conjunto (vari�vel y)");
	do 
	{
		printf("\n qual fun��o voc� deseja testar?");
		printf("\n digite:\n1-fun��o afim\n2-fun��o quadr�tica\n3-fun��o logar�tmica\n4-fun��o exponencial");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			{
				afim();
				break;	
			}
			case 2:
			{
				quadratica();
				break;
			}
			case 3:
			{
				logaritmica();
				break;
			}
			case 4:
			{
				exponencial();
				break;
			}
		}
		printf("\n voc� deseja continuar?");
		printf("%s",&fim);
	}
	while(fim!='sim');
}
