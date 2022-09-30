#include <iostream>

using namespace std;

int subsequence(string str , string outputarr[]){
    if (str.length()==0)
    {
        outputarr[0]={""};
        return 1;
    }

    char ch = str[0];
    int x = subsequence(str.substr(1),outputarr);
    for (int i = 0; i < x; i++)
    {
        outputarr[x+i] = outputarr[i] + ch;
    }
    return 2*x;
}

int main (){

    string str = "ABC";
    string output[100];

    int x = subsequence(str, output);
    for (int i = 0; i < x; i++)
    {
        cout<<output[i]<<endl;
    }
    
    return 0;
}
