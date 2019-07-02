#include<iostream>
#include<cstring>
using namespace std;



int arr1[5]={1,2,3,4,5};
int arr2[5]={10,20,30,40,50};

//int arrproducto[5]={0,0,0,0,0};

string producto(int arr1[], int arr2[]);
int  ppunto(int arr1[], int arr2[]);

int main()
{

    cout <<"El producto entre arreglos es:" << producto(arr1, arr2) << endl;
    cout <<"El producto punto de los dos arreglos es:" << ppunto(arr1, arr2) << endl;
    return 0;
}


string producto(int arr1[], int arr2[]){

    string multiplicacion;
    for(int i=0; i<5;i++)
    {
        multiplicacion= multiplicacion + " "+ std::to_string(arr1[i]*arr2[i]);
    }
    return multiplicacion;
}

int ppunto(int arr1[], int arr2[]){
    int resultado=0;

    for(int i=0; i<5;i++ )
    {
        resultado+= arr1[i]*arr2[i];
    }
    return resultado;
}