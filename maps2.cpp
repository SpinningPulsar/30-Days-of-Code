#include<iostream>
#include<string>
#include<map>
using namespace std;
// namespace n1{
    
// };
int main(){
    map<string,int> pokemon;
    pokemon["Bulbasaur🧄"]=001;
    pokemon["Ivysaur"]=002;
    pokemon["Venusaur🪷"]=003;
    pokemon["Charmander"]=004;
    pokemon["Charmeleon"]=005;
    pokemon["Charizard🔥🔥🔥"]=006;
    
    //int val;
    //cin>>val;
    string PKMN;
    cin>>PKMN;
    map<string,int> :: iterator dex;
    for(dex=pokemon.begin();dex!=pokemon.end();dex++){
        //cout<<endl<<(*dex).first<<" ---> "<<(*dex).second;
        if(PKMN.compare((*dex).first)==0){
            cout<<(*dex).second;
        }
        else{
            cout<<"(●'◡'●)";
            break;
        }
        // if(val==(*dex).second){
        //     cout<<(*dex).first;
        // }
    }
    return 0;

}