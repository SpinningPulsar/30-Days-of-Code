#include<iostream>
using namespace std;
class greek{
    public:
    string phanlax;
    string bro;
    greek(){
        cout<<"This is the default constructor😂"<<endl;
        bro="Bro called";
    }
    greek(string star){
        phanlax=star;
        cout<<"This is paramaterized constructor"<<endl<<phanlax<<endl;
    }
    void printname(string inp){
        cout<<inp;
    }
};
int main(){
    greek alex;
    cout<<endl<<alex.bro<<endl;
    greek phanlax("vro");
    cout<<alex.phanlax;
    alex.printname("crow😂");
    return 0;
}