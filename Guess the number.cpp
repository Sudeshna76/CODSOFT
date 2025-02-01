#include <iostream>
#include<cstdlib> //include the srand() function
#include<ctime> //include the time function
using namespace std;

int main() {
    cout<<"-------NUMBER GUESSING GAME!-------"<<endl;
    srand((unsigned int)time(NULL));
    int number=(rand()%1000)+1; //random number starting from 0 till 1000
    int guess=0;
    do{
        cout<<"enter your guess:"<<endl;
        cin>>guess;
        if(guess> number){
            cout<<"Guess lower!"<<endl;
        }
        else if(guess<number){
            cout<<"Guess higher!"<<endl;
        }
        else{
            cout<<"CONGRATULATIONS YOU WON!!"<<endl;
        }
        
        
    }
    while(guess!=number);
     
}
