#include<iostream>
using namespace std;

int main(int arg_count, char *args[]) {

    //cout << "Hello World" << endl;

    if(arg_count > 1) {
        string name = args[1];

        cout << "name is " << name << endl;    

    }
    else {
         cout << "No Arguments" << endl;
    }

    return 0;
}