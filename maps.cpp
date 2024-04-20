#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string, float> song;
    song["The One That Got Away"]=5;
    song["Ethir Neechal Adi"]=4;
    song["Call you Mine"]=3;
    song["I should really start listening to less songs"]=2;
    song["Kya Baat Hai"]=1;

    map <string,float> :: iterator songs;
    cout<<"Gimmie the ranking of the song(value) and thou shalt recieve the keys"<<endl;
    int val;
    cin>>val;

    for(songs=song.begin();songs!=song.end();songs++){
        if((*songs).second==val){      //*song is a pointer which points to the elements of the map.
            cout<<endl<<(*songs).first;                
        }
    }
    return 0;
}
//iterator and map belong to the STL.
//iterator song creates a iterator pointer for a map with string keys and float values