#include <iostream>
#include <fstream>
#include <stack>
#include <vector>
#include <list>

using namespace std;

/*File Reverser: Write a program (named as file_reverser.cpp) that opens the input.txt file and reads its
contents into a stack of characters. The program should then pop the characters from the stack and save
them in the output_reverse.txt file. The order of the characters saved in output_reverse.txt should be the
reverse of their order in the input.txt file.*/

int main(int argc, char* argv[])
{
    if (argc != 3) {
      cout << "Usage: myprog.exe input.txt" << endl;
      return 1;
   }
    ifstream fin;
    ofstream fout;
    string value;

    fin.open("input.txt");
    if(!fin.is_open()){
        cout << "Could not open file input.txt" << endl;
        return 1;
    }

    stack <int, vector<char> > fileInput;


    while(!fin.eof()){
        getline(fin, value);
        for(int i =0; i < value.size(); i++){
            fileInput.push(value.at(i));
        }
    }

    fin.close();

    fout.open("output_reverse.txt");
    while(!fileInput.empty()){
        cout << fileInput.top();
        fout << fileInput.top();
        fileInput.pop();
    }
    fout.close();
    cout << endl;

    return 0;
}


