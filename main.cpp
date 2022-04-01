#include <iostream>

using namespace std;


char square[10] = {'k','1','2','3','4','5','6','7','8','9'}; // k nin amacý sýfýrýncý indeksi kullanmak
int kontrol();
void board();

int main()
{
    int player = 1;
    int i,choice;
    char mark;
    do{
        board();
        player=(player %2)?1:2; //1 deðerini at deðilse 2 deðerini at
        cout << "Oyuncu" << player << ", bir numara sec: ";
        cin >> choice;
        mark = (player == 1) ? 'X' : 'O'; // seçtiðin sayýya göre mark ý yerleþtirdik.

        if (choice == 1 && square[1] == '1')
            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else{
            cout << "Hatali Giris";
            player --;
            cin.ignore();
            cin.get();
        }
         i = kontrol();
         player++;

    }
    while(i==-1);
    board();
    if (i==1)
        cout << "==>\aOyuncu " << --player << " kazandi";
    else
        cout << "==>\aOyun berabere ";
    cin.ignore();
    cin.get();
    return 0;
}


int kontrol()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9') //tüm alanlar x ve o ile dolmuþ fakat kazanan olmamýþ ise berabere bitir.
        return 0;
    else
        return -1;   // oyunun devam etme durumu.
}

void board()
{
    cout<<"\n\n\t Tic Tac Toe \n\n";
    cout << "Player 1 (X) - Player 2 (O)" << endl <<endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout <<"  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____"<<endl;
    cout << "     |     |     "<<endl;

    cout <<"  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____"<<endl;
    cout << "     |     |     "<<endl;

    cout <<"  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;


}
