#include <stdio.h>
#include <stdlib.h>

//////////////// LISTA ENLAZADA ////////////////
typedef struct N { int d; struct N* s; } N;
N* addLista(N* l, int x){ N* n=malloc(sizeof(N)); n->d=x; n->s=l; return n; }
void verLista(N* l){ for(;l;l=l->s) printf("%d ", l->d); printf("\n"); }

//////////////// PILA //////////////////////////
typedef struct { int a[50], t; } Pila;
void push(Pila* p, int x){ p->a[++p->t]=x; }
int pop(Pila* p){ return p->a[p->t--]; }

//////////////// COLA //////////////////////////
typedef struct { int a[50], f, r; } Cola;
void enq(Cola* c,int x){ c->a[c->r++]=x; }
int deq(Cola* c){ return c->a[c->f++]; }

//////////////// ÁRBOL //////////////////////////
typedef struct A{ int d; struct A *i,*d2; } A;
A* insA(A* r,int x){
    if(!r){ r=malloc(sizeof(A)); r->d=x; r->i=r->d2=NULL; }
    else if(x<r->d) r->i=insA(r->i,x);
    else r->d2=insA(r->d2,x);
    return r;
}
void inorder(A* r){ if(r){ inorder(r->i); printf("%d ",r->d); inorder(r->d2); } }

//////////////// HASH //////////////////////////
#define H 5
typedef struct HN{ int k; struct HN* s; } HN;
HN* tab[H];
int h(int k){ return k%H; }
void insH(int k){
    int p=h(k); HN* n=malloc(sizeof(HN));
    n->k=k; n->s=tab[p]; tab[p]=n;
}

//////////////// GRAFO //////////////////////////
typedef struct GN{ int d; struct GN* s; } GN;
GN* g[5];
void arista(int o,int d){ GN* n=malloc(sizeof(GN)); n->d=d; n->s=g[o]; g[o]=n; }

////////////////////////////////////////////////
int main(){
    // LISTA
    N* L=NULL; L=addLista(L,3); L=addLista(L,2); L=addLista(L,1);
 printf("Lista: "); verLista(L);

    // PILA
    Pila p={.t=-1}; push(&p,10); push(&p,20);
  printf("Pop pila: %d\n", pop(&p));

    // COLA
    Cola c={0}; enq(&c,5); enq(&c,6);
   printf("Dequeue cola: %d\n", deq(&c));

    // ARBOL
    A* r=NULL; r=insA(r,8); insA(r,3); insA(r,10);
  printf("Inorder arbol: "); inorder(r); printf("\n");

    // HASH
    insH(12); insH(7); insH(17);
    printf("Tabla hash:\n");
for(int i=0;i<H;i++){
          printf("[%d]: ",i);
    for(HN*t=tab[i];t;t=t->s) printf("%d ",t->k);
         printf("\n");
    }

    // GRAFO
      arista(0,1); arista(0,2); arista(1,3);
    printf("Grafo:\n");
     for(int i=0;i<5;i++){
printf("%d: ", i);
         for(GN*t=g[i];t;t=t->s) printf("%d ", t->d);
        printf("\n");
    }

    return 0;
}
