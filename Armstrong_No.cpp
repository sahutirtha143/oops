#include<iostream>
using namespace std;
int main()
{
   int n,rev=0,rem,temp;
   cout<<"Enter te number: "<<endl;
   cin>>n;
   temp=n;
   while(n>0){
    rem=n%10;
    rev=rev+(rem*rem*rem);
    n=n/10;
   }
   if(temp==rev)
   cout<<temp<<" is a Armstrong number.";
   else
   cout<<temp<<" is not a Armstrong number.";

    return 0;
}