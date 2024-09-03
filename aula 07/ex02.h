typedef struct tad_cubo Cubo;

Cubo* criar_cubo(float valor);
//void criar_cubo(Cubo *c1);
void finaliza_cubo(Cubo *c1);
float retorna_aresta(Cubo *c1);
float face_area(Cubo *c1);
float area_total(Cubo *c1);
float volume_cubo(Cubo *c1);