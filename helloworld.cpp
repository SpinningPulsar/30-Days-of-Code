#include <iostream>
#include <vector>
#include <string>

using namespace std;
class god{
    int number;
    public:
    int send(int ip_number){
        number=ip_number;
        brock(number);
        cout<<number;
        return 0;
    }
    int brock(int val){
        cout<<val;
        return 0;
    }
};

int main()
{
    //vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
 god one;
 one.send(79);
    // for (const string& word : msg)
    // {
    //     cout << word << " ";
    // }
    cout << endl;
}