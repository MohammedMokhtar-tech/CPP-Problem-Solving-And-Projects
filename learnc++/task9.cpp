#include <iostream>
#include <string>
using namespace std;
void red_the_name()
{
    cout <<"enter your name "; 
}
void print_name (string name)
{
    cout<<"your name "<< name <<endl ;
}
int main ()
{

string name , name2;
red_the_name ();
 getline(cin ,name);
print_name (name);
red_the_name ();
getline(cin ,name2);
print_name (name2);


    // cout<<"enter your name"<< endl ;
    // string name ;
    //  getline(cin ,name);
    // print_name (name) ;
    


    return 0;
}