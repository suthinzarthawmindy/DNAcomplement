#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string dnacomplement(string s){
    reverse(s.begin(),s.end());
    for (char c: s){
        if (c='A')
            c='T';
            else if (c='T')
                c='A';
                else if (c='C')
                    c= 'G';
                    else if(c='G')
                        c= 'C';
    }
    return s;
}

int main(){
    string dna="GTCAG";
    string reverse= dnacomplement(dna);
    cout<< dna << " of reverse is "<< reverse <<endl;
    return 0;
}