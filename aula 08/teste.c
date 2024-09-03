#define INICIOARRANJO 1
#define MAXTAM 1000

typedef int TipoChave;
typedef int TipoApontador;
typedef struct {
    TipoChave Chave;
    // outros componentes
} TipoItem;

typedef struct {
    TipoItem Item[MAXTAM];
    TipoApontador Primeiro, Ultimo;
} TipoLista;
// Inicializar

void Inicializar(TipoLista *Lista){
    Lista-> Primeiro = INICIOARRANJO;
    Lista-> Ultimo = Lista-> Primeiro;
}
// Verificar lista vazia
int Vazia(TipoLista Lista){
    return (Lista.Primeiro == Lista.Ultimo);
}
// Inserir elemento
void Insere(TipoItem x, TipoLista *Lista) {
    if (Lista-> Ultimo > MAXTAM)
        printf("Lista esta cheia\n");
    else{
        Lista-> Item[Lista-> Ultimo-1] = x;
        Lista-> Ultimo++;
    }
} 
// Retirar elemento
void Retira(TipoApontador p, TipoLista *Lista, TipoItem *Item) {
    int Aux;
    if (Vazia(*Lista) || p >= Lista -> Ultimo) {
    printf(" Erro Posicao nao existe\n");
    return;
}
    *Item = Lista -> Item[p - 1];
    Lista -> Ultimo--;
    for (Aux = p; Aux < Lista -> Ultimo; Aux++)
        Lista -> Item[Aux - 1] = Lista -> Item[Aux];
    }
// Imprimir elementos
void Imprime(TipoLista Lista){
    int Aux;
    for (Aux = Lista.Primeiro - 1; Aux <= (Lista.Ultimo - 1); Aux++)
        printf("%d\n", Lista.Item[Aux].Chave);
    }