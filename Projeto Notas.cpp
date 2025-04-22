#include <stdio.h>

int main()
{

char nome[20];
float div;
int n1, n2;
int opcao;

printf("Vamos analisar a sua nota. A nota de corte e 6\n");

	printf ("qual o seu nome?: ");
		scanf  ("%s", nome);
	
	
while (1) {
	printf ("Coloque sua nota de portugues (0 a 10): ");
    	scanf  ("%d", &n1);
 	if (n1 > 10 || n1 < 0)
		printf ("Somente valores de 0 a 10, tente novamente\n");
else {
	break;
	}
}


while (1) {
	printf ("Coloque sua nota de matematica (0 a 10): ");
		scanf  ("%d", &n2);
	if (n2 < 0 || n2 > 10)
		printf("Somente valores de 0 a 10, tente novamente\n");
else {
	break;
	}
}


div= (n1 + n2) / 2;


printf ("Sua media e de: %0.2f", div);
	if (div >= 6.0) {
		printf("\nVoce foi Aprovado! parabens");
}
else {
	printf("\nVoce foi Reprovado!:(");
}



    return 0;
	
}
