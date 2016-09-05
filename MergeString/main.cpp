#include <iostream>
#include <string>
using namespace std;

string MergeString(string a, string b);

int main() {
    std::cout << "Hello, World!" << std::endl;
    string r = MergeString("Hello","Worldba");
    cout<<r;
    return 0;
}

string MergeString(string a, string b){
    string res(a.size()+b.size(),'0');
    int i=0,j=0;
    int p=0;
    while(i<a.size() && j<b.size()){
        res[p++]=a[i++];
        res[p++]=b[j++];
    }
    while(i<a.size()){
        res[p++]=a[i++];
    }
    while(j<b.size()){
        res[p++]=b[j++];
    }
    return res;
}