#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int n, c;
    cout << "Скільки минуло секунд від початку доби:" << endl;
    cin >> n;
    if(n<0){
        cout<<"ERROR"<<endl;
    }
    else{
    c = n%60;
    cout<<c<<" секунд пройшло від початку останньї хвилини"<<endl;
  }
}