#include <iostream>
#include <fstream>
#include <queue>


using namespace std;

/*
File Filter: Write a program (named as file_filter.cpp) that opens the input.txt file and reads its contents
into a queue of characters. The program should then dequeue each character, convert it to uppercase, and
store it in the output_filter.txt file. The order of the characters saved in output_filter.txt should be the
same as their order in the input.txt file, but all in uppercase
*/

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

    queue <char> fileInput;

    while(!fin.eof()){
        getline(fin, value);
        for(int i =0; i < value.size(); i++){
            fileInput.push(toupper(value.at(i)));
        }
    }

    fin.close();

    fout.open("output_filter.txt");
    while(!fileInput.empty()){
        cout << fileInput.front();
        fout << fileInput.front();
        fileInput.pop();
    }
    fout.close();
    cout << endl;

    return 0;
}
