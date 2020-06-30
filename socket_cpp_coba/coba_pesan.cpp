#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
    string kata;
    char huda[99];
    string hao = "hola holi";
    // cin >> noskipws >> huda;
    cin.getline(huda,sizeof(huda));
    kata = string(huda);
    cout << "input tadi adalah " << kata << " + " << hao << " + " << huda << endl;
    
    return 0;
}