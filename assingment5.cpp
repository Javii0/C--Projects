#include <iostream>

#include <fstream>

#include <string>

using namespace std;

int findSum(string str)
{
	// A temporary string
	string temp = "";

	// holds sum of all numbers present in the string
	int sum = 0;

	// read each character in input string
	for (char ch : str) {
		// if current character is a digit
		if (isdigit(ch))
			temp += ch;

		// if current character is an alphabet
		else {
			// increment sum by number found earlier
			// (if any)
			sum += atoi(temp.c_str());

			// reset temporary string to empty
			temp = "";
		}
	}

	// atoi(temp.c_str()) takes care of trailing
	// numbers
	return sum + atoi(temp.c_str());
}
bool CheckPfr(string inf)
{
  if(inf.at(0) == 'P')
  {
    return true;
  } 
  return false;
}
bool CheckMod(string inf)
{
  if(inf.at(0) == 'M')
 {
    return true;
  } 
  return false;
}
bool CheckNvx(string inf)
{
  if(inf.at(0) == 'N')
  {
    return true;
  } 
  return false;
}
bool CheckJsn(string inf)
{
  if(inf.at(0) == 'J')
  {
    return true;
  } 
  return false;
}
bool CheckAsz(string inf)
{
  if(inf.at(0) == 'A')
  {
    return true;
  } 
  return false;
}



int main(){

  string line;
  string info;
  
  string pfr=" ";
  string mod=" ";
  string nvx=" ";
  string jsn=" ";
  string asz=" ";
  int i=0;

ifstream myfile("COVID Vaccine Data by Manufacturer.csv");

if (myfile.is_open())

{

 while (getline (myfile,line))

 {

   //cout<<line<<'\n';
   info = line.substr(11,10);
   //cout<<info<<endl;
   i++;
  
  if(CheckPfr(info)==true)
  {
    pfr+=info;
  }
  if(CheckMod(info)==true)
  {
    mod+=info;
  }
  if(CheckNvx(info)==true)
  {
    nvx+=info;
  }
  if(CheckJsn(info)==true)
  {
    jsn+=info;
  }
  if(CheckAsz(info)==true)
  {
    asz+=info;
  }

 }

 
 
  myfile.close();

cout<<"THE AMOUNT OF ROWS IS "<<i<<endl;
cout<<"Total PFR vaccinations: "<<findSum(pfr)<<" :2020-12-12 to 2023-01-30"<<endl;
cout<<"Total MOD vaccinations: "<<findSum(mod)<<" :2020-12-15 to 2023-01-30"<<endl;
cout<<"Total NVX vaccinations: "<<findSum(nvx)<<"     :2021-01-01 to 2023-01-20"<<endl;
cout<<"Total JSN vaccinations: "<<findSum(jsn)<<"   :2020-12-30 to 2023-01-19"<<endl;
cout<<"Total ASZ vaccinations: "<<findSum(asz)<<"     :2021-01-04 to 2022-06-01"<<endl;


}
 else cout<<"Unable to open file";
}

//nested for loop 
