#include <iostream>
using namespace std;
void push(int x){
if(isFull())
cout<<"Stack Is Full\n";
else values [++top=x];
}
int pop (){
if (isEmpty ()){
cout<<"Stack Is Empty\n";
return -1;}
else return values [top--];
}
int top(){
if (isEmpty ()){
cout<<"Stack Is Empty\n";
return -1;
}
else return values [top];
}


int main()
{

}
