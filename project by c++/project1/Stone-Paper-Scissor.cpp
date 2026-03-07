#include <iostream>
using namespace std;
struct stGameResults
{
    int PlayerWinTimes = 0  ;
    int ComputerWinTimes = 0;
    int DrawTimes = 0;
};

enum enGameChoices {Stone =1 , Paper = 2 , Scissor = 3};
int ReadPositiveNumber (string Messages)
{
    int Number ;
    do
    {
        cout << Messages;
        cin >> Number;
    } while (Number < 0);
    return Number;
}
int RandNumber (int From , int To)
{
    int RandNum = rand () % (To - From +1) + From ;
    return RandNum;
} 
enGameChoices PlayerChoices (int choose)
{
    enGameChoices SelectedType ;
    SelectedType =  (enGameChoices)choose;
    switch (SelectedType)
    {
    case enGameChoices::Stone:
    return enGameChoices::Stone;
    case enGameChoices::Paper:
    return enGameChoices::Paper;
    case enGameChoices::Scissor:
    return enGameChoices::Scissor;
    default:
    return enGameChoices::Stone;
    }

}
string GetChoiceName(enGameChoices Choice) 
{
    string arr[] = {"", "Stone", "Paper", "Scissor"};
    return arr[Choice];
}
enGameChoices ComputerChoice ()
{
    enGameChoices ComputerChoose = (enGameChoices) RandNumber (1 ,3);
    return ComputerChoose;
}
void CompireResult (enGameChoices PlayerSelection, enGameChoices ComputerSelection ,stGameResults &Results)
{
    if (PlayerSelection == ComputerSelection) 
    {
        cout << "\033[1;33m No Winner \033[0m" << endl;
        Results.DrawTimes++;
    }
    else if (PlayerSelection == enGameChoices::Scissor && ComputerSelection == enGameChoices::Paper)
    {
        cout << "\033[1;32m player winner \033[0m" << endl;
        Results.PlayerWinTimes++;
    }
    else if (PlayerSelection == enGameChoices::Scissor && ComputerSelection == enGameChoices::Stone)
    {
        cout << "\033[1;31m Computer winner \033[0m" << endl;
        Results.ComputerWinTimes++;
    }
    else if (PlayerSelection == enGameChoices::Paper && ComputerSelection == enGameChoices::Stone)
    {
        cout << "\033[1;32m player winner \033[0m" << endl;
        Results.PlayerWinTimes++;
    }
    else if (PlayerSelection == enGameChoices::Paper && ComputerSelection == enGameChoices::Scissor)
    {
        cout << "\033[1;31m Computer winner \033[0m" << endl;
        Results.ComputerWinTimes++;
    }
    else if (PlayerSelection == enGameChoices::Stone && ComputerSelection == enGameChoices::Scissor)
    {
        cout << "\033[1;32m player winner \033[0m" << endl;
        Results.PlayerWinTimes++;
    }
    else if (PlayerSelection == enGameChoices::Stone && ComputerSelection == enGameChoices::Paper)
    {
        cout << "\033[1;31m Computer winner \033[0m" << endl;
        Results.ComputerWinTimes++;
    }
}
void GameBody (int RoundNumber, int PlayerChose ,stGameResults &Results)
{
    enGameChoices PlayerSelection = PlayerChoices(PlayerChose);
    enGameChoices CompSelection = ComputerChoice(); 
    cout << "_______________________Round ["<< RoundNumber << "]_____________________\n";
    cout << "player1 Choices " << GetChoiceName (PlayerSelection) << endl;
    cout << "Computer Choices " << GetChoiceName (CompSelection ) << endl;
    cout << "Round Winner " ;CompireResult (PlayerSelection , CompSelection ,Results) ;
    cout << "______________________________________________________\n";
}
void ShowFinalResults(int TotalRounds, stGameResults Results) 
{
    cout << "\n\n\t\t\033[1;33m_________________________________________________\n";
    cout << "\t\t\t\t +++ Game Over +++ \n";
    cout << "\t\t_________________________________________________\n\n";
    
    cout << "\t\t________________ [Game Results ] ________________\n\n";
    
    cout << "\t\t Game Rounds        : " << TotalRounds << endl;
    cout << "\t\t Player1 won times  : " << Results.PlayerWinTimes << endl;
    cout << "\t\t Computer won times : " << Results.ComputerWinTimes << endl;
    cout << "\t\t Draw times         : " << Results.DrawTimes << endl;
    string FinalWinner = "No Winner";
    if (Results.PlayerWinTimes > Results.ComputerWinTimes) FinalWinner = "Player1";
    else if (Results.ComputerWinTimes > Results.PlayerWinTimes) FinalWinner = "Computer";

    cout << "\t\t Final Winner       : " << FinalWinner << endl;
    cout << "\t\t_________________________________________________\033[0m\n\n";
}
void StartGame ()
{
    char PlayAgain = 'y';
    do
    {
        stGameResults Results;
        int TotalRounds = ReadPositiveNumber("How Many Rounds 1 to 10? ");
    for (int i = 1; i <= TotalRounds; i++)
    {
        cout << "\nRound [" << i <<"] begins : \n";
        int Choice = ReadPositiveNumber ("\n Your Choices: [1]Stone ,[2]Paper ,[3]Scissor \n");
        GameBody(i, Choice, Results);
    }
    ShowFinalResults(TotalRounds, Results);
    cout << "Do you want to play again? Y/N? ";
    cin >> PlayAgain;
}
    while (PlayAgain == 'y');

}
int main ()
{
    srand((unsigned)time(NULL));
    StartGame ();
    return 0;
}