#include<iostream>
using namespace std;
int main(){

    int n,num,i,count,sum=0;
    cout<<" N is="<<endl;
    cin>>n;

    for(num = 1;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
       
         if(count==0 && num!= 1)
             sum = sum + num;
    }

    cout<< "Sum of prime numbers is: " <<sum;
 
   return 0;
}
