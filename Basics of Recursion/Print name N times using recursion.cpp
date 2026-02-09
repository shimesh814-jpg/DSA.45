/*Recursion is a programming technique where a function calls itself repeatedly until a specific base condition is met.
 A function that performs such self-calling behavior is known as a recursive function, and each instance of the function 
 calling itself is called a recursive call.*/
#include <iostream>
using namespace std;
void printname(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<"Rohit Sharma"<<endl;
    printname(n-1);

}
int main()
{
    printname(5);
    return 0;
}