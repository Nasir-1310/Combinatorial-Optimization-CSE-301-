#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NX 101
#define NT 10001

double dx = 1.0/(NX-1);
double dt = 0.0001;
double D = 0.1;

double u[NX][NT];

void init(){
    int i;
    for (i=0; i<NX; i++){
        u[i][0] = sin(M_PI*i*dx);
    }
}

void solve(){
    int i, j;
    double alpha = D*dt/dx/dx;
    for (j=0; j<NT-1; j++){
        for (i=1; i<NX-1; i++){
            u[i][j+1] = u[i][j] + alpha*(u[i+1][j] - 2.0*u[i][j] + u[i-1][j]);
        }
    }
}

void output(){
    int i, j;
    for (j=0; j<NT; j++){
        for (i=0; i<NX; i++){
            printf("%f ", u[i][j]);
        }
        printf("\n");
    }
}

int main(){
    init();
    solve();
    output();
    return 0;
}
