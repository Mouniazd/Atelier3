#include <iostream>
using namespace std;
class shape {
 protected:
      float L,H;
 public:
  shape(float larg, float haut){
      L=larg;
      H=haut;

    }
};

class Rectangle {
    int L, H;
  public:
    void set_values (int,int);
    int area() {return L*H;}
};

void Rectangle::set_values (int x, int y) {
  L = x;
  H = y;
}
    
class triagle {
    int L, H;
    public:
    void set_values (int,int);
    int area() {return L*H/2;}
};

void triagle::set_values (int x, int y) {
  L = x;
  H = y;
}
      
int main(){
   

 int x,y;
    Rectangle R;
    cout<<"x:";
    cin>>x;
    cout<<"y:";
    cin>>y;
    R.set_values(x,y);
    cout<<"l'aire du rectangle "<<R.area()<<endl;

    triagle T;
   
    T.set_values(x,y);
    cout<<"l'aire du triangle "<<T.area()<<endl;

return 0;
}
