#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct tabPer
{
     char simbAtom[2];
     int valorAtom;
}TabPer;


typedef struct Lista
{
    TabPer *elemento;
    struct Lista *prox;
}celula;

typedef celula *Lista;
void inserir(celula *ptr, TabPer *p)
{
    if( ptr == NULL)
    {
             printf("Lista vazia ");
			 return 0;
    }
  celula *novo;
  novo = malloc(sizeof(celula));
  novo->elemento= p;
  novo->prox = ptr->prox;
  ptr->prox = novo;

}

celula *inserir_inicio(celula **topo, TabPer *p )
{
     celula *novo;
     novo = malloc(sizeof(celula));
     novo->elemento= p;
     if(*topo == NULL)
     {
         novo->prox = NULL;
         *topo = novo;
         return novo;
     }
     else
     {
         novo->prox =*topo;
         *topo=novo;
         return novo;
     }
}

celula *remover_ini(celula *topo)
{
    celula *lixo = topo;
    if(lixo == NULL)
    {
        printf("Lista vazia");
    }
    else
    {
        topo = topo->prox;
        printf("Elemento a ser excluido: %c", 10);
        printf("Símbolo: %s | Valor: %d \n",lixo->elemento->simbAtom, lixo->elemento->valorAtom);
        free(lixo);
    }
    return topo;

}

void remover(celula *topo)
{
    if(topo->prox == NULL)
    {
        celula *aux;
        aux = topo->prox;
        free(topo);
    }
    celula *lixo;
    lixo = topo->prox;
    topo->prox = lixo->prox;
    free(lixo);
}

void printar(celula *topo)
{
    celula *aux = topo;
    if(aux == NULL)
    {
         printf("vazio");
    }
    else
    {
          do
          {
                 printf("Simbolo Atômico: %s | Número atômico: %d \n",aux->elemento->simbAtom, aux->elemento->valorAtom);
                 printf("-------------------------- \n");
                 aux= aux->prox;

          }while(aux != NULL);
    }
}

int main()
{
    Lista topo = NULL;
    TabPer p1, p2, p3, p4, p5; 
    TabPer p;
    TabPer *info_removida;
    int menu = 1;

	p1.valorAtom = 89;
	strcpy(p1.simbAtom, "La");

	p2.valorAtom = 90;
	strcpy(p2.simbAtom, "Th");
   
    p3.valorAtom = 20;
    strcpy(p3.simbAtom, "Ca");
   
    p4.valorAtom = 79;
    strcpy(p4.simbAtom, "Ac");
   
    p5.valorAtom = 112;
    strcpy(p5.simbAtom, "Uub");
    
    while ( menu != 0) 
    {
        printf(
        "\n-----------------------------------------------------\n"
        "Selecione opcao que deseja, veja nosso menu:\n"
        "-----------------\n"
        "0 - Sair \n"
        "1 - Inserir no Inicio\n"
        "2 - Inserir \n"
        "3 - Exibir \n"
        "4 - Remover \n"
        "5 - Remover no Inicio\n"
        "-----------------\n"
        "0 - SAIR DO PROGRAMA.\n"
        "-----------------\n"
        );
        scanf("%d", &menu);
        switch (menu)
        {

            case 0:
                printf("Voce fechou.");
            break;
            case 1:
                inserir_inicio(&topo, &p1);
                inserir_inicio(&topo, &p2);
                inserir_inicio(&topo, &p3);
                inserir_inicio(&topo, &p4);
                inserir_inicio(&topo, &p5);
                
            break;
            case 2:
                inserir(topo, &p1);
                inserir(topo, &p2);
                inserir(topo, &p3);
                inserir(topo, &p4);
                inserir(topo, &p5);
            break;
            case 3:
                printar(topo);
            break;
            case 4:
              topo = remover_ini(topo);
            break;
            case 5:
                remover(topo);
            break;
            default:
                printf("Opcao inexistente.");
             break;
            }
       }
       return 0;
   }

