#include<iostream>
using namespace std;
int main(){
int searchvalue=0;
cout<<"Enter the search value "<<endl;
cin>>searchvalue;
int numbers[10]={12,14,10,15,17,20,22,25,27,30};
bool serch=false;
for(int i=0;i<10;i++)
{
    if(numbers[i]==searchvalue ){
        cout<<"**** Search Found ****"<<endl;
        serch=true;
        break;
    }
}
if(serch==false){
    cout<<"**** Search Not Found "<<endl;
}
return 0;
}