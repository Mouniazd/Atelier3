#include <iostream>
using namespace std;

class MyClass{
  public:
      
     char entre;
      MyClass(){
        
        char  text1[50] ;
        
        cout<<"text:";
        
        gets(text1);
         cout<<"bonjour"<<"  "<<text1 <<endl;
      }
       
      
      ~MyClass(){
         char  text1[50] ;
         cout<<"aurevoir"<<"  "<<text1<<endl;
        }
     

};
int main(){
  MyClass c;
 // c.display();
}