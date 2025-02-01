
#include <iostream>
using namespace std;

int main() {
    cout<<"-------SIMPLE CALCULATOR!-------"<<endl;
    int a,b,choice;
    
    cout<<"enter the first number:"<<endl;
    cin>>a;
    
    cout<<"enter the second number:"<<endl;
    cin>>b;
    
    cout<<"Choose your option:\n1.Addition \n2.Multiplication \n3.Subtraction \n4.Division"<<endl;
    cin>>choice;
    if(choice==1){
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
    }
    else if(choice==2){
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
    }
    else if(choice==3){
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
    }
    else if(choice==4){
        if(b==0){
            cout<<"Division by zero is not allowed"<<endl;
        }
        else{
            cout<<a<<"/"<<b<<"="<<a/b<<endl;
            
        }
        
    }
    else{
        cout<<"Invalid choice!"<<endl;
    }
    return 0;

}
