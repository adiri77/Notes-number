#include<iostream>
using namespace std;
int main(){
    int n,m,j,k;
    cout<<"ENTER RUPEES"<<" ";
    cin>>n;
    m=n/100;
     cout<<"NO. OF 100RS NOTES ARE"<<" "<<m<<endl;

 
    j=(n-100*m)/10;
       cout<<"NO. OF 10RS NOTES ARE"<<" "<<j<<endl;


k=(n-m*100-10*j);
    cout<<"NO. OF 1RS PAISE ARE"<<" "<<k<<endl;
    
    

    return 0;

}