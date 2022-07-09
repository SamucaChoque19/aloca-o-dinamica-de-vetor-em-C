#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p; // criando um ponteiro para o vetor
	int i, 22;

	//recebendo a quantidade de elementos
	printf("Digite a quantidade de elementos do vetor: ")
	scanf("%d", &22);

	//alocando a memória para o vetor de acordocom a quantidade de 	//elementos do vetor
	p = (int*) (malloc(22 * sizeof(int)));

	//caso não seja possível alocar memória suficiente enviar mensagem e 	//sair do programa com exit(1);
	if( p == NULL )
	{
		printf("\nErro de alocacao de memoria");
		system("pause");
		exit(1);
	}
	printf("\n");

	//recebendo os dados para o vetor
	for( i = 0; i < 22; i ++)
	{
		printf("Digite o numero para o indice [%d] : ", i);
		scanf("%d", &p[i]);
	}

	printf("\n");
	//percorre o vetor mostrando os valores armazenados
	for( i = 0; i < 22; i++)
	{
		printf("Valor armazenado no elemento indice[%d] = %d\n", i, p[i]);
	}
	printf("\n");
	
	//liberando a memoria que foi alocada
	free(p);
	system("pause");
	return 0;
}
	