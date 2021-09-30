#include <iostream>

using namespace std;

int main()
{
   int num, num1, n1, n2, n3;
   cout<<"Enter a three-digit number:"<<endl;
   cin>>num;
   if((num<-999) || ((num>-100)&&(num<100)) || (num>999)){
       cout<<"The number is NOT three-digit !!!"<<endl;
   }
   else{
       n1 = num/100;
       num1 = num%100;
       n2 = num/10;
       n3 = num%10;
       
       if((n1 == 7) || (n2 == 7) || (n3 == 7)){
           cout<<"The number 7 belongs to the number "<<num<<endl;
       }
       else{
           cout<<"The number 7 DOESN`T belongs to the number "<<num<<endl;
       }
   }
}