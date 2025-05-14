// name Basicexceptions.cpp
#include <iostream>
using namespace std;


void mightGoWrong(){
    bool error1 = false;
    bool error2 = false;
    bool error3 = true;
    
    if(error1){
        throw 8;
    }
    if(error2){
        throw "Something went wrong";
    }
    if(error3){
        throw string("Something bad went wrong");
    }
}
void useMightGoWrong(){
    //nested function error handling
    mightGoWrong();
}

int main(){
    try{
        useMightGoWrong();
    }
    catch(int e){
        cout << "Error code: " << e << endl;
    }
    catch(char const * e){
        cout << "Error message: " << e << endl;
    }
    catch(string &e){
        cout << "String Error message : "<< e << endl;
    }
    cout << "still runnig ..." << endl;
    return 0;
}