#include<iostream>
#include <vector>
#include <math.h>

using namespace std;

float *derivada( float *funcion, float deltax, int numero);

int main(){
    int a;
    int b;
    int N;
    
    cout << "Ingrese a y b " << endl;
    cin >> a;
    cin >> b;
    cout << "Ingrese numero de puntos" << endl;
    cin >>N;
    double dx;
    
    dx= (b - a)/(N-1);
        
    float arrx[N];
    arrx[0]=a;
    arrx[N]=b;
    
    float arrcos[N];
    
    for( int i=1; i<N-1; i+=dx)
    {
        arrx[i]=i        
    }
    
    for( int i=0; i<N; i++);
    {
        arrcos[i]= cos(arrx[i]);
    }    
    
    *derivada();
     return 0;   
   
}

float * derivada(int *funcion, float deltax, int numero){
    float *arrderivada;
    arrderivada= new float [numero];
    
    for( int i=0; i<numero; i++)
    {
     arrderivada[i]=(funcion[i+1]-funcion[i-1])/(2*deltax);   
    }
    
   return *arrderivada; 
}