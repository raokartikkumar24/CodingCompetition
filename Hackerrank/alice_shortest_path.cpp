#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#define MAXN 5005
#define INF 10000000

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int n, m;
int adjMatrix [MAXN][MAXN];
int qq [MAXN];
int res [MAXN];

int min(int a, int b)
{
    return a < b?a:b;
}

struct Node {
   int data;
   struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void Enqueue(int x) {
   struct Node* temp =
      (struct Node*)malloc(sizeof(struct Node));
   temp->data =x;
   temp->next = NULL;
   if(front == NULL && rear == NULL){
      front = rear = temp;
      return;
   }
   rear = rear->next ;//= temp;
   front = temp;
}

void Dequeue() {
   struct Node* temp = front;
   if(front == NULL) {
      return;
   }
   if(front == rear) {
      front = rear = NULL;
   }
   else {
      front = front->next;
   }
   free(temp);
}

int Front() {
   if(front == NULL) {
      return 0;
   }
   return front->data;
}

void reset(){
    front = NULL;
    rear  = NULL;
    return;
}

int dist [MAXN];
void bfs(int src){
    int u, i;
    reset();

    for(i=0;i<MAXN;i++){
        dist[i] = INF;
    }

    dist[src] = 0;

    Enqueue(src);

    while(front != NULL){
        u = Front();

        Dequeue();

        for(i = 0; i < n;i++){
            if(dist[i] > dist[u] + adjMatrix[u][i]){
                dist[i] = dist[u] + adjMatrix[u][i];
                Enqueue(i);
            }
        }
    }
    return;
}

int main(){

    int u, v, w, q, d, i;

    for(u=0;u<MAXN;u++){
        for(v=0;v<MAXN;v++){
            adjMatrix[u][v] = INF;
        }
    }

    scanf("%d %d", &n, &m);


    for(i=0;i<m;i++){
        scanf("%d %d %d", &u, &v, &w);
        adjMatrix[u][v] = min(adjMatrix[u][v],w); //this line is changed
        //taking minimum distance
    }

    scanf("%d %d", &d, &q);
    for(i=0;i<q;i++){
        scanf("%d", &qq[i]);
    }

     bfs(d);//start the bfs from the destination
    for(i=0;i<q;i++){
       
        res[i] = dist[d];
    }

    for(i=0;i<q;i++){
        if(res[i] == INF){
            printf("Impossible\n");
        }else{
            printf("%d\n",res[i]);
        }
    }
    return 0;
}
