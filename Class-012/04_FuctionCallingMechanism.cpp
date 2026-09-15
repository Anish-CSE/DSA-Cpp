#include<iostream>
using namespace std;
void Raja(){
    cout<<"Ka Raja, ka haal ba"<<endl;
}
void Rani() {
    cout<<"Ka ho Rani"<<endl;
     Raja();
}
void Babu(){
     Rani();
    cout<<"Babu sutata"<<endl;
}
void Babuni(){
    cout<<"Ghar jake suthi babu"<<endl;
    Babu();   // in a fn itself calling different fn, if this two line of executed fully then it leave this fn
}
int main(){
     Babuni();  // by this example you will understand
                    // how fn calling happen and code execute line by line 
}