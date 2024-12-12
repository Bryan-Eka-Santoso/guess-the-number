#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int level, rounds, lives, score, random, tebak = 0, range = 40, totalscore = 0, roundscomp= 0;
    srand(time(0));

    cout << "=== Play Guess the Number ===" << endl;
    cout << "Choose your difficulty: " << endl;
    cout << "1. Easy" << endl;
    cout << "2. Medium" << endl;
    cout << "3. Hard" << endl;
    cout << ">> ";
    cin >> level;
    cout << endl;

    switch(level){
        case 1:{
            for(rounds=1; rounds <= 3; rounds++){
                range += 10;
                random = (rand() % range) + 1;
                cout << "== Round " << rounds << " ==" << endl;
                    for(lives= 10; lives >= 1; lives--){
                        cout << "Lives: " << lives << " | " << "Range: 1-" << range << endl;
                        cout << "Guess: ";
                        cin >> tebak;
                        if(tebak == random){
                            score = lives * 10;
                            totalscore += score;
                            roundscomp +=1;
                            cout << "Correct!" << endl;
                            cout << "Score after round " << rounds << ": " << totalscore << endl << endl;
                        break;
                        } else {
                            if(tebak > random){
                                cout << "-- Lower" << endl;
                            } else {
                                cout << "-- Higher" << endl;
                            }
                        }
                    if (lives ==1){
                        cout << "Score after round " << rounds << ": " << totalscore << endl;
                        cout << "Out of lives! The Number was: " << random << endl << endl;
                        }
                    }
            }

            if(roundscomp == 3){
                cout << "== Bonus Round! ==" << endl;
                range += 50;
                random = (rand() % range) + 1;
                for(lives=3; lives >= 1; lives--){
                    cout << "Lives: " << lives << " | " << "Range: 1-" << range << endl;
                    cout << "Guess: ";
                    cin >> tebak;

                        if(tebak == random){
                            score = lives * 30;
                            totalscore += score;
                            roundscomp +=1;
                            cout << "Correct!" << endl << endl;
                            cout << "Congratulations! You completed the game!" << endl;
                            cout << "Your final score is: " << totalscore << endl;
                        break;
                        } else {
                            if(tebak > random){
                                cout << "-- Lower" << endl;
                            } else {
                                cout << "-- Higher" << endl;
                            }
                        }

                    if (lives ==1){
                        cout << "Out of lives! The Number was: " << random << endl << endl;
                        cout << "Congratulations! You completed the game!" << endl;
                        cout << "Your final score is: " << totalscore << endl;
                        }

                }
            } else {
                cout << "Congratulations! You completed the game!" << endl;
                cout << "Your final score is: " << totalscore << endl;
            }
        break;
        }
        case 2:{
        for(rounds=1; rounds <= 5; rounds++){
                range += 10;
                random = (rand() % range) + 1;
                cout << "== Round " << rounds << " ==" << endl;
                    for(lives= 7; lives >= 1; lives--){
                        cout << "Lives: " << lives << " | " << "Range: 1-" << range << endl;
                        cout << "Guess: ";
                        cin >> tebak;
                        if(tebak == random){
                            score = lives * 10;
                            totalscore += score;
                            roundscomp +=1;
                            cout << "Correct!" << endl;
                            cout << "Score after round " << rounds << ": " << totalscore << endl << endl;
                        break;
                        } else {
                            if(tebak > random){
                                cout << "-- Lower" << endl;
                            } else {
                                cout << "-- Higher" << endl;
                            }
                        }
                    if (lives ==1){
                        cout << "Score after round " << rounds << ": " << totalscore << endl;
                        cout << "Out of lives! The Number was: " << random << endl << endl;
                        }
                    }
            }

            if(roundscomp == 5){
                cout << "== Bonus Round! ==" << endl;
                range += 50;
                random = (rand() % range) + 1;
                for(lives=3; lives >= 1; lives--){
                    cout << "Lives: " << lives << " | " << "Range: 1-" << range << endl;
                    cout << "Guess: ";
                    cin >> tebak;

                        if(tebak == random){
                            score = lives * 30;
                            totalscore += score;
                            roundscomp +=1;
                            cout << "Correct!" << endl << endl;
                            cout << "Congratulations! You completed the game!" << endl;
                            cout << "Your final score is: " << totalscore << endl;
                        break;
                        } else {
                            if(tebak > random){
                                cout << "-- Lower" << endl;
                            } else {
                                cout << "-- Higher" << endl;
                            }
                        }

                    if (lives ==1){
                        cout << "Out of lives! The Number was: " << random << endl << endl;
                        cout << "Congratulations! You completed the game!" << endl;
                        cout << "Your final score is: " << totalscore << endl;
                        }

                }
            } else {
                cout << "Congratulations! You completed the game!" << endl;
                cout << "Your final score is: " << totalscore << endl;
            }
        break;
        }
        case 3:{
                for(rounds=1; rounds <= 8; rounds++){
                range += 10;
                random = (rand() % range) + 1;
                cout << "== Round " << rounds << " ==" << endl;
                    for(lives= 5; lives >= 1; lives--){
                        cout << "Lives: " << lives << " | " << "Range: 1-" << range << endl;
                        cout << "Guess: ";
                        cin >> tebak;
                        if(tebak == random){
                            score = lives * 10;
                            totalscore += score;
                            roundscomp +=1;
                            cout << "Correct!" << endl;
                            cout << "Score after round " << rounds << ": " << totalscore << endl << endl;
                        break;
                        } else {
                            if(tebak > random){
                                cout << "-- Lower" << endl;
                            } else {
                                cout << "-- Higher" << endl;
                            }
                        }
                    if (lives ==1){
                        cout << "Score after round " << rounds << ": " << totalscore << endl;
                        cout << "Out of lives! The Number was: " << random << endl << endl;
                        }
                    }
            }

            if(roundscomp == 8){
                cout << "== Bonus Round! ==" << endl;
                range += 50;
                random = (rand() % range) + 1;
                for(lives=3; lives >= 1; lives--){
                    cout << "Lives: " << lives << " | " << "Range: 1-" << range << endl;
                    cout << "Guess: ";
                    cin >> tebak;

                        if(tebak == random){
                            score = lives * 30;
                            totalscore += score;
                            roundscomp +=1;
                            cout << "Correct!" << endl << endl;
                            cout << "Congratulations! You completed the game!" << endl;
                            cout << "Your final score is: " << totalscore << endl;
                        break;
                        } else {
                            if(tebak > random){
                                cout << "-- Lower" << endl;
                            } else {
                                cout << "-- Higher" << endl;
                            }
                        }

                    if (lives ==1){
                        cout << "Out of lives! The Number was: " << random << endl << endl;
                        cout << "Congratulations! You completed the game!" << endl;
                        cout << "Your final score is: " << totalscore << endl;
                        }

                }
            } else {
                cout << "Congratulations! You completed the game!" << endl;
                cout << "Your final score is: " << totalscore << endl;
            }
        break;
        }
        default:{
            cout << "Pilih level dengan benar!";
        break;
        }
    break;
    }

    return 0;
}
