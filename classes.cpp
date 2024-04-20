#include<iostream>
using namespace std;
class Example{
    public:
    int num;
    string word;
    //private:
    Example(){
        cout<<"Default constructor"<<endl;
        num=-1;
        word="word";
    }
    //protected:
    Example(int number){
        cout<<"Parametrized Constructor"<<endl;
        num=number;
    }
    
};

int main(){
    Example object1;
    cout<<"Number outputted will be: "<<object1.num<<endl;

    Example object2(70);
    cout<<"Number outputted will be: "<<object2.num<<endl;

    return 0;
}