#include <iostream>

#include <fstream>

#include <string>

using namespace std;


int main(){

  string line;
  int i=0;

ifstream myfile("COVID Vaccine Data by Manufacturer.csv");

if (myfile.is_open())

{

 while (getline (myfile,line))

 {

   cout<<line<<'\n';
   i++;

 }
 
  myfile.close();

cout<<"THE AMOUNT OF ROWS IS "<<i<<endl;

}
 
 else cout<<"Unable to open file";

}
//nested for loop 
