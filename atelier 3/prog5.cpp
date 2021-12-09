#include <iostream>
using namespace std;

class Animal{
   
    char nom;
    int age;
   void set_values();
   
};
 class zebra:public Animal{
     public:
      char N[15]="zebre";
       int A=15;
       void set_values(){
       
        cout<<N <<" "<<A<<" ans lieu d'origine afrique centrale et australe"<<endl;
      }
     
     };

class Dolphin:public Animal{
      public:
        char N[10]="Dolphin";
       int A=25;
       void set_values(){
       
        cout<<N <<" "<<A<<" ans lieu d'origine l'Asie ou l'Amérique du Sud"<<endl;
      }
};

int main(){
    zebra A;
    Dolphin B;
   B.set_values();
   A.set_values();
}