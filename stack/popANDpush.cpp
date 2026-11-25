#include<bits/stdc++.h>
using namespace std;
class Stack{
    private:
    int arr[5];
    int top;
    int size;

    public:
    Stack(){        
        top=-1;
        size=5;
    }
    void push(int x);
    void pop();
    void display();
};
void Stack::push(int x){
    if(top==size-1){
        cout<<"Stack Overflow\n";
        return;
    }
    arr[++top]=x;

}
void Stack::pop(){
    if(top==-1){
        cout<<"Stack Underflow\n";
        return;
    }
    cout << "Popped: " << arr[top--] << "\n";
}
void Stack::display(){
    if(top==-1){
        cout<<"Stack is empty\n";
        return ;
    }
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
}
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    return 0;
}