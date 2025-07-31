#include <iostream>
#include <string>

using namespace std;

int main() {
    cout <<"enter number" << endl;
    int num;
    int football = 0;
    int prog = 0;
    int chess = 0;
   while(true){
        cin >> num;
        if(num==0)
            break;
        else if (num == 1 )
            prog++;
        else if (num==2)
            football++;
        else if (num==3)
            chess++;
    }

    cout << prog << endl;
    cout << football << endl;
    cout << chess << endl;
 if(chess < football && chess < prog)
         cout << chess << endl;
    else if (football<chess && football<prog)
        cout << football << endl;
     else if (prog<chess&& prog<football)
        cout << prog << endl;    
}
