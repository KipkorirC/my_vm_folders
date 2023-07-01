#include <iostream>
#include <string>

class Stack{
    private:
    int top;
    int arr[4];

    public:
    Stack(){
        top=-1;
        for (int i=0;i<5;i++){
            arr[i]=0;
        }
      
    }
    bool isempty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }
    bool isfull(){
        if(top==4){
            return true;
        }else{
            return false;
        }
    }
    void push(int val){
        if(!isfull()){
            top ++;
            arr[top]=val;
        }else{
            std::cout<<"stack overflow \n";
        }
    }
    int pop(){
        if(!isempty()){
        int popped = arr[top];
        arr[top]=0;
        top--;
        return popped;
        }else{
            std::cout<<"stack is empty\n";
        }
        return 0;

    }
    int peek(int pos){

        return arr[pos];

    }
    void change(int pos,int val){
        arr[pos]=val;
    }
    void display(){
        for(int i=4;i>=0;i--){
            std::cout<<arr[i]<<"\n";
        }
    }
    int count(){
        return top+1;
    }
};

int main(){

    Stack S1;
    S1.push(34);
    S1.push(45);
    //std::cout<<S1.peek(1)<<"\n";
    //S1.pop();
    //S1.change(1,39);
    std::cout<<S1.count()<<"\n";

    //S1.display();

    return 0;

}