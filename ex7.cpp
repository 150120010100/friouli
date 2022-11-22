#include <iostream>
using namespace std;

class vecteur3d {

public:
float x;
float y;
float z;
 vecteur3d();
 

 void affiche(float a,float b,float c){
   x = a;
  y = b;
   z = c;
 }
 void somme(){
    cout<<"la somme des deux vecteurs est:  "<<endl;

 };
 void produit(){
    cout<<"le produit des deux vecteurs est:  "<<endl;
};
};


int main(void){
float a = 10;
float b = 10;
float c = 10;
vecteur3d vect ();
vect.affiche(a,b,c);



}
