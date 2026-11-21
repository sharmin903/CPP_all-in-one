#include<iostream>
#include<string>
using namespace std;
inline void printLine(char symbol='#',int width=30);

inline void printLine(char symbol,int width){
    for(int i=1; i<=width;i++){
        cout<<symbol;
    }
    cout<<endl;
}
inline void printBookTitle(string Name){
    printLine();
    cout<<"Title of the book: "<<Name<<endl;
    printLine();
}

int main(){
    printBookTitle("Pride and Prejudice");
    return 0;
}


