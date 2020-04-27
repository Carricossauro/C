#include <stdlib.h>
#include <stdlib.h>

typedef struct entrada{
    char palavra[10];
    int ocorr;
    struct entrada *prox;
} *Palavras;

typedef Palavras Dicionario;

void initDic (Dicionario *d){
    *d = NULL;
}

int acrescentaFim (Dicionario *d, char *pal){
    // Quando a palavra não existe, acrescenta-a ao fim da lista
    // Outras alternativas são:
    // inserção ordenada (alfabética)
    // a célula onde está esta palavra passa sempre para o inicio da lista
    //...
    while (*d != NULL && (strcmp ((*d)->palavra,pal) != 0))
        d = &((*d)->prox);

    if (*d == NULL) {
        *d = malloc (sizeof (struct entrada));
        strcpy((*d)->palavra,pal);
        (*d)->ocorr = 1;
        (*d)->prox=NULL;
    } else (*d)->ocorr++;

    return (*d)->ocorr;
}

int acrescentaOrdem(Dicionario *d, char *pal){

    while (*d != NULL && (strcmp ((*d)->palavra,pal) < 0))
        d = &((*d)->prox);

    if (*d!=NULL && (strcmp ((*d)->palavra,pal) == 0))
        (*d)->ocorr++;
    else{
        Palavras nova = malloc(sizeof(struct entrada));
        strcpy(nova->palavra,pal);
        nova->ocorr = 1;
        nova->prox = *d;
        *d = nova;
    }
    return (*d)->ocorr;
}

int acrescentaInicio(Dicionario *d, char *pal){
    Palavras nova;
    Dicionario *inicio = d;

    while (*d != NULL && (strcmp ((*d)->palavra,pal) != 0))
        d = &((*d)->prox);

    if(*d!=NULL){
        (*d)->ocorr++;
        nova = *d;
        *d = (*d)->prox;
    }
    else{
        nova = malloc(sizeof(struct entrada));
        strcpy(nova->palavra,pal);
        nova->ocorr = 1;
    }
    nova->prox = *inicio;
    *inicio = nova;

    return (*inicio)->ocorr;
}

char *maisFreq (Dicionario d, int *c){
    int m = 0;
    char *pal = NULL;

    while(d!=NULL){
        if(d->ocorr > m){
            m = d->ocorr;
            pal = d->palavra;
        }
        d = d->prox;
    }

    *c = m;
    return pal;
}


int main() {
    Dicionario dic;
    int r, maisF;
    //char *pal;

    initDic(&dic);
    r = acrescentaInicio(&dic,"ProgImp");
    r = acrescentaInicio(&dic,"LCC");
    r = acrescentaInicio(&dic,"MIEI");
    r = acrescentaInicio(&dic,"LCC");

    //pal = maisFreq(dic,&maisF);

    return 0;
}