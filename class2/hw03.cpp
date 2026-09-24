#include<iostream>
using namespace std;

int main()
{  int arr[1000];
    int sum=0;
    int n;
    cin>>n;
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
for(int i=0;i<n;i++)
{   
    
    sum+=arr[i];//原本我还加入了sum++，用al改正
    cout<<sum<<" ";
    
}


    system("pause");
    return 0;
}