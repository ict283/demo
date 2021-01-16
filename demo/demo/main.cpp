//
//  main.cpp
//  Demo

/*
 PASS_1 - Basic Project Setup for ICT283
 
 Hello!
 Here is a basic C++ main program.
 In ICT283, we include the line 'using namespace std;'
 to make coding easier for new students. This removes
 the need for you to include namespaces in your code.
 Note: This does not apply to all C++ code.
 
 Eg. Without 'using namespace std;'
     std::cout<<"Hello World!"<<std::endl
 */


#include <iostream>
using namespace std;

string get_name();
void print_message(string name);


int main(void)
{
    //Your code here...
    print_message(get_name());
    return 0;
}


string get_name()
{
    string name ="";
    cout<<"Hi! What's your name?: ";
    cin>>name;
    return name;
}

void print_message(string name)
{
    string message [4] = {"Hello", name,"!"};
    
    for(int i = 0; i< sizeof(message)/sizeof(message[0]); i++)
    {
        cout<<message[i]<<" ";
    }
    cout<<endl<<"Let's write some code!"<<endl;
}
