#include <bits/stdc++.h>
using namespace std;
void afficher(deque<char> T){
    for(int i=0;i<T.size();i++)
        cout<<T[i]<<" ";
    cout<<"\n";
}
int main()
{
   // les deques
   //deque is a sequence container like vector but deque can be manipulated by two direction
   //let's begin
   // declaration
   deque<int> entier;
   deque<char> caracter;
   deque<string> chaine;
   //dans le cours precedent on vu les tableau d'entier mainteneant c'est le tour des caracters
   caracter={'b','c','d'};
   afficher(caracter);
   cout<<"le tableau \"carcter\" contien "<<caracter.size()<<" elements \n";
   // lise des fonction predifinis de deque
   // le deque a pratiquement les meme fonction que vector en plus il a
   // push_front()  ajouter un elemnt au debut de la lite
   // max_size retourn la valeur maximal de la liste
   // pop_front supprimer le premier element
    // EXEMPLE :
    caracter.push_front('a');
    caracter.push_back('e');
    afficher(caracter);
      cout<<"le tableau \"carcter\" contien "<<caracter.size()<<" elements \n";
    // copier un tableau dans un autre
    deque<char> copie(caracter);
    cout<<"la copie du tableau \"caractere\" est : ";
    afficher(copie);
    return 0;
}
