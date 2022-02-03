#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    
    cout << fixed;
    cout << setprecision(2);
    /*------------------------declarations------------------------------ */
    string names[5]  ={"Schmapple","Lightly Used Grape","Scent Of Pizza","Heavly Used Grape","Bananna?"};
    double prices[5]={1.50,1.0, 0.5,1.25,2.00};
    int choice_list[5]={0,0,0,0,0};
    int choice;
    double money;
    bool on =true;
    string cont;
    string yes_no;
    /*-----------------------------getting user input----------------      */
    cout<<"This is the Schmending Machine! How much money do you have?"<<endl;
    cin>>money;
    while(on==true){
    
    cout<<"enter a product selection (1-5)"<<endl;
    cin>>choice;
    choice -=1;// aligning the user input with the array indexes for ease of use
    if(prices[choice]>=money){
        cout<<"Not enough funds!"<<endl;
    }
    else{
        money-=prices[choice];
        choice_list[choice]+=1;

        cout<< "purchased: "<<names[choice]<<endl;
    
    }
    cout<<"Keep purchasing? (y/n)"<<endl;
    
    cin>>yes_no;
    if(yes_no=="n"){
        on=false;
        cout<<"you purchased: "<<endl;
        for(int i=0;i<5;i++){
            if(choice_list[i]!=0){
                cout<<names[i]<<" - "<<choice_list[i]<<endl;
            }
        }
        cout<<"You have $"<< money <<" remaining. Have a Schmealthy day";
    }

    
    
    }
    return 0;
}
