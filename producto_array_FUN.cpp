#include<iostream>
#include<cstring>
using namespace std;

int arr1[5]={1,2,3,4,5};
int arr2[5]={10,20,30,40,50};

int producto( int array[], int array2[]);
int ppunto(int array[], int array2[]);


int main(){
    
   cout <<  producto(arr1, arr2) << endl;
   cout << ppunto(arr1, arr2) << endl;
    
 return 0;   
}

int producto( int array[], int array2[]){
    int arrproducto[5];
    
    for( int i=0; i<5; i++)
    {
     arrproducto[i]= (array[i]*array2[i]);    
    }   
    
    for(int i=0; i<5; i++)
    {
        cout << arrproducto[i] << endl;
    }
}

int ppunto(int array[], int array2[]){
    int resultado=0;
    for(int i=0; i<5; i++ )
    {
        resultado+= arr1[i]*arr2[i];
    }
    return resultado;
}