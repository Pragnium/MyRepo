#include <iostream>
using namespace std;
class Git{
    string a;
public:
    void getter(){
        cout<<"Enter your name: "<<endl;
        cin>>a;
        cout<<"Your name is " << a;
    }
    
};

int main(){
    printf("Hello dosto hum sikh rahe h git version control.\n");
    Git V2;
    V2.getter();
    return 0;
}