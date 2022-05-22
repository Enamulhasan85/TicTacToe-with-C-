#include <bits/stdc++.h>

using namespace std;

int main(){

    char player1[101],player2[101];
    cout << "Player 1 name? ";
    cin >> player1;
    cout << "\nPlayer 2 name? ";
    cin >> player2;

    int q,End=0;
    for(q=1;End==0;q++){
        int i,j,cnt=1;
        int board[9];
        int  pl1;
        int pl2;
        char finish='0',ch1,ch2;

        for(i=0;i<9;i++){
            board[i]=2;
        }

        cout << "\nA. Gigle\n\nB. Mong\n";

        for(;;){
            if(q%2==1){
                cout << "\n" << player1 << "s choice: A or B? ";
                cin >> ch1;
                if(ch1=='B' or ch1=='A'){
                    if(ch1=='A') ch2 = 'B';
                    else ch2 = 'A';
                    break;
                }
                else{
                    cout << "\nOnly A or B !!!!\n";
                    continue;
                }
            }
            else{
                cout << "\n" << player2 << "s choice: A or B? ";
                cin >> ch2;
                if(ch2=='B' or ch2=='A'){
                    if(ch2=='A') ch1 = 'B';
                    else ch1 = 'A';
                    break;
                }
                else{
                    cout << "\nOnly A or B !!!!\n";
                    continue;
                }
            }
        }

        if(ch1=='A'){
            pl1=0;
            pl2=1;
        }
        else{
            pl1=1;
            pl2=0;
        }

        cout << "\n\n";

        for(i=0;i<3;i++){
            for(j=0;j<6;j++){
                if(j==5 and i!=2){
                    cout << "-----------|";
                    cout << "-----------|";
                    cout << "-----------\n";
                }
                else{
                    if(j==2){
                        cout << "     " << cnt <<  "     |";
                        cnt++;
                    }
                    else    cout << "           |";
                    if(j==2){
                        cout << "     " << cnt <<  "     |";
                        cnt++;
                    }
                    else    cout << "           |";
                    if(j==2){
                        cout << "     " << cnt <<  "      \n";
                        cnt++;
                    }
                    else    cout << "            \n";
                }
            }
        }
        cout << "\n\n";

        //Game started.....................
        int p;
        for(p=0;p<9 and finish=='0';p++){

            if(p%2==0)  cout << "\n\n" << player1 << "s turn \n\nEnter any number from 1 to 9\n\n";
            else    cout << "\n\n" << player2 << "s turn \n\nEnter any number from 1 to 9\n\n";

            cin >> cnt;
            cout << "\n\n";

            if(cnt>9 or cnt<1){
                p--;
                cout << "\n\n!!Number should be from 1 to 9 \n\n";
                continue;
            }
            else if(board[cnt-1]!=2){
                p--;
                cout << "\n\n!!That position is already taken........\n\n";
                continue;
            }
            else if(cnt<10 and cnt>0){
                cout << "Turn : 0" << p+1 << "\n\n";
                if(p%2==0){
                    board[cnt-1]=pl1;
                }
                else{
                    board[cnt-1]=pl2;
                }

                int cnt1=0,cnt2=1,cnt3=2;

                for(i=0;i<3;i++){
                    for(j=0;j<6;j++){
                        if(j==5 and i!=2){
                            cout << "-----------|";
                            cout << "-----------|";
                            cout << "----------- \n";
                        }
                        else{
                            if(board[cnt1]==1){
                                if(j==0)        cout << "           |";
                                else if(j==1)   cout << "   >   <   |";
                                else if(j==2)   cout << "    '-'    |";
                                else if(j==3)   cout << "   [---]   |";
                                else if(j==4){
                                    cout << "           |";
                                    cnt1+=3;
                                }
                            }
                            else if(board[cnt1]==0){
                                if(j==0)        cout << "           |";
                                else if(j==1)   cout << "    o-o    |";
                                else if(j==2)   cout << "   (---)   |";
                                else if(j==3)   cout << "    o-o    |";
                                else if(j==4){
                                    cout << "           |";
                                    cnt1+=3;
                                }
                            }
                            else{
                                cout << "           |";
                                if(j==4){
                                    cnt1+=3;
                                }
                            }

                            if(board[cnt2]==1){
                                if(j==0)        cout << "           |";
                                else if(j==1)   cout << "   >   <   |";
                                else if(j==2)   cout << "    '-'    |";
                                else if(j==3)   cout << "   [---]   |";
                                else if(j==4){
                                    cout << "           |";
                                    cnt2+=3;
                                }
                            }
                            else if(board[cnt2]==0){
                                if(j==0)        cout << "           |";
                                else if(j==1)   cout << "    o-o    |";
                                else if(j==2)   cout << "   (---)   |";
                                else if(j==3)   cout << "    o-o    |";
                                else if(j==4){
                                    cout << "           |";
                                    cnt2+=3;
                                }
                            }
                            else{
                                cout << "           |";
                                if(j==4){
                                    cnt2+=3;
                                }
                            }

                            if(board[cnt3]==1){
                                if(j==0)        cout << "            \n";
                                else if(j==1)   cout << "   >   <    \n";
                                else if(j==2)   cout << "    '-'     \n";
                                else if(j==3)   cout << "   [---]    \n";
                                else if(j==4){
                                    cout << "            \n";
                                    cnt3+=3;
                                }
                            }
                            else if(board[cnt3]==0){
                                if(j==0)        cout << "            \n";
                                else if(j==1)   cout << "    o-o     \n";
                                else if(j==2)   cout << "   (---)    \n";
                                else if(j==3)   cout << "    o-o     \n";
                                else if(j==4){
                                    cout << "            \n";
                                    cnt3+=3;
                                }
                            }
                            else{
                                cout << "            \n";
                                if(j==4){
                                    cnt3+=3;
                                }
                            }
                        }
                    }
                }
                cout << "\n";

                if(p>3){
                    if(board[0]==board[3] and board[3]==board[6] and board[0]!=2){
                        if(board[0]==pl1){
                            finish = 'w';
                        }
                        else{
                            finish = 'l';
                        }
                    }
                    else if(board[1]==board[4] and board[4]==board[7] and board[1]!=2){
                        if(board[1]==pl1){
                            finish = 'w';
                        }
                        else{
                            finish = 'l';
                        }
                    }
                    else if(board[2]==board[5] and board[5]==board[8] and board[2]!=2){
                        if(board[2]==pl1){
                            finish = 'w';
                        }
                        else{
                            finish = 'l';
                        }
                    }
                    else if(board[0]==board[4] and board[4]==board[8] and board[0]!=2){
                        if(board[0]==pl1){
                            finish = 'w';
                        }
                        else{
                            finish = 'l';
                        }
                    }
                    else if(board[6]==board[4] and board[4]==board[2] and board[2]!=2){
                        if(board[6]==pl1){
                            finish = 'w';
                        }
                        else{
                            finish = 'l';
                        }
                    }
                    else if(board[0]==board[1] and board[1]==board[2] and board[0]!=2){
                        if(board[0]==pl1){
                            finish = 'w';
                        }
                        else{
                            finish = 'l';
                        }
                    }
                    else if(board[3]==board[4] and board[4]==board[5] and board[3]!=2){
                        if(board[3]==pl1){
                            finish = 'w';
                        }
                        else{
                            finish = 'l';
                        }
                    }
                    else if(board[6]==board[7] and board[7]==board[8] and board[6]!=2){
                        if(board[6]==pl1){
                            finish = 'w';
                        }
                        else{
                            finish = 'l';
                        }
                    }
                }

            }
            else{
                p--;
                continue;
                cout << "\n\nNumber should be between 1 to 9\n\n";
            }

        }

        if(finish=='w'){
            cout << "Hurray..............................." << player1 << " win the game............................\n\n";
        }
        else if(finish=='l'){
            cout << "Hurray..............................." << player2 << " win the game............................\n\n";
        }
        else{
            cout << "..................The Match is draw..............\n\n";
        }

        cout << "Input 0 to play again or any number to exit.....\n\n";
        cin >> End;
        cout << "\n\n";
    }

}
