#include<iostream>
using namespace std;

class mere{
    public:
 void display(){
     cout<<"display de la class mere ";
 }

};
class fille: public mere{
   public:
    void display(){
        cout<<"display de la class fille ";
    }
};
 int main(){
    fille M;
    M.display();
 }