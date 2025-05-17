#include <iostream>
#include <fstream>
#include <stdlib.h> // for exit() function
using namespace std;
int main()
{
    ofstream fout; // create output stream
 fout.open("country"); // connect “country” to it
 fout << "United States of America\n";
 fout.close(); // disconnect “country” and
 fout.open("capital"); // connect “capital”
 fout << "Washington\n";
 fout.close(); // disconnect “capital”

 ifstream fin; // create input stream
 fin.open("country"); // connect “country” to it
 cout <<"contents of country file\n";
 const int SIZE = 80;
 char line[SIZE];
 ifstream fin1, fin2; // create two input streams
 fin1.open("country.txt");
 fin2.open("capital.txt");
 for(int i=1; i<=10; i++)
 {
 if(fin1.eof() != 0)
 {
 cout << "Exit from country \n";
 exit(1);
 }
 fin1.getline(line, SIZE);
 cout << "Capital of "<< line ;
 if(fin2.eof() != 0)
 {
 cout << "Exit from capital\n";
 exit(1);
 }
 fin2.getline(line,SIZE);
 cout << line << "\n";
 }
 return 0;
}