#include <iostream> 

using namespace std;


void addInp(){
    cout << "Build this later" << endl;

}

int main(){

    cout << "Would You like to add numbers to the list: (Y/N)" << endl;
    char userInp;
    cin >> userInp;
    
    while(tolower(userInp) != 'y' || tolower(userInp) != 'n'){
        cout << "Please enter Y or N" << endl;
        cin >> userInp;
    }
    if (tolower(userInp) == 'y')
            addInp();

    return 0;

}