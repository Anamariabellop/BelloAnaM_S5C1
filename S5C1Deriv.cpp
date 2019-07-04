#include<iostream>
#include<math.h>
#include <fstream>

using namespace std;


float* derivada(float arr[], float h , int n, string filename);

int main()
{
    string filename1;
    filename1 = "x.dat";
    string filename2;
    filename2= "cos.dat";
    string filename3;
    filename3= "derivada.dat";
    
    float a;
    float b;
    int N;

    cout << "Ingrese inicio y final intervalo" << endl;
    cout << "Inicio" << endl;
    cin >> a;
    cout << "Final" << endl;
    cin >> b;
    cout << "Numero de puntos" << endl;
    cin >> N;

    float* arreglo= new float [N];
    float* arrcos = new float [N];

    float dx= (b-a)/(N-1);
    //float espaciado;
    arreglo[0]=a;
    arreglo[N]=b;
    
    ofstream outfile;
    outfile.open(filename1);
    
    ofstream outfile2;
    outfile2.open(filename2);
    
    ofstream outfile3;
    outfile3.open(filename3);
    
    for(int i=1; i<N ; i++ ) //arreglox 
    {  
      arreglo[i]= arreglo[i-1]+dx;
    }
    //cout << arreglo[0]<< endl;
   
    for (int i=0; i<N; i++)//arreglo cos
    {
        arrcos[i]= cos(arreglo[i]);
    }
    cout << "  " << endl;
    
    for (int i=0; i<N; i++) //imprimo arreglox
    {
    outfile<< arreglo[i] << endl;
    }
    cout << "  " << endl;
    //cout << arreglo[N]<< endl;
    
    for (int i=0; i<N; i++)// imprimo cos 
    {
     outfile2 << arrcos[i] << endl;   
    }
        cout << "  " << endl;

    outfile3<< derivada(arrcos, dx, N, filename3) << endl;// imprimo derivada
    outfile.close();
    outfile2.close();
    
    return 0;
}

float* derivada(float arr[], float h, int n, string filename)
{
    float* arrderiva= new float [n];
    ofstream outfile3;
    outfile3.open(filename);
     for(int i=0; i<n; i++)
     {
         arrderiva[i] = (arr[i+1]-arr[i-1])/(2*h);
         outfile3<< arrderiva[i] << endl;
    }
    return arrderiva;
    outfile3.close();
}