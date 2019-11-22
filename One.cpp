#include <iostream>
using namespace std;
void bina(int);
void oct(int);
void hexa(int);
int main()
{
    int sel=1;
    do{
        int num;
        cout<<"Enter decimal number: \n";
        cin>>num;
        bina(num);
        oct(num);
        hexa(num);
        cout<<"Enter 0 to exit or any to convert another number: \n";
        cin>>sel;
    }while(sel!=0);
    return 0;
}

void bina(int x){
    int i=1,sum=0;
    while(x!=0){
            sum+=((x%2)*i);
            x/=2;
            i*=10;}
        cout<<"The value in binary is: "<<sum<<endl;
}

void oct(int x){
    int sum=0,i=1;
    while(x!=0){
            sum+=((x%8)*i);
            x/=8;
            i*=10;}
        cout<<"The value in octal is: "<<sum<<endl;
}

void hexa(int x){
    int j=0,nux;
    char hexa[1000];
    cout<<"The value in hexadecimal: ";
    while(x!=0){
            nux=(x%16);
            if(nux>9){
                hexa[j]=nux+55;
            }
            else{
                hexa[j]=nux+48;
            }
            x/=16;
            j++;
        }
        for(int l=j-1;l>=0;l--){
            cout<<hexa[l];
        }
        cout<<endl;
}
