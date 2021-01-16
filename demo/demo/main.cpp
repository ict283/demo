//
//  main.cpp
//  Demo

/*
 PASS 1 - Basic Project Setup for ICT283
 
 Hello!
 Here is a basic C++ main program.
 In ICT283, we include the line 'using namespace std;'
 to make coding easier for new students. This removes
 the need for you to include C++ namespaces in your code.
 Note: This does not apply to all C++ code.
 
 Eg. Without 'using namespace std;'
     std::cout<<"Hello World!"<<std::endl
 */


#include <iostream>
using namespace std; //Please note ⬆️

//global variables
const int MSG_SIZE = 3;
const string SUCCESS = "Let's write some code!";
const string ERROR = "Woops! I didn't get your name.";

//function declarations
string get_name();
void print_message(string name);

//main method block
int main(void)
{
    
    
    print_message(get_name());
    return 0;
    
    
} //END MAIN


//function implementation
string get_name()
{
    string name ="";
    cout<<"Hi! What's your name?: ";
    cin>>name;
    return name;
}

//function implementation
void print_message(const string name)
{
    string message [MSG_SIZE] = {"Hello",name,"!"};
    
    if(name.empty()) //this will never run...
    {
       cout<<ERROR<<endl;
    }
    else
    {
        for(int i = 0; i< sizeof(message)/sizeof(message[0]); i++)
        {
            cout<<message[i]<<" ";
        }
        cout<<endl<<SUCCESS<<endl;
        
    }
}
