/*
input: Hello World
output: dlrow olleH

input: a b c d e f
output: f e d c b a
*/

#include<bits/stdc++.h>
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i=0; input[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverse(char input[]){
    int s = 0;
    int e = length(input) - 1;

    while(s < e){
        swap(input[s], input[e]);
        s++;
        e--;
    }
}

int main(){
    char name[100];
    cin.getline(name,100);
    cout<<name<<endl;
    reverse(name);
    cout<<name<<endl;
}
