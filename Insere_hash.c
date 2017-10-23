#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 127

Typedef Struct aluno{
 Char nome[80];
 Int matricula;
 Float cr;
 Struct aluno* prox;
} Aluno;

Typedef Aluno* Hash[N];

Aluno* insere(Hash tab, char* nome, int mat, float cr){
 Int h = hash(nome);
 Aluno* novo = (Aluno*) malloc(sizeof(Aluno));
 Strcpy(novo->nome,nome);
 novo->mat=cr;
 novo->cr=cr;
 novo->prox=tab[h];
 tab[h]=novo;
 Return novo;
}
