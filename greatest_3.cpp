#include<iostream.h>
using namespace std;
const int len=6;
int arr[len];
int sort(){
int i=0 ,j,k,t;
do{i++;}
while(arr[i]!=arr[len]);
for(j=0;j<i;j++){
    for(k=0;k<i-j;k++){
        if(arr[k]<arr[k+1]){
            t=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=t;
        }
    }
}
return 0;

}


int main()
{
     cout<<"enter 6 nos:"<<endl;

    for(int i=0;i<len;i++){

        cin>>arr[i];
        cout<<endl;
    }
     sort();
     cout<<"highest 3 digit numbers are :"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
