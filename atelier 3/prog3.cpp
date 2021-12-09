#include <iostream>
using namespace std;

class complexe{
    public:
    float addition(float reel1,float imag1,float reel2,float imag2);
    float multiple(float reel1,float imag1,float reel2,float imag2);
    float soustr(float R1,float I1,float R2,float I2);
    
};
float addition(float R1,float I1,float R2,float I2){
    float addreel=R1+R2 ;
    float addimg=I1+I2;
     cout<<addreel<<"+ i "<<addimg<<endl;

}

float  multiple(float R1,float I1,float R2,float I2){
    float multreel=(R1*R2)-(I1*I2);
    float multimg=(R1*I2)-(I1*R2);
    cout<<multreel <<"+ i "<< multimg<<endl;
}
float soustr(float R1,float I1,float R2,float I2){
    float soustreel=R1-R2;
    float soustimg=I1-I2;
     cout<<soustreel <<"+ i "<< soustimg<<endl;
}


int main(){
  float R1, I1, R2, I2;
 
 cout<<"1er nombre imaginaire ";
 cin>>I1;
 cout<<"2eme nombre imaginaire svp ";
 cin>>I2;
  cout<<"1er nombre reel svp ";
 cin>>R1;
  cout<<"2eme nombre reel svp ";
 cin>>R2;

 int oper;
 cout<<"menu\n 1-addition\n2-multiplication \n 3-soustraction"<<endl;
 cin>>oper;
 if(oper = 1){
 cout<<addition(R1 ,I1 ,R2 ,I2);
 }else if(oper=2){
  cout<<multiple(R1 ,I1 ,R2 ,I2);
  }else if(oper=3){
       cout<<soustr(R1 ,I1 ,R2 ,I2);
  }else{
  cout<<"choisissez une operation svp";
  }
}