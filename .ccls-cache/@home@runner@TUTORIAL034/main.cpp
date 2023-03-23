#include <iostream>
using namespace std;
void print(int len, int wth);
void input(int &len, int &wth);

int main() {
 int length = 10, width = 5;
  
 input(length, width);
 print(length, width);
 
 return 0;
}


void input(int &len, int &wth)
{
  cout<<"length:";
  cin>>len;
  cout<<"width:";
  cin>>wth;
}

void print(int len, int wth) {
 cout << "Length : " << len<<endl
 << "Width : " << wth << endl;
}


