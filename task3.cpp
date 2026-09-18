#include <iostream>
using namespace std;

//function
void analyze_pointer(int *ptr){
    cout<<"Pointer pointing to a has stored: "<<ptr <<endl;
    cout<<"Value to which the pointer points: "<<*ptr <<endl;
} 

int main(){
    int a=0; //declaring and assigning a
    int *pointer = &a;
    analyze_pointer(pointer);//calling the function
    cout<<endl;
    int *dynamicptr=new int(); //allocating integer on heap memory 
    *dynamicptr=10; //assigning value by dereferencing
    analyze_pointer(dynamicptr);//calling the function

}