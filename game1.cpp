// Snake,Water, Gun Game
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    cout << " No. of times you wish to play this game: \n";
    int n;
    cin >> n;
    int count =n;
    for(int i=0;i<n;i++){
        srand(time(0));
        int r;
        r = rand() % 3 + 1;
/*  1 = snake 2 = water 3 = gun */
        cout << "You can choose three of the following options:  \n";
        cout << "1. Press 's' for snake\n";
        cout << "2. Press 'g' for gun\n";
        cout<< "3. Press 'w' for water\n";
        char s,g,w;
        char you;
        cin >> you;
        if((you=='s') || (you=='w') || (you=='g')){
        if ((you=='s' && r==1) || (you=='g'&&r==3) || (you=='w'&&r==2))
            cout << "Draw!\n";
        else if ((you == 's' && r == 2) || (you == 'w' && r == 3) || (you == 'g' && r == 1))
        {  cout << "You won!\n";
            cout << "---------------------------------------"<< endl; }
        else 
            cout << "You lost!\n";
        cout << "-------------------------------------------"<< endl;
        count --;
        if(count==0)
            cout << "Game ends\n";
        cout << "Trials left: "<< count << endl;
    }
    else{
        cout << "Invalid Input, try again\n";
    }
    }

    return 0;
}
