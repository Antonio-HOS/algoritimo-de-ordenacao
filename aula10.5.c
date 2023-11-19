#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho=0;
    int suporte;
    printf("digite a quantidade de valores aleatorios que voce deseja e eu te mostrarei em forma decrescente\n");

    
    scanf("%i", &tamanho);
    if(tamanho<=0){
        printf("ouve um problema serissimo, digite um numero maior que zero");
        return 1;
    }
    int arr[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        arr[i]=rand()%1000;
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("%i \n",arr[i]);
    }

    printf("-----------AGORA ORDENADOS----------- \n");


for (int v = tamanho; v > 0; v--)
{


    for (int i = 0; i < tamanho-1; i++)
    {
        if(arr[i]>arr[i+1]){
            suporte=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=suporte;
        }

    }

    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("%i \n",arr[i]);
    }

    
    
    
    return 0;
}
