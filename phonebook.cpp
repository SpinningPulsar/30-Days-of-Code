#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map <string,int> phoneBook;
    int n;
    cin>>n;
    int number;
    string name,findName;
    
    for(int i=0;i<n;i++){
        cin>>name;
        cin>>number;
        phoneBook[name]=number;    
    }

    
    while(cin>>findName){
        auto iter=phoneBook.find(findName);
        if(iter!=phoneBook.end()){
            cout<<iter->second<<endl;
        }
        if(phoneBook.find(findName)!=phoneBook.end()){
            cout<<findName<<"="<<phoneBook[findName]<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    };
    
    // map<string,int> :: iterator iter;
    // for(iter=phoneBook.begin();iter!=phoneBook.end();iter++){
    //     if((findName.compare((*iter).first)==0)){
    //         cout<<(*iter).first<<"="<<(*iter).second;                        
    //     }
    //     else if(iter==phoneBook.end()){
    //     cout<<"Not found"<<endl;
    // }
    // }
    return 0;
}
