#include<iostream>
using namespace std;

class personne{
 private:
  string nom ;
  string prenom;
 
  public: 
  int jour, mois, annee;
  personne(){
      /*saisire le nom est prenom*/
     cout<<"entrer votre nom :";
     cin>>nom;
     cout<<"entrer prenom :";
     cin>>prenom;
     
     /*saisire la date de naissance*/
     cout<<"entrer date de naissance (jj/mm/aa) : ";
     cout<<"jour:";
     cin>>jour;
     cout<<"mois:";
     cin >>mois;
     cout<<"annee:";
     cin>>annee;
  }
   void afficher() { 
        cout<<nom<<" "<<prenom<<endl;
        cout<<"votre date de naissance est: "<<jour<<"/"<<mois<<"/"<<annee<<endl;

    }

};
class employe:public personne{
private: string salaire;
public:
employe(){
   cout<<"entrer votre salaire : ";
   cin>>salaire;
}
void afficher(){
 personne::afficher();
  cout<<salaire<<endl;
 }

};
class chef :public employe{
 private: string Service;
 public: 
 chef(){

 cout<<"service : ";
   cin>>Service;
}
void afficher(){
 personne::afficher();
  cout<<Service<<endl;
 }
};

class Directeur:public chef{
private: string societe;
public:
 Directeur(){
 cout<<"societe: ";
 cin>>societe;
 }
 void afficher(){
 personne::afficher();
  cout<<societe<<endl;
 

}
};

int main(){
   Directeur A;
   A.afficher();
  
}