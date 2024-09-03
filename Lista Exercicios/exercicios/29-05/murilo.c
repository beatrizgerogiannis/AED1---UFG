#include <stdio.h>
#include <stdlib.h>

struct No{
  int id;
  struct No* prox;
};

typedef struct No No;


typedef struct{
  No* ini;
  No* fim;
  
}Lista;

No* alocaNo(){
  No* p = (No*)malloc(sizeof(No));
  p->prox = NULL;
  return p;
}

Lista* iniLista(){
  Lista* lista;
  lista = (Lista*)malloc(sizeof(Lista));
  lista->ini = NULL;
  lista->fim = NULL;
  
  return lista;
}

int Tam_lista(Lista* lista){
  if(lista->ini ==  NULL){
    return 0;
  }
  else{
    No* aux = lista->ini;
    int tam=0;
    while(aux != NULL){
      tam++;
      aux = aux->prox;
    }
    return tam;
  }
}


void insereListaIni(Lista* lista, int id){
  No* p = alocaNo();
  p->id = id;
   if(lista->ini == NULL){
     lista->ini = p;
     lista->fim = p;
     
   }
  else{
    p->prox = lista->ini;
    lista->ini = p;
    
  }
   
}

void insereListaFim(Lista *lista, int id){
  No* p = alocaNo();
  p->id = id;
   if(lista->ini == NULL){
     lista->ini = p;
     lista->fim = p;
     
   }
  else{
    lista->fim->prox = p;
    lista->fim = p;
    
  }
}

void insereLista(Lista *lista, int id, int pos){
  int tam = Tam_lista(lista);
  No* p = alocaNo();
  p->id = id;
  if(pos > tam+1 || pos <= 0){
    printf("\nPosição não esta no dominio");
  }
  else{
    if(pos == 1){
      p->prox = lista->ini;
      lista->ini = p;
    }
    else if(pos == tam+1){
      lista->fim->prox = p;
      lista->fim = p;
    }
    else{
      No* aux = lista->ini; 
      int t = 0;
      while(t != pos-2){
        aux = aux->prox;
        t++;
      }
      p->prox = aux->prox;
      aux->prox = p;
    }
    
    
  }
}

void imprimeLista(Lista* lista){
  if(lista->ini == NULL){
    printf("Lista vazia");
  }
  else{
    No* aux;
    aux = lista->ini;
    while(aux != NULL){
      printf("-%d-", aux->id);
      aux = aux->prox;
    }
  }
}

int verificaVetor(int id,int *vetor, int *tam){

  
  for(int i = 0; i < (*tam); i++){
    if(vetor[i] == id){
      return 1;
    }
  }
  vetor[*tam] = id;
  (*tam)++;
  return 0;
}

void removeee(Lista *lista, int id){
  No* aux = lista->ini;

  while(aux != NULL){
    if(aux->id == id && aux == lista->ini){
      No *p = lista->ini;
      lista->ini = lista->ini->prox;
      free(p);
      aux = lista->ini;
    }
    else if(aux->id == id && aux == lista->fim){
      No* aux3 = lista->ini;
      while(aux3->prox != lista->fim){
        aux3 = aux3->prox;
      }
      aux3->prox = NULL;
      free(lista->fim);
      lista->fim = aux3;
      aux = NULL;
      
    }
    else{
      if(aux->id == id){
        No* aux2 = lista->ini;
        while(aux2->prox != aux){
          aux2 = aux2->prox;
        }
        aux2->prox = aux->prox;
        free(aux);
        aux = aux2;
         
      }
      aux = aux->prox; 
    }
    
    
  }
}

void imprimevetor(int *vetor, int tam){
  printf("\n");
  for(int i = 0; i<tam;i++){
    printf(" %d ",vetor[i]);
  }
}

void removeRepetido(Lista* lista){
  if(lista->ini == NULL){
     printf("lista Vazia");
  }
  else{
    int capacidade = Tam_lista(lista);
    int valores[capacidade];
    int valoresrepetidos[capacidade];
    int tam = 0;
    int tam_rep = 0;
    No* aux = lista->ini;
    int verifica;

    while(aux != NULL){
      verifica = verificaVetor(aux->id, valores, &tam);
      if(verifica == 1){
         verifica = verificaVetor(aux->id, valoresrepetidos, &tam_rep);
      }
      aux = aux->prox;
    }
    imprimevetor(valores, tam);
    imprimevetor(valoresrepetidos, tam_rep);
    for(int i = 0; i < tam_rep; i++){
      removeee(lista, valoresrepetidos[i]);
    }
  }
}

int main(void) {
  
  Lista *lista;
  lista = iniLista();
  insereListaIni(lista, 1);
  insereListaIni(lista, 1);
  insereListaIni(lista, 1);

  imprimeLista(lista);
  
  insereListaFim(lista, 1);
  insereListaFim(lista, 1);
  printf("\n");
  insereListaFim(lista, 1);
  
  imprimeLista(lista);
  
  insereLista(lista, 1, 1);
  printf("\n");
  
  imprimeLista(lista);
  
  insereLista(lista, 1, 1);
  insereLista(lista, 1, 1);
  insereLista(lista, 1, 1);
  insereLista(lista, 1, 1);
  insereLista(lista, 1, 1);
  printf("\n");
  
  imprimeLista(lista);
  
  removeRepetido(lista);
  printf("\n");
  
  imprimeLista(lista);
  

  return 0;
}