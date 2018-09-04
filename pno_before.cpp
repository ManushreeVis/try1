#include <iostream>

using namespace std;

int main()
{
    cout << "enter a no:" << endl;
    int n,num,c;
    cin>>num;
    for(n=num-1;n>1;n--){
        for(int m=2;m<n;m++){
            if(n%m==0){
                c++;
            }}
            if (c== 0)
        {
            if (n == 1)
            {
                cout << "no prime number less than 2";
                break;
            }
            cout << n << " is the last prime number before " << num << endl;
            break;
        }
        c= 0;


    }
    return 0;
}
