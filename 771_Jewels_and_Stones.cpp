#include<iostream>
#include<string>
#include<cstring>
#include<cassert>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int num=0;
        for(int i=0; i < J.length(); i++) {
           for(int j=0; j < S.length(); j++) {
               if(J[i] == S[j])
                   num++;
           } 
        }
        return num;
    }
};


int main() {
    string line, J, S;
    cout<<"Please input string J: "<<"\n";
    cin>>J;

    cout<<"Please input string S: "<<"\n";
    cin>>S;

        

    cout<<"J: "<<J;
    cout<<"\n";
    cout<<"S: "<<S;
    int ret = Solution().numJewelsInStones(J, S);

    string out = to_string(ret);
    cout <<"\n"<<out << endl;

    return 0;
}
