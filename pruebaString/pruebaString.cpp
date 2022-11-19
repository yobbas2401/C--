#include <iostream>
#include <string>
using namespace std;
int main() {
    int x;
string s1, s2; // declaración de dos strings.
string s3 = "Hola, puedo ser asignado";
string s4("y también así");
x=s4.length();
s1= s3 +"  " + s4; // se puede utilizar el +
s1 += " 7 "+ to_string(x); 

cout<< s1<<endl;// y anexionar cosas.
}