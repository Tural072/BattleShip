#include <iostream>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#include <iomanip>
#include <stdio.h>

using namespace std;

const int Size = 10;
int board[Size][Size] = {};

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void GotoXY(int X, int Y)
{
    COORD coord = { X, Y };
    SetConsoleCursorPosition(hStdOut, coord);
}
void menu()
{
    int f = 1, k, code;
    cout << "\n\n"; // Bashlangic fiquru
    for (int x = 0; x < 13; x++)
    {
        for (int y = 0; y < 13; y++)
        {
            if (x == 0 || x == y && y < 13 / 2 || x + y == 13 - 1 && y > 13 / 2 - 1)
            {
                cout << "    \t* ";
            }
            else
            {
                cout << "    \t  ";
            }
        }
        cout << endl;
    }
    GotoXY(27, 12);
    cout << "\t\t\t==> Yeni Oyun <==";
    GotoXY(30, 13);
    cout << "\t\t\t      Cixis    ";
    cout << "\n\n\t\t<<BATTLESHIP>> - Oyun ikioyunculudur, novbe kimdedirse o oyuncu koordinat secir reqibin gemisini mehv etmeye chalisir.Eger reqibin secilen koordinatda gemisi varsa gemi mehv edilir ve yene de xod eyni oyuncuda qalir.";
    do
    {
        k = 0;
        code = _getch();
        if (code == 224 || code == 0)
        {
            code = _getch();
        }
        if (code == 80)
        {
            f = f * (-1);
            if (f == 1)
            {
                GotoXY(27, 12);
                cout << "\t\t\t==> Yeni Oyun <==";
                GotoXY(30, 13);
                cout << "\t\t\t      Cixis     ";
            }
            else if (f == 2)
            {
                GotoXY(27, 12);
                cout << "\t\t\t    Yeni Oyun";
                GotoXY(30, 13);
                cout << "\t\t\t      Cixis    ";
            }
            else
            {
                GotoXY(27, 12);
                cout << "\t\t\t    Yeni Oyun    ";
                GotoXY(30, 13);
                cout << "\t\t\t  ==> Cixis <==";
            }
        }
        else if (code == 72)
        {
            f = f * (-1);
            if (f == 1)
            {
                GotoXY(27, 12);
                cout << "\t\t\t==> Yeni Oyun <==";
                GotoXY(30, 13);
                cout << "\t\t\t      Cixis   ";
            }
            else if (f == 2)
            {
                GotoXY(27, 12);
                cout << "\t\t\t    Yeni Oyun    ";
                GotoXY(30, 13);
                cout << "\t\t\t      Cixis    ";
            }
            else
            {
                GotoXY(27, 12);
                cout << "\t\t\t    Yeni Oyun    ";
                GotoXY(30, 13);
                cout << "\t\t\t  ==> Cixis <==";
            }
        }
        else if (code == 13)
        {
            k = 1;
        }
        cout << endl << endl << endl << endl << endl;
    }     while (k == 0);
    {
        if (f != 1)
        {
            exit(0);
        }
    }
    system("cls");
    cout << endl << endl;
}
void figure()
{
    system("cls");
    for (int x = 0; x < 15; x++) // Kvadrat uchun
    {
        for (int y = 0; y < 15; y++)
        {
            if (x == 0 || x == 15 - 1 || y == 0 || y == 15 - 1)
            {
                cout << "    \t* ";
            }
            else
            {
                cout << "    \t ";
            }
            if (x == 6) // Kvadratin duz ortasina yazmaq uchun
            {
                cout << "      \t\t\t\t\t";
                char gameName[12] = { "BATTLESHIP!" };
                for (int i = 0; i < strlen(gameName); i++)
                {
                    Sleep(60);
                    cout << gameName[i];
                }
                break;
            }
        }
        cout << endl;
    }
    Sleep(1500); // Pauza
    cout << "\a"; // Menyu sesi gelir
}
void reminder()
{
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t    Xatirlatma :\n\n";
    cout << "\t\t\t\tIstediyiniz vaxt \'X\'-a basib oyundan cixa bilersiniz\t\t";
    cout << "\n\t\t\t\t";
    char h[53] = "...................................................."; //  Noqteler loading yaratmaq uchundur
    for (int i = 0; i < strlen(h); i++)
    {
        Sleep(50);
        cout << h[i];
    }
    cout << "\n\n";
    Sleep(1000);
    system("cls");
}
void win()
{
    system("cls");
    for (int x = 0; x <= 2; x++)
    {
        if (x <= 1)
        {
            system("Color 05");
            Sleep(200);
            cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\tT";
            system("Color 15");
            Sleep(200);
            cout << " e";
            system("Color 25");
            Sleep(200);
            cout << " b";
            system("Color 35");
            Sleep(200);
            cout << " r";
            system("Color 48");
            Sleep(200);
            cout << " i";
            system("Color 65");
            Sleep(200);
            cout << " k";
            Sleep(200);
            cout << "  ";
            system("Color 85");
            Sleep(200);
            cout << "\n\n\t\t\t\t\t\t\t\tE";
            system("Color 93");
            Sleep(200);
            cout << " d";
            system("Color A5");
            Sleep(200);
            cout << " i";
            system("Color B5");
            Sleep(200);
            cout << " r";
            system("Color C0");
            Sleep(200);
            cout << " i";
            system("Color E5");
            Sleep(200);
            cout << " k";
            system("Color F5");
            Sleep(200);
            system("Color 75");
            cout << " !";
            Sleep(200);
        }
        else
        {
            system("cls");
            for (int x = 0; x < 15; x++)
            {
                for (int y = 0; y < 15; y++)
                {
                    if (x == 0 || x == 15 - 1 || y == 0 || y == 15 - 1)
                    {
                        cout << "    \t* ";
                    }
                    else
                    {
                        cout << "    \t ";
                    }
                    if (x == 6)
                    {
                        cout << "      \t\t\t\t\t";
                        char h[17] = "Uddunuz!\t\t\t\t\t\t\t*";
                        for (int i = 0; i < strlen(h); i++)
                        {
                            Sleep(60);
                            cout << h[i];
                        }
                        break;
                    }
                }
                cout << endl;
            }
        }
    }
}
void tableShow()
{
    system("cls");
    cout << endl << endl << "\t\t\t\t";
    int counter = 0;
    for (int i = 0; i < Size; i++)
    {
        counter++;
        cout << counter;
        cout << "\t";
    }
    cout << "\n\t\t\t\t==========================================================================";
    counter = 0;
    cout << endl << endl << "\t\t";
    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            if (i >= 0 && j == 0)
            {
                counter++;
                cout << "\t" << counter << " |";
            }
            cout << "\t" << board[i][j];
        }
        cout << endl << endl << endl << "\t\t";
    }
}
void main()
{
    srand(unsigned(time(0)));
    system("Color B5");
    menu();
    figure();
    reminder();
    int x, y;
    int enemyShipCounter = 0; // Reqibin gemilerinin yerleri ve sayi
    while (true)
    {
        x = rand() % Size;
        if (x <= 4)
        {
            y = rand() % Size;
            board[x][y] = 1;
            enemyShipCounter++;
            if (enemyShipCounter == 10)
            {
                break;
            }
        }
    }
    int myShipCounter = 0; // Menim gemilerimin yerleri ve sayi
    while (true)
    {
        x = rand() % Size;
        if (x >= 5)
        {
            y = rand() % Size;
            board[x][y] = 1;
            myShipCounter++;
            if (myShipCounter == 10)
            {
                break;
            }
        }
    }
    tableShow();
    bool isMyRound = false;
    while (true)
    {
        cout << "\t\tKoordinati secin : ";
        do
        {
            cin >> x;
            cin >> y;
            if (x > 10 || x <= 0 || y <= 0 || y > 10)
            {
                cout << "\n\t\t\t\t10-a qeder ededler secin!\n\n";
                cout << "\t\t\t\tKoordinati secin : ";
            }
        } while (x > 10 || x <= 0 || y <= 0);
        {
            x--;
            y--;
        }
        if (board[x][y] == 1)
        {
            cout << "\n\t\t\t\tReqib gemi mehv edildi!\a" << endl;
            board[x][y] = 5;
            Sleep(3300);
            tableShow();
            board[x][y] = 0;
            bool shipDetecter = false;
            for (int i = 0; i < Size; i++)
            {
                for (int j = 0; j < Size; j++)
                {
                    if (board[i][j] == 1)
                    {
                        shipDetecter = true;
                        break;
                    }
                }
                if (shipDetecter == true)
                {
                    break;
                }
            }
            if (shipDetecter == false)
            {
                cout << "\t\tSiz Uddunuz!!! Reqibin butun gemileri mehv edildi!" << endl;
                Sleep(4000);
                win();
                Sleep(2000);
                break;
            }
            isMyRound = true;
        }
        else
        {
            cout << "\n\t\t\t\tSiz yan kecdiniz!" << endl;//Siz yan kechdiniz
            board[x][y] = 0;
            isMyRound = false;
            Sleep(3400);
            tableShow();
        }
        while (isMyRound == false) // Komputerin xodu
        {
            cout << "\t\tKomputerin xodu...\n\n";
            x = rand() % 5 + 6;
            y = rand() % 10 + 1;
            cout << "\t\t\t\tKomputer bu koordinati secdi : x[" << x-- << "] è y[" << y-- << "]\n";
            if (board[x][y] == 1)
            {
                cout << "\n\t\t\t\tKomputer senin gemini mehv etdi! \a" << endl;
                board[x][y] = 5;
                Sleep(5500);
                tableShow();
                board[x][y] = 0;
                bool shipDetecter = false;
                for (int i = 10; i < Size; i++)
                {
                    for (int j = 0; j < Size; j++)
                    {
                        if (board[i][j] == 1)
                        {
                            shipDetecter = true;
                            break;
                        }
                    }
                    if (shipDetecter == true)
                    {
                        break;
                    }
                }
                if (shipDetecter == false)
                {
                    cout << "\t\t\t\tKomputer uddu!!! Sizin butun gemiler mehv edildi!" << endl;//Bot uddu Senin butun botlarin  partladildi
                    Sleep(5500);
                    break;
                }
            }
            else
            {
                cout << "\n\t\t\t\tKomputer yan kecdi! Novbe sizdedir..." << endl;//bot yan kechdi senin novbendir
                isMyRound = true;
                board[x][y] = 0;
                Sleep(5500);
                tableShow();
            }
        }
    }
    cout << endl << endl << endl;
    system("pause");
}