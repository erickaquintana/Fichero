#include <iostream>
#include<fstream>
using namespace std;
int main (){
string a;
ofstream fich ("ericka.txt");
cout<<"Ingrese una palabra";
 getline(cin,a);
fich<<a;
}
