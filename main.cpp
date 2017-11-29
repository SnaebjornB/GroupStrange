#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    char input = 'y';
    string str;
    ifstream fin;


    fin.open("c://Verklegt_namskeid//read.txt");
    if (fin.is_open()){
        while(input == 'y'){
            for(int i = 0; i < 10; i++){
                if(!fin.eof()){
                    getline(fin, str);
                    cout << str << endl;
                }
                else if(fin.eof()){
                    break;
                }
            }
            if(!fin.eof()){
                do{
                cout << "Do you wish to continue (y/n)?";
                cin >> input;
                }while(!(input == 'y' || input == 'n'));
            }
            else{
                break;
            }
        }
    }
    return 0;
}
