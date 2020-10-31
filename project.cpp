//This is my First Project
//Used Language:- C++

#include<bits/stdc++.h>
#include<stdio.h>
#include<time.h>
#include<windows.h>
using namespace std;
int main(){
    cout<<"WELCOME TO ROCK,PAPER AND SCISSORS GAME....\n\n\n_____________________\n\n"<<endl;
    Sleep(1000);
    cout<<"RULES OF THE GAME--->\n(1)IF ROCK MEETS PAPER,PAPER WINS.\n(2)IF ROCK MEETS SCISSORS,ROCK WINS.\n(3)IF PAPER MEETS SCISSORS,SCISSORS WINS.\n(4)IF USER'S AND COMPUTER'S INPUTS ARE SAME, THEN IT WILL BE TIE.\n\n_________________________________\n\n\n"<<endl;
    Sleep(1000);
    string ch;
    cout<<"May I know your name??"<<endl;
    getline(cin, ch);
    Sleep(1000);
    cout<<ch<< " "<<",Nice Name!!!"<<endl;
    Sleep(1000);
      // Fancy printed title, well as fancy as I can do.
    cout << "------------------------------------------------" << endl;
    cout << "-- Lets play Rock, Paper, Scissors!,  " <<ch<< "--" << endl;
    cout << "------------------------------------------------" << endl;
    int game,i,player_win=0,computer_win=0,tie=0,choice;
    cout<<"How many turns you want to play???"<<endl;
    cin>>game;
    for(i=1;i<=game;i++){
    	cout<<"It's Round "<<i<<"\n"<<endl;
    cout << "Press 1 for Rock, 2 for Paper, 3 for Scissors:\t" << endl;
    cin >> choice;
    cout<<"\n"<<endl;
    Sleep(1000);
   
    int ai=rand()%3+1;
    
    cout<<"Now Computer Choosed:\t"<<ai<<endl;
    Sleep(1000);
    if(choice == 1 && ai == 1){
         cout << "Rock meets Rock...So Unfortunately it's a tie!" << endl;
         tie++;
         }
    else if(choice ==1 && ai== 2){
         cout << "Rock is covered by Paper.....computer wins!" << endl;
         computer_win++;
         }
    else if(choice == 1 && ai == 3){
         cout << "Rock crushes Scissors.....you win!" << endl;
         player_win++;
         }
    else if(choice == 2 && ai == 1){
         cout << "Paper covers Rock...you win!" << endl;
         player_win++;
         }
    else if(choice == 2 && ai == 2){
         cout << "Paper meets Paper.......so unfortunately it's a tie!" << endl;
         tie++;
         }
    else if(choice == 2 && ai == 3){
         cout << "Paper is cut by Scissors.....computer wins!" << endl;
         computer_win++;
         }
    else if( choice == 3 && ai == 1){
         cout << "Scissors are crushed by Rock......computer wins!" << endl;
         computer_win++;
         }
    else if( choice == 3 && ai == 2){
         cout << "Scissors cuts Paper......you win!" << endl;
         player_win++;
         }
    else if(choice == 3 && ai == 3){
         cout << "Scissors meet Scissors...So unfortunately it's a tie!" << endl;
         tie++;
         }
         // this is what happens if the player doesn't hit 1 2 or 3
    else{
         cout << "You didn't select 1, 2, or 3... Please press proper key......" << endl;
         }
     Sleep(1000);
     cout<<"\n"<<endl;
}
cout<<"---------ROUNDS ARE OVER!!!!!!-----------"<<endl;
cout<<"\n\n"<<endl;
Sleep(1000);
cout<<"So The Final Result is:\n\n- - - - - - - -  - - - - - - - - - - \n\n "<<endl;
Sleep(500);
cout<<ch<<" : "<<player_win<<"\n"<<endl;
cout<<"Computer: "<<computer_win<<"\n"<<endl;
cout<<"Tie games: "<<tie<<"\n\n"<<endl;
Sleep(1000);
if(player_win<computer_win)
	cout<<"Sorry "<<ch<<" you lost the game.\n\n"<<endl;
else if(player_win>computer_win)
	cout<<"Hurrah!!! "<<ch<<" you won the game.\n\n"<<endl;
else if(player_win==computer_win)
	cout<<ch<<" ,the match is tied.\n\n"<<endl;
Sleep(1000);
cout<<"Thanks for Playing.\n\n"<<endl;
Sleep(1000);
cout<<"-----------------------------------------------"<<endl;
    return 0;
}
