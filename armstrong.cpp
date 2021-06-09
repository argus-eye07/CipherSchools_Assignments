#include <iostream>  
using namespace std;  
int main()  
{  
int num,r,sum=0,temp;    
cout<<"Enter the Number=  ";    
cin>>num;    
temp=num;    
while(num>0)    
{    
r=num%10;    
sum=sum+(r*r*r);    
num=num/10;    
}    
if(temp==sum)    
cout<<" The Number Is an Armstrong Number"<<endl;    
else    
cout<<" The Number Is Not an Armstrong Number"<<endl;   
return 0;  
}  
