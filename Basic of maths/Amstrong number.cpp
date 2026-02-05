# include<iostream>
using namespace std;
int main()
{
       int num;
       cout<<"enter number:"<<endl;
       cin>>num;
       int dup =num;
       int sum = 0;
       while(num>0)
       {
        int lastdigit=num%10;
         sum = sum+(lastdigit*lastdigit*lastdigit);
         num =num/10;    
       }
       if(dup==sum)
       {
       cout<< "Amstrong Number"<<endl;
       }
       else
       {
           cout<<"not amstrong "<<endl;
       }
       return 0;
}
