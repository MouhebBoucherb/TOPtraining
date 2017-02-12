#include <bits/stdc++.h>
using namespace std;
void afficher(vector<int> T){
    for(int i=0;i<T.size();i++)
        cout<<T[i]<<" ";
    cout<<"\n";
}
int main()
{
    //les "VECTOR"
    vector<int> entier; // on a declarer un tableau d'entier
    vector<long long> entier_long; // on a declarer un tableau d'entier long
    vector<char> caracteres; // on a declarer un tableau de caracteres
    vector<string> chaine; // on a declarer un tableau de chaine

    /*
        I/les fonctions predifins des vector

        size();  donne la taille du vector

        push_back(); inserer un element a la fin du vector

        pop_back(); effacer un element a la fin

        insert(); inserer une valeur ( il ya plusieur varient de insert(); on va les voir dans les exemples )

        clear(); effacer tout le tableau ;

        erase(); effacer un element (il ya aussi plusieur variente de erase ) (a ne pas abuser);

        swap(); changer deux tableaux

        sort(); trier le tableau ( TRES IMPORTANTES !!! )

        II/les operateru

        vect[i]; acceder a l'element d'indice i
        vect[i]=a ; affecter la valeur "a" a vect[i]
        at(i) acceder a l'element i ;
        empty() boolean returne si le tableau est vide ou non
        III/iterator

        vect.begin() pointeur qui pointe au premier element du tableau
        vect.end(); pointeur qui pointe au dernier element du tableau

    */
    //exemple d'utulisation des fonctions
        entier={0,1,2,3,4,5}; // se tableau contien 6 éléments
        afficher(entier);
        cout<<"ce tableau contien : "<<entier.size()<<" elements \n";
        // push_back
        entier.push_back(6); // on ajouter 6 a la fin le tableau va etre {0,1,2,3,4,5,6};
        afficher(entier);
        cout<<"ce tableau contien : "<<entier.size()<<" elements \n";
        //pop_back();
        entier.pop_back(); // on a suprimer le dernier element qui est 6 donc le tableau est devenue {0,2,3,4,5} il a la taille 6
        afficher(entier);
        cout<<"ce tableau contien : "<<entier.size()<<" elements \n";
        // les insert et leurs varientes
        // insert(pos,value);
        entier.insert(entier.begin(),-1); // ajouter l'entier -1
        entier.insert(entier.end(),6);
        afficher(entier);
        cout<<"ce tableau contien : "<<entier.size()<<" elements \n";
        //insert(pos,freq,value);
        entier.insert(entier.begin(),3,-2);
        afficher(entier);
        cout<<"ce tableau contien : "<<entier.size()<<" elements \n";
        // insert vect2 to vect 1
        vector<int> vect2={7,8,9,10}; // vect2 contien{300,300};
        entier.insert(entier.end(),vect2.begin(),vect2.end());
        afficher(entier);
        cout<<"ce tableau contien : "<<entier.size()<<" elements \n";
        cout<<*entier.begin()<<endl;
        // l'utulisation de la fonction erase
        //entier.erase(entier.begin()); // on va supprimer le premier element du tableau
        //afficher(entier);
        // suprimer une liste
        entier.erase(entier.begin(),entier.begin()+2);
        afficher(entier);
        //empty
        if(!entier.empty())
            cout<<"le tableau n'est pas vide \n";
        entier.swap(vect2);
        cout<<"le tableau entier contien : ";
        afficher(entier);
        cout<<"le tableau vect2 contien : ";
        afficher(vect2);
        vector<int> sorting={10,2,3,9,0,-1};
        sort(sorting.begin(),sorting.end());
        afficher(sorting);
        // clear
        entier.clear();
        afficher(entier);
        cout<<"ce tableau contien : "<<entier.size()<<" elements \n";
        if(entier.empty())
            cout<<"le tableau est vide\n";
        cout<<entier.at(2)<<endl;
    return 0;
}
