#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int main(){
    char *palavra;

    /* alocação dinâmica da string */
    if(!(palavra = malloc(sizeof(char)*100)))
        printf("ERRO");

    /* Imprime normal */
    /* fgets (palavra, SIZE+1, stdin) ;
    printf("String normal: \n %s \n", palavra); */

    /* Imprime ao contrário */
    fgets (palavra, SIZE, stdin) ;
    int i;
    for(i = strlen(palavra); i >= 0; i--)
        printf("%c", *(palavra+i));
    printf("\n");

    /* calcular o tamanho da string sem usar srtlen */
    int tam = 0;
    int j = 0;
    while(*(palavra+j) != '\0'){
        tam ++;
        j++;
    }
    printf("tamanho da string: %d \n", tam);

    /* Converter as letras de uma string em minúsculas*/
    int x;
    for (x=0; x < strlen (palavra); x++)
        if (palavra[x] >= 'a' && palavra[x] <= 'z')
            palavra[x] -= 32;  
    printf("%s\n", palavra);

    /* Ler linhas da entrada padrão e escrevê-las na saída padrão em ordem alfabética crescente */



    free(palavra);

    return 0;
}