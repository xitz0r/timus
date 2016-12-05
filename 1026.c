#include <stdlib.h>
#include <stdio.h>

typedef struct lista{
    int n, qtd;
    struct lista *prox;
}Lista;

Lista* inserir(Lista *l, int x){
    Lista *aux = l, *anterior = NULL, *novo;
    if (l == NULL){
        l = (Lista*)malloc(sizeof(Lista));
        l->n = x;
        l->qtd = 1;
        l->prox = NULL;
    }
    else{
        while((aux != NULL) && (x > aux->n)){
            anterior = aux;
            aux = aux->prox;
        }
        if((aux != NULL) && (aux->n == x)){
            aux->qtd++;
        }
        else if (anterior == NULL){
            novo = (Lista*)malloc(sizeof(Lista));
            novo->qtd = 1;
            novo->n = x;
            novo->prox = l;
            l = novo;
            }
        else{
            novo = (Lista*)malloc(sizeof(Lista));
            novo->qtd = 1;
            novo->n = x;
            novo->prox = aux;
            anterior->prox = novo;
        }
    }
    return l;
}

void procurar(Lista* l, int x){
    Lista *aux = l;
    while(x > aux->qtd){
        x-= aux->qtd;
        aux = aux->prox;
    }
    printf("%i\n", aux->n);
}

int main(){
    int n, k, numero, i;
    char lixo[4];
    Lista *l = NULL;
    scanf("%i", &n);
    for(i = 0; i<n; i++){
        scanf("%i", &numero);
        l = inserir(l, numero);
    }
    scanf("%s", lixo);
    scanf("%i", &k);
    for(i = 0; i<k; i++){
        scanf("%i", &numero);
        procurar(l, numero);
    }
    return 0;
}
