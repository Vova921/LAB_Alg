#include <iostream>

using namespace std;

int main()
{
    int n, c;
    cout << "How many seconds have passed since the beginning of the day:" << endl;
    cin >> n;
    if(n<0){
        cout<<"ERROR"<<endl;
    }
    else{
    c = n%60;
    cout<<c<<" seconds have passed since the beginning of the last minute";
  }
}