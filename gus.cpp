#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand((unsigned int ) time(NULL));
    int number = rand()%100 ;
    int guess =0;
    do
    {
        cout<<"enter the guess between 1 to 100";
        cin>>guess;
        if (guess >number)
        cout <<"guess lower!"<<endl;
        else if(guess<number)
        cout<<"guess higher!"<<endl;
        else
        cout<<"you win"; 
    } while (  guess!=number);
    

}