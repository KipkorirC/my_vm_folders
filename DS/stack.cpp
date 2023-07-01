#include<iostream>
#include <string>


class Stack{
    private:
    int top;
    int arr[5];

    public:
    Stack(){
        top=-1;
        for (int i=0;i<4;i++){
            arr[i]=0;
        }
    }
    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isfull(){
        if(top ==4){
            return true;
        }
        else{
            return false;
        }
    }
    //bool exists(int pos){
      //  if(arr[pos]==0){
      //      return true
        //}else{
        //    return false;
        //}
    //}
    void push(int val){
        if (isfull()){
            std::cout<<"stack overflow \n";
        }
        else{
            top++;
            arr[top] = val;
        }
        }
    int pop(){
        if(isempty()){
            std::cout<<"stack empty\n";
            return 0;
        }
        else{
            int popped = arr[top];
            arr[top] = 0;
            top--;
            return popped;
            }
    }
    int peek(int pos){
        return arr[pos];
    }
    void change(int pos,int val){
        arr[pos]=val;
    }
    int count(){
        return top+1;
    }
    //void insert(int pos,int val){
     //   if(exists(pos)){
//
  //      }else{
    //        arr[pos]=val;
      //  }
    //}
    
    void display(){
        for (int i = 4;i>=0;i--){
            std::cout<<arr[i]<<"\n";
        }
    }
};
int main(){
    Stack s1;
    s1.push(5); 
    s1.push(6);
    s1.push(7);
    s1.change(2,45);
    std::cout<<s1.peek(2)<<"\n";
    //std::cout<<s1.count()<<"\n";
    //std::cout<<s1.pop()<<"\n";
    //std::cout<<s1.peek(2)<<"\n";
    //s1.display();
    return 0;

}