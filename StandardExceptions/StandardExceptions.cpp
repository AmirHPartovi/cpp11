// name StandardExceptions.cpp
#include <iostream>
using namespace std;

class CanGoWrong{
    public:
        CanGoWrong(){
            char *PMemory = new char[999999999999999];
            delete [] PMemory;
        }
};

int main(){
    try{
        CanGoWrong Wrong;
    }catch(bad_alloc *e){
        cout << "error messagr:" << e <<endl;
    }
    cout << "still running" << endl; 
    return 0;
}