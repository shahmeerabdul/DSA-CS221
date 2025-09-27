#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));
    int userchoice;
    int computerchoice;
    int computerscore=0;
    int userscore=0;
    int rounds;

    cout<<"How many rounds do you want to play? "<<endl;
    cin>>rounds;
    
    for(int i=0; i<rounds; i++){
        cout<<"-------------"<<endl;
        cout<<"Round "<<i+1<<endl;
        cout<<"-------------"<<endl;

    cout<<"Guess A Number Between 0 and 10 : ";
    cin>>userchoice;

    while(userchoice>10 || userchoice<0){
        cout<<"Please Enter Correct Choice : ";
        cin>>userchoice; 
           
    }
    
    computerchoice=rand()%11;
    cout<<"Computer Generated : "<<computerchoice<<endl;
    

    if(computerchoice==userchoice){
        cout<<"Congratulations! Your Guess was Right "<<endl;
        userscore++;
    }

    else{
        cout<<"Oh! Your guess was not correct "<<endl;
        computerscore++;
    }
    }

    cout<<"Final Score "<<endl;
    cout<<"Your Score : "<<userscore<<endl;
    cout<<"Computer Score : "<<computerscore<<endl;

    if(userscore>computerscore){
        cout<<"You Win! "<<endl;
    }
    else{
        cout<<"Computer Wins Better Luck Next Time "<<endl;
    }

return 0;
}
