#include <iostream>

using namespace std;

int main()
{
    cout << "This is an interst calculator!" << endl; // Press Enter to continue:
    
    double startInp;
    cout << "input starting amount $:" << endl;
    cin >> startInp;
    
    double interest;
    cout << "input interest Rate:" << endl;
    cin >> interest;
    interest = interest/100;

    int years;
    cout << "input how long its in the bank (years):" << endl;
    cin >> years;

    double endInp = startInp;
    for (int i = 0; i < years; i++){
        endInp = endInp + (endInp * interest);
    }
    cout << "This is how much money:" << endl;
    cout << "$" << endInp << endl;
    return 0;
}
