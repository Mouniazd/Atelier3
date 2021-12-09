#include<iostream>
#include<math.h>
using namespace std;

class vecteur3d{
   
    public:
     vecteur3d(){
         float a;
         float b;
         float c;
         void afficher(float a,float b,float c);
    };
       void affichage(float x,float y,float z){
         
           cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
       }
       void somme( float a,float b,float c,float x,float y,float z){
          // float a,b,c,x,y,z;
           cout<<"la somme de c'est deux vecteurs : "<<endl;
           cout<<"("<<x+a<<","<<y+b<<","<<z+c<<")"<<endl;
       }
       void produitS(float a,float b,float c,float x,float y,float z){
             cout<<"le produit scalaire de c'est deux vecteurs : "<<endl;
           cout<<(a*x+b*y+c*z)<<endl;
       }
       void coincide(float a,float b,float c,float x,float y,float z){
            if(a==x && b==y && c==z){
                cout<<"les 2 vecteurs ont les memes composantes"<<endl;
            }else{
                cout<<"2 vecteurs n'ont pas les memes composantes"<<endl;

            }
       }
       float norme(float x,float y,float z){
          float n;
           n= sqrt(x*x + y*y + z*z);
          cout<<"la norme du vecteur est "<<n<<endl;

       }
       void normeaux(){


       }
   

};



int main(){
    float x1,y1,z1,x2,y2,z2;
   cout<<"entrer les trois composants de vecteur 1"<<endl;
    cout<<"x:";
    cin>>x1;
    cout<<"y:";
    cin>>y1;
    cout<<"z:";
    cin>>z1;
    cout<<"entrer les trois composants de vecteur 2"<<endl;
    cout<<"x:";
    cin>>x2;
    cout<<"y:";
    cin>>y2;
    cout<<"z:";
    cin>>z2;
    vecteur3d vect;
    vect.affichage(x1,y1,z1);
    vect.affichage(x1,y1,z1);
    vect.somme(x1,y1,z1,x2,y2,z2);
    vect.produitS(x1,y1,z1,x2,y2,z2);
    vect.norme(x1,y1,z1);
    vect.coincide(x1,y1,z1,x2,y2,z2);
}