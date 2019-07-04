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
    ofstream outfile;
    outfile.open(filename1);
    
    ofstream outfile2;
    outfile2.open(filename2);
    
    ofstream outfile3;
    outfile3.open(filename3);
    
    for(int i= a; i<=N ; i++ )
    {
        arreglo[i]= i;

        if(i==N)
            {
                arreglo[i]= b;
            }
    }
   
    for (int i=a; i<=N; i++)
    {
        arrcos[i]= cos(arreglo[i]);
    }

    for (int i=1; i<=N; i++)
    {
    outfile << arreglo[i] << endl;
    }
    
    for (int i=1; i<=N; i++)
    {
     outfile2 << arrcos[i] << endl;   
    }

    outfile3<< derivada(arrcos, dx, N, filename3) << endl;
    outfile.close();
    outfile2.close();
    return 0;
}

float* derivada(float arr[], float h, int n, string filename3)
{
    float* deriva= new float [n];
    ofstream outfile3;
    outfile3.open(filename3);
    
     for(int i=0; i<=n; i++)
     {
         deriva[i] = (arr[i+1]-arr[i-1])/(2*h);
         outfile3<< deriva[i] << endl;
    }

    return deriva;
    outfile3.close();
}