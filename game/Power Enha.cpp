#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
#include <windows.h>
using namespace std;

// mainmenu functions;
void Header();
int options();
int login();
void keys();
void instruction();
void sub_option();
void startgame();
void level2();
void maze();
void printplanet();
void starting();
bool gameRunning = true;
bool gameover = true;
string newgame();
int count = 3;
char block = 207;
char heart = 3;
void enemygameover();
void gamewin();
void maze2();
void level1();
char maze3[35][130];
char maze1[35][130];

// pre defined function
char getCharAtxy(short int x, short int y);
void gotoxy(int x, int y);
void clear();

// COlors
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void lightBlue();
void lightRed();
void pink();
void yellow();
void white();
void grey();
void blue();
void green();
void red();

// Cordinates of player
int RescoX = 10;
int RescoY = 10;

// function of player.
void Player();
void moveLeft();
void moveRight();
void moveUp();
void moveDown();
// void clear(int x, int y, char previous);
void erase();

// Player Bullet
int bulletX[100];
int bulletY[100];
int bulletCount = 0;

// bullet functions
void generatebullet();
void erasebullet(int x, int y);
void printbullet(int x, int y);
void makebulletinactive(int index);
void movebullet();

// Cordinated of enemy1
int enemyX = 10;
int enemyY = 5;

// Functions of Enemy1

string enemydirection = "left";
void moveenemy();
void eraseE(int x, int y);
void printE(int x, int y);
int timer = 0;

// Cordinated of enemy2
int enemy2X = 50;
int enemy2Y = 8;
int enemy2Shot = 0;

// Functions of Enemy2
int random;
void moveup();
void movedown();
void moveleft();
void moveright();
void eraseE2(int x, int y);
void printE2(int x, int y);
void randomE();

// Score
void printScore();
int Score = 0;

// colision
void colision();
void playercollisionwithenemy1();
void playercollisionwithenemy2();
void playercollisionwithenemy3();
void playercollisionwithenemy4();
void playercollisionwithenemy5();

// bullets of enemy1
int timer1 = 0;
void generatebulletenemy();
void movebulletenemy();
int bulletEX[100];
int bulletEY[100];
int bulletECount = 0;
void printEbullet(int x, int y);
void eraseEbullet(int x, int y);
void makeEbulletinactive(int index);

// bullets of enemy2
void generatebulletenemy2();
void movebulletenemy2();
int bulletE2X[100];
int bulletE2Y[100];
int bulletE2Count = 0;
void printE2bullet(int x, int y);
void eraseE2bullet(int x, int y);
void makeE2bulletinactive(int index);

// health of enemy
void health1();
void enemyhealth1();
void health2();
void enemyhealth2();
void enemyhealth4();
void enemyhealth3();
void enemyhealth5();
void health3();
void health4();
void health5();
int HEALTH = 3;
int health = 3;
int E3health = 10;
int E4health = 10;
int E5health = 10;

// health of Player
void playerhealth();
void playerhealth2();
void playerhealth3();
void playerhealth4();
void playerhealth5();
int Phealth = 10;
void Printplayerhealth();


// food palltes
void foodpallet();
void hurdles();
int timer2 = 0;
int timer3 = 0;

// variables of e3
int bulletCountE3 = 0;
int bulletE3X[10000];
int bulletE3Y[10000];
bool isActiveE3[10000];

// Cordinated of enemy3
int enemy3X = 10;
int enemy3Y = 2;

// Functions of enemy3

void moveenemy3();
void eraseenemy3(int x, int y);
void printE3(int x, int y);
void generatebulletE3();
void movebulletE3();
void printbulletE3(int x, int y);
void erasebulletE3(int x, int y);
void makeE3bulletinactive(int index);

// Cordinated of enemy 4
int enemy4X = 9;
int enemy4Y = 2;
int enemy4Shot = 0;

// Functions of Enemy 4
int random2;
void moveup2();
void movedown2();
void moveleft2();
void moveright2();
void eraseE4(int x, int y);
void printE4(int x, int y);
void randomE2();

// bullets of enemy4
void generatebulletenemy4();
void movebulletenemy4();
int bulletE4X[100];
int bulletE4Y[100];
int bulletE4Count = 0;
void printE4bullet(int x, int y);
void eraseE4bullet(int x, int y);
void makeE4bulletinactive(int index);

// Cordinated of enemy 5
int enemy5X = 20;
int enemy5Y = 6;

// Functions of Enemy 5

string enemydirection5 = "left";
void moveenemy5();
void eraseE5(int x, int y);
void printE5(int x, int y);
int timer5 = 0;

// bullets of enemy 5
void generatebulletenemy5();
void movebulletenemy5();
int bulletE5X[100];
int bulletE5Y[100];
int bulletE5Count = 0;
void printE5bullet(int x, int y);
void eraseE5bullet(int x, int y);
void makeEbulletinactive5(int index);

void reset();

// file handling
void loadata();
void loadata1();
void loadata2();
void savedata();
void savedata1();
void savedata2();
string getfield(string record, int field);

main()
{
    system("cls");
    savedata1();
    savedata2();
    loadata1();
    loadata2();
    starting();
    int option = 0;
    string num = " ";
    while (option != 3)
    {
        system("cls");
        Header();
        option = login();
        if (option == 1)
        {
            num = newgame();
            if (num == "1")
            {
                loadata();
                if (gameover == true)
                {
                    startgame();
                }
                else
                {
                    cout << "There is nothing saved yet ----------" << endl;
                    cout << "Press any key to continue . " << endl;
                    getch();
                    continue;
                }
            }
            if (num == "2")
            {
                gameover = true;
                RescoX = 10;
                RescoY = 10;
                HEALTH = 10;
                Phealth = 10;
                health = 10;
                E3health = 10;
                E4health = 10;
                enemy3X = 10;
                enemy3Y = 2;
                enemy2X = 60;
                enemy2Y = 4;
                enemyX = 10;
                enemyY = 5;
                enemy4X = 9;
                enemy4Y = 2;
                enemy5X = 20;
                enemy5Y = 6;
                E5health = 10;
                count = 3;
                Score = 0;
                startgame();
            }
        }
        if (option == 2)
        {
            sub_option();
        }
    }
}

// main menu
int login()
{
    blue();
    int option;
    cout << "              " << endl;
    cout << "Enter any of thr following option = " << endl;
    cout << "1. START" << endl;
    cout << "2. OPTION" << endl;
    cout << "3.EXIT" << endl;
    cin >> option;
    return option;
}
int options()
{
    blue();
    system("cls");
    Header();
    int option;
    cout << "            " << endl;
    cout << "Enter any of thr following option = " << endl;
    cout << "1. KEYS" << endl;
    cout << "2. INSTRUCTION" << endl;
    cout << "3.EXIT" << endl;
    cin >> option;
    return option;
}
void sub_option()
{
    int print = 0;
    while (print != 3)
    {
        print = options();
        if (print == 1)
        {
            keys();
        }
        if (print == 2)
        {
            instruction();
        }
    }
}
void keys()
{
    system("cls");
    blue();
    Header();
    cout << "             " << endl;
    cout << "*******        KEYS        *********" << endl;
    cout << "_____________________________________" << endl;
    cout << "1. UP                    GO UP " << endl;
    cout << "2. Down                  Go down" << endl;
    cout << "3. Left                  GO left " << endl;
    cout << "4. Right                 GO right " << endl;
    cout << "5. Space                 jump " << endl;
    cout << "6.Enter                  shoot fire" << endl;
    cout << "6. ESC                   end game" << endl;
    cout << "Press any key to exit = " << endl;
    getch();
}
void instruction()
{
    blue();
    system("cls");
    Header();
    cout << "            " << endl;
    cout << "*******    INSTRUCTION    *********" << endl;
    cout << "_____________________________________" << endl;
    cout << "Press any key to exit = " << endl;
    getch();
}
void Header()
{
    yellow();
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "           $$$$$$$\\   $$$$$$\\  $$\\      $$\\ $$$$$$$$\\ $$$$$$$\\  " << endl;
    cout << "           $$  __$$\\ $$  __$$\\ $$ | $\\  $$ |$$  _____|$$  __$$\\       " << endl;
    cout << "           $$ |  $$ |$$ /  $$ |$$ |$$$\\ $$ |$$ |      $$ |  $$ |     " << endl;
    cout << "           $$$$$$$  |$$ |  $$ |$$ $$ $$\\$$ |$$$$$\\    $$$$$$$  |      " << endl;
    cout << "           $$  ____/ $$ |  $$ |$$$$  _$$$$ |$$  __|   $$  __$$<      " << endl;
    cout << "           $$ |      $$ |  $$ |$$$  / \\$$$ |$$ |      $$ |  $$ |     " << endl;
    cout << "           $$ |       $$$$$$  |$$  /   \\$$ |$$$$$$$$\\ $$ |  $$ |     " << endl;
    cout << "           \\__|       \\______/ \\__/     \\__|\\________|\\__|  \\__| " << endl;
    cout << "                         " << endl;
    cout << "                         " << endl;
    cout << "                       $$$$$$$$\\ $$\\   $$\\ $$\\   $$\\ $$\\   $$\\  $$$$$$\\   " << endl;
    cout << "                       $$  _____|$$ |  $$ |$$$\\  $$ |$$ |  $$ |$$  __$$\\  " << endl;
    cout << "                       $$ |      $$ |  $$ |$$$$\\ $$ |$$ |  $$ |$$ /  $$ | " << endl;
    cout << "                       $$$$$\\    $$ |  $$ |$$ $$\\$$ |$$$$$$$$ |$$$$$$$$ | " << endl;
    cout << "                       $$  __|   $$ |  $$ |$$ \\$$$$ |$$  __$$ |$$  __$$ | " << endl;
    cout << "                       $$ |      $$ |  $$ |$$ |\\$$$ |$$ |  $$ |$$ |  $$ | " << endl;
    cout << "                       $$$$$$$$\\ $$$$$$$  |$$ | \\$$ |$$ |  $$ |$$ |  $$ | " << endl;
    cout << "                       \\________| \\______/ \\__|  \\__|\\__|  \\__|\\__|  \\__| " << endl;
    cout << " " << endl;
    cout << " " << endl;
}
void clear()
{
    cout << "Press any key to continue..........";
    getch();
    system("cls");
}

// colors

void lightBlue()
{
    SetConsoleTextAttribute(h, 3);
}
void lightRed()
{
    SetConsoleTextAttribute(h, 4);
}
void pink()
{
    SetConsoleTextAttribute(h, 5);
}
void yellow()
{
    SetConsoleTextAttribute(h, 6);
}
void white()
{
    SetConsoleTextAttribute(h, 7);
}
void grey()
{
    SetConsoleTextAttribute(h, 8);
}
void blue()
{
    SetConsoleTextAttribute(h, 9);
}
void green()
{
    SetConsoleTextAttribute(h, 10);
}
void red()
{
    SetConsoleTextAttribute(h, 12);
}
void lightYellow()
{
    SetConsoleTextAttribute(h, 14);
}

// start page of game
void startgame()
{
    savedata();
    reset();
    system("cls");
    gameRunning = true;
    maze();
    Player();
    printE(enemyX, enemyY);
    printE2(enemy2X, enemy2Y);
    // printE3(enemy3X, enemy3Y);
    // printE4(enemy4X, enemy4Y);

    while (gameRunning == true)
    {

        // loadata();
        if (GetAsyncKeyState(VK_LEFT))
        {
            moveLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveRight();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            moveUp();
        }

        if (GetAsyncKeyState(VK_DOWN))
        {
            moveDown();
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            generatebullet();
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            savedata();
            gameRunning = false;
        }
        if (timer2 == 40)
        {
            foodpallet();
            timer2 = 0;
        }
        timer2++;
        if (timer3 == 30)
        {
            hurdles();
            timer3 = 0;
        }
        timer3++;
        if (timer == 2)
        {

            if (HEALTH > 0)
            {
                playercollisionwithenemy1();

                moveenemy();
            }
            else
            {
                eraseE(enemyX, enemyY);
                enemyX = 140;
                enemyY = 0;
            }

            if (health > 0)
            {
                playercollisionwithenemy2();
                randomE();
            }
            else
            {
                eraseE2(enemy2X, enemy2Y);
                enemy2X = 170;
                enemy2Y = 0;
            }
            timer = 0;
        }
        timer++;
        // randomE2();
        movebullet();
        colision();
        if (timer1 == 4)
        {
            if (HEALTH > 0)
            {
                generatebulletenemy();
            }
            if (health > 0)
            {
                generatebulletenemy2();
            }
            timer1 = 0;
        }
        timer1++;
        // movebulletE3();
        movebulletenemy();
        movebulletenemy2();
        playerhealth2();
        playerhealth();
        enemyhealth1();
        enemyhealth2();
        printScore();
        health1();
        health2();
        Printplayerhealth();
        if (health <= 0 && HEALTH <= 0)
        {
            system("cls");
            level2();
        }
        Sleep(50);
        enemygameover();
    }
}

void level2()
{
    savedata();
    level1();
    reset();
    gameRunning = true;
    maze2();
    Player();
    printE3(enemy3X, enemy3Y);
    printE4(enemy4X, enemy4Y);
    printE5(enemy5X, enemy5Y);

    while (gameRunning == true)
    {

        // loadata();
        if (GetAsyncKeyState(VK_LEFT))
        {
            moveLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveRight();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            moveUp();
        }

        if (GetAsyncKeyState(VK_DOWN))
        {
            moveDown();
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            generatebullet();
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            savedata();
            gameRunning = false;
        }
        if (timer2 == 40)
        {
            foodpallet();
            timer2 = 0;
        }
        timer2++;
        if (timer3 == 30)
        {
            hurdles();
            timer3 = 0;
        }
        timer3++;
        if (timer == 2)
        {
            if (E3health > 0)
            {
                playercollisionwithenemy3();
                moveenemy3();
            }
            else
            {
                eraseenemy3(enemy3X, enemy3Y);
                enemy3X = 160;
                enemy3Y = 0;
            }
            if (E4health > 0)
            {
                playercollisionwithenemy4();
                randomE2();
            }
            else
            {
                eraseE4(enemy4X, enemy4Y);
                enemy4X = 170;
                enemy4Y = 0;
            }
             if (E5health > 0)
            {
                playercollisionwithenemy5();
                moveenemy5();
            }
            else
            {
                eraseE5(enemy5X, enemy5Y);
                enemy5X = 180;
                enemy5Y = 0;
            }
            
            timer = 0;
        }
        timer++;
        movebullet();
        colision();
        if (timer1 == 4)
        {

            if (E3health > 0)
            {
                generatebulletE3();
            }
            if (E4health > 0)
            {
                generatebulletenemy4();
            }
            if(E5health > 0)
            {
                generatebulletenemy5();
            }
            timer1 = 0;
        }
        timer1++;
        movebulletE3();
        // movebulletenemy();
        // movebulletenemy2();
        movebulletenemy4();
        movebulletenemy5();
        // playerhealth2();
        // playerhealth();
        playerhealth3();
        playerhealth4();
        playerhealth5();
        // enemyhealth1();
        // enemyhealth2();
        enemyhealth3();
        enemyhealth4();
        enemyhealth5();
        // scoreincrease();
        printScore();
        // health1();
        // health2();
        health3();
        health4();
        health5();
        Printplayerhealth();
        // playercollisionwithenemy1();
        // playercollisionwithenemy2();
        enemygameover();
        Sleep(50);
    }
}
// movement of player
void moveLeft()
{
    char nextLocation1 = getCharAtxy(RescoX - 1, RescoY);
    char nextLocation2 = getCharAtxy(RescoX - 1, RescoY + 1);

    if ((nextLocation1 == ' ' && nextLocation2 == ' ') || (nextLocation1 == '0' || nextLocation2 == '0') || (nextLocation1 == '<' || nextLocation2 == '<') || (nextLocation1 == '>' || nextLocation2 == '>'))
    {
        erase();
        RescoX = RescoX - 1;
        Player();
    }
    if (nextLocation1 == heart)
    {
        Score++;
        gotoxy(RescoX - 1, RescoY);
        cout << " ";
    }
    if (nextLocation2 == heart)
    {
        Score++;
        gotoxy(RescoX - 1, RescoY + 1);
        cout << " ";
    }
    if (nextLocation1 == block)
    {
        Phealth = Phealth - 5;
        gotoxy(RescoX - 1, RescoY);
        cout << " ";
    }
    if (nextLocation2 == block)
    {
        Phealth = Phealth - 5;
        gotoxy(RescoX - 1, RescoY + 1);
        cout << " ";
    }
}
void moveRight()
{
    char nextLocation1 = getCharAtxy(RescoX + 5, RescoY);
    char nextLocation2 = getCharAtxy(RescoX + 5, RescoY + 1);
    if ((nextLocation1 == ' ' && nextLocation2 == ' ') || (nextLocation1 == '0' || nextLocation2 == '0') || (nextLocation1 == '<' || nextLocation2 == '<') || (nextLocation1 == '>' || nextLocation2 == '>'))
    {
        erase();
        RescoX = RescoX + 1;
        Player();
    }
    if (nextLocation1 == heart)
    {
        Score++;
        gotoxy(RescoX + 5, RescoY);
        cout << " ";
    }
    if (nextLocation2 == heart)
    {
        Score++;
        gotoxy(RescoX + 5, RescoY + 1);
        cout << " ";
    }
    if (nextLocation1 == block)
    {
        Phealth = Phealth - 5;
        gotoxy(RescoX + 5, RescoY);
        cout << " ";
    }
    if (nextLocation2 == block)
    {
        Phealth = Phealth - 5;
        gotoxy(RescoX + 5, RescoY + 1);
        cout << " ";
    }
    if (nextLocation1 == '~')
    {

        gotoxy(RescoX + 5, RescoY);
        cout << " ";
        Sleep(50);
        gamewin();
    }
    if (nextLocation2 == '~')
    {
        gotoxy(RescoX + 5, RescoY + 1);
        cout << " ";
        Sleep(50);
        gamewin();
    }
}
void moveUp()
{
    char nextLocation = getCharAtxy(RescoX, RescoY - 1);
    char nextLocation1 = getCharAtxy(RescoX + 1, RescoY - 1);
    char nextLocation2 = getCharAtxy(RescoX + 2, RescoY - 1);
    char nextLocation3 = getCharAtxy(RescoX + 3, RescoY - 1);
    char nextLocation4 = getCharAtxy(RescoX + 4, RescoY - 1);
    if (nextLocation == ' ' && nextLocation1 == ' ' && nextLocation2 == ' ' && nextLocation3 == ' ' && nextLocation4 == ' ')
    {
        erase();
        RescoY = RescoY - 1;
        Player();
    }
    if (nextLocation == heart)
    {
        Score++;
        gotoxy(RescoX, RescoY - 1);
        cout << " ";
    }
    if (nextLocation1 == heart)
    {
        Score++;
        gotoxy(RescoX + 1, RescoY - 1);
        cout << " ";
    }
    if (nextLocation2 == heart)
    {
        Score++;
        gotoxy(RescoX + 2, RescoY - 1);
        cout << " ";
    }
    if (nextLocation3 == heart)
    {
        Score++;
        gotoxy(RescoX + 3, RescoY - 1);
        cout << " ";
    }
    if (nextLocation4 == heart)
    {
        Score++;
        gotoxy(RescoX + 4, RescoY - 1);
        cout << " ";
    }
    if (nextLocation == block)
    {
        Phealth = Phealth - 5;
        gotoxy(RescoX, RescoY - 1);
        cout << " ";
    }
    if (nextLocation1 == block)
    {
        Phealth = Phealth - 5;
        gotoxy(RescoX + 1, RescoY - 1);
        cout << " ";
    }
    if (nextLocation2 == block)
    {
        Phealth = Phealth - 5;
        gotoxy(RescoX + 2, RescoY - 1);
        cout << " ";
    }
    if (nextLocation3 == block)
    {
        Phealth = Phealth - 5;
        gotoxy(RescoX + 3, RescoY - 1);
        cout << " ";
    }
    if (nextLocation4 == block)
    {
        Phealth = Phealth - 5;
        gotoxy(RescoX + 4, RescoY - 1);
        cout << " ";
    }
}
void moveDown()
{
    char nextLocation1 = getCharAtxy(RescoX, RescoY + 2);
    char nextLocation2 = getCharAtxy(RescoX + 1, RescoY + 2);
    char nextLocation3 = getCharAtxy(RescoX + 2, RescoY + 2);
    char nextLocation4 = getCharAtxy(RescoX + 3, RescoY + 2);
    char nextLocation5 = getCharAtxy(RescoX + 4, RescoY + 2);
    if (nextLocation1 == ' ' && nextLocation2 == ' ' && nextLocation3 == ' ' && nextLocation4 == ' ' && nextLocation5 == ' ')
    {
        erase();
        RescoY = RescoY + 1;
        Player();
    }
    if (nextLocation1 == heart)
    {
        Score++;
        gotoxy(RescoX, RescoY + 2);
        cout << " ";
    }
    if (nextLocation2 == heart)
    {
        Score++;
        gotoxy(RescoX + 1, RescoY + 2);
        cout << " ";
    }
    if (nextLocation3 == heart)
    {
        Score++;
        gotoxy(RescoX + 2, RescoY + 2);
        cout << " ";
    }
    if (nextLocation4 == heart)
    {
        Score++;
        gotoxy(RescoX + 3, RescoY + 2);
        cout << " ";
    }
    if (nextLocation5 == heart)
    {
        Score++;
        gotoxy(RescoX + 4, RescoY + 2);
        cout << " ";
    }
    if (nextLocation1 == block)
    {
        Phealth = Phealth - 5;
        gotoxy(RescoX, RescoY + 2);
        cout << " ";
    }
    if (nextLocation2 == block)
    {
        Phealth = Phealth - 5;
        gotoxy(RescoX + 1, RescoY + 2);
        cout << " ";
    }
    if (nextLocation3 == block)
    {
        Phealth = Phealth - 5;
        gotoxy(RescoX + 2, RescoY + 2);
        cout << " ";
    }
    if (nextLocation4 == block)
    {
        Phealth = Phealth - 5;
        gotoxy(RescoX + 3, RescoY + 2);
        cout << " ";
    }
    if (nextLocation5 == block)
    {
        Phealth = Phealth - 5;
        gotoxy(RescoX + 4, RescoY + 2);
        cout << " ";
    }
}
// print player
void Player()
{
    white();
    // Player character
    char p = 'P';
    char top = 17;
    char middle = 219;
    char bottom = 16;
    char Resco1[2][5] = {{' ', ' ', p, ' ', ' '},
                         {top, middle, middle, middle, bottom}};

    for (int x = 0; x < 2; x++)
    {
        gotoxy(RescoX, RescoY + x);
        for (int y = 0; y < 5; y++)
        {
            cout << Resco1[x][y];
        }
    }
}
// Erase player
void erase()
{
    for (int x = 0; x < 2; x++)
    {
        gotoxy(RescoX, RescoY + x);
        for (int y = 0; y < 5; y++)
        {
            cout << " ";
        }
    }
}
// player bullets
void generatebullet()
{
    bulletX[bulletCount] = RescoX;
    bulletY[bulletCount] = RescoY - 1;
    char next = getCharAtxy(bulletX[bulletCount], bulletY[bulletCount]);
    if (next == ' ')
    {
        gotoxy(bulletX[bulletCount], bulletY[bulletCount]);
        cout << "*";
        bulletCount++;
    }
}
// Print bullet of player
void printbullet(int x, int y)
{
    gotoxy(x, y);
    cout << "*";
}
// movement of Plyer bullet
void movebullet()
{
    for (int x = 0; x < bulletCount; x++)
    {
        char next = getCharAtxy(bulletX[x], bulletY[x] - 1);
        if (next == ' ')
        {
            erasebullet(bulletX[x], bulletY[x]);
            bulletY[x]--;
            printbullet(bulletX[x], bulletY[x]);
        }
        else if (next != ' ')
        {
            erasebullet(bulletX[x], bulletY[x]);
            makebulletinactive(x);
        }
    }
}
// Erase bullets of player
void erasebullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
// make Player bullets  inactive
void makebulletinactive(int index)
{
    for (int y = index; y < bulletCount; y++)
    {
        bulletX[y] = bulletX[y + 1];
        bulletY[y] = bulletY[y + 1];
    }
    bulletCount--;
}
// Print Health of Player
void Printplayerhealth()
{
    if (Phealth <= 0 && count > 0)
    {
        count--;
        Phealth = 10;
    }
    if (count == 0 && Phealth <= 0)
    {
        system("cls");
        gotoxy(50, 20);
        cout << "GAME OVER" << endl;
        gameover = false;
        gameRunning = false;
        savedata();
        Sleep(1000);
        gotoxy(50, 22);
    }
    gotoxy(150, 15);
    green();
    cout << "LIVES OF PLAYER ARE = ";
    for (int x = 0; x < count; x++)
    {
        red();
        gotoxy(175 + 2 * x, 15);
        cout << heart << "  ";
        // gotoxy(178 + 2*x, 15);
        // cout << " ";
    }
    green();
    gotoxy(150, 16);
    cout << "HEALTH OF PLAYER IS = " << Phealth << " " << endl;
}
// Decrement in health of player by bullets of Enemy 1
void playerhealth()
{

    for (int x = 0; x < bulletECount; x++)
    {
        if (bulletEX[x] == RescoX && bulletEY[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletEX[x] == RescoX + 1 && bulletEY[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletEX[x] == RescoX + 2 && bulletEY[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletEX[x] == RescoX + 3 && bulletEY[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletEX[x] == RescoX + 4 && bulletEY[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletEX[x] == RescoX + 5 && bulletEY[x] == RescoY)
        {
            Phealth--;
        }
    }
}
// Decrement in health of player by bullets of Enemy 2
void playerhealth2()
{

    for (int x = 0; x < bulletE2Count; x++)
    {
        if (bulletE2X[x] == RescoX && bulletE2Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE2X[x] == RescoX + 1 && bulletE2Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE2X[x] == RescoX + 3 && bulletE2Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE2X[x] == RescoX + 4 && bulletE2Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE2X[x] == RescoX + 5 && bulletE2Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE2X[x] == RescoX + 6 && bulletE2Y[x] == RescoY)
        {
            Phealth--;
        }
    }
}
// Decrement in health of player by bullets of Enemy 3
void playerhealth3()
{

    for (int x = 0; x < bulletCountE3; x++)
    {
        if (bulletE3X[x] == RescoX && bulletE3Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE3X[x] == RescoX + 1 && bulletE3Y[x] == RescoY - 1)
        {
            Phealth--;
        }
        if (bulletE3X[x] == RescoX + 2 && bulletE3Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE3X[x] == RescoX + 3 && bulletE3Y[x] == RescoY - 1)
        {
            Phealth--;
        }
        if (bulletE3X[x] == RescoX + 4 && bulletE3Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE3X[x] == RescoX + 5 && bulletE3Y[x] == RescoY)
        {
            Phealth--;
        }
    }
}
// // Decrement in health of player by bullets of Enemy 4
void playerhealth4()
{

    for (int x = 0; x < bulletE4Count; x++)
    {
        if (bulletE4X[x] == RescoX && bulletE4Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE4X[x] == RescoX + 1 && bulletE4Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE4X[x] == RescoX + 3 && bulletE4Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE4X[x] == RescoX + 4 && bulletE4Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE4X[x] == RescoX + 5 && bulletE4Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE4X[x] == RescoX + 6 && bulletE4Y[x] == RescoY)
        {
            Phealth--;
        }
    }
}
// Decrement in health of player by bullets of Enemy 5
void playerhealth5()
{

    for (int x = 0; x < bulletE5Count; x++)
    {
        if (bulletE5X[x] == RescoX && bulletE5Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE5X[x] == RescoX + 1 && bulletE5Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE5X[x] == RescoX + 2 && bulletE5Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE5X[x] == RescoX + 3 && bulletE5Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE5X[x] == RescoX + 4 && bulletE5Y[x] == RescoY)
        {
            Phealth--;
        }
        if (bulletE5X[x] == RescoX + 5 && bulletE5Y[x] == RescoY)
        {
            Phealth--;
        }
    }
}

// move enemy1 in horizontal direction
void moveenemy()
{
    if (enemydirection == "left")
    {
        char next1 = getCharAtxy(enemyX - 1, enemyY);
        char next2 = getCharAtxy(enemyX - 1, enemyY + 1);
        char next3 = getCharAtxy(enemyX - 1, enemyY + 2);
        char next4 = getCharAtxy(enemyX - 1, enemyY + 3);
        if ((next1 == ' ' && next2 == ' ' && next3 == ' ' && next4 == ' ') || (next1 == '+' || next2 == '+' || next3 == '+' || next4 == '+'))
        {
            eraseE(enemyX - 1, enemyY);
            enemyX--;
            printE(enemyX - 1, enemyY);
        }
        if (next1 != ' ' || next2 != ' ' || next3 != ' ' || next4 != ' ')
        {
            enemydirection = "right";
        }
        if (next1 == RescoX + 5 || next2 == RescoX + 5 || next3 == RescoX + 5 || next4 == RescoX + 5)
        {
            Phealth = Phealth - 4;
            enemydirection = "right";
        }
    }
    if (enemydirection == "right")
    {
        char next1 = getCharAtxy(enemyX + 6, enemyY);
        char next2 = getCharAtxy(enemyX + 6, enemyY + 1);
        char next3 = getCharAtxy(enemyX + 6, enemyY + 2);
        char next4 = getCharAtxy(enemyX + 6, enemyY + 3);
        if ((next1 == ' ' && next2 == ' ' && next3 == ' ' && next4 == ' ') || (next1 == '+' || next2 == '+' || next3 == '+' || next4 == '+'))
        {
            eraseE(enemyX + 6, enemyY);
            enemyX++;
            printE(enemyX + 6, enemyY);
        }
        if (next1 != ' ' || next2 != ' ' || next3 != ' ' || next4 != ' ')
        {
            enemydirection = "left";
        }
        if (next1 == RescoX - 1 || next2 == RescoX - 1 || next3 == RescoX - 1 || next4 == RescoX - 1 || next1 == (RescoX - 1 && RescoY - 1) || next2 == (RescoX - 1 && RescoY - 1) || next3 == (RescoX - 1 && RescoY - 1) || next4 == (RescoX - 1 && RescoY - 1))
        {
            Phealth = Phealth - 4;
            enemydirection = "right";
        }
    }
}
// Print Enemy1
void printE(int x, int y)
{
    pink();
    // Character of Enemy1
    char E = 'E';
    char head = 30;
    char tail = 31;
    char side = 17;
    char body = 219;
    char side2 = 16;
    char enemy[4][6] = {{' ', ' ', E, '1', ' ', ' '},
                        {' ', ' ', head, head, ' ', ' '},
                        {side, body, body, body, body, side2},
                        {' ', ' ', tail, tail, ' ', ' '}};

    for (int x = 0; x < 4; x++)
    {
        gotoxy(enemyX, enemyY + x);
        for (int y = 0; y < 6; y++)
        {
            cout << enemy[x][y];
        }
    }
}
// Erase Enemy1
void eraseE(int x, int y)
{
    for (int x = 0; x < 4; x++)
    {
        gotoxy(enemyX, enemyY + x);
        for (int y = 0; y < 6; y++)
        {
            cout << " ";
        }
    }
}
// Enemey1 bullets
void generatebulletenemy()
{
    bulletEX[bulletECount] = enemyX + 2;
    bulletEY[bulletECount] = enemyY + 4;
    char next = getCharAtxy(bulletEX[bulletECount], bulletEY[bulletECount] + 1);
    if (next == ' ')
    {
        gotoxy(bulletEX[bulletECount], bulletEY[bulletECount]);
        cout << ">";
        bulletECount++;
    }
}
// Print bullet of Enemy1
void printEbullet(int x, int y)
{
    gotoxy(x, y);
    cout << ">";
}
// movement of Enemy1 bullets
void movebulletenemy()
{
    for (int x = 0; x < bulletECount; x++)
    {
        char next = getCharAtxy(bulletEX[x], bulletEY[x] + 1);
        if (next == ' ')
        {
            eraseEbullet(bulletEX[x], bulletEY[x]);
            bulletEY[x]++;
            printEbullet(bulletEX[x], bulletEY[x]);
        }
        else
        {
            eraseEbullet(bulletEX[x], bulletEY[x]);
            makeEbulletinactive(x);
        }
    }
}
// Bullet of Enemy 1 inactive
void makeEbulletinactive(int index)
{
    for (int y = index; y < bulletECount; y++)
    {
        bulletEX[y] = bulletEX[y + 1];
        bulletEY[y] = bulletEY[y + 1];
    }
    bulletECount--;
}
// erase bullet of Enemy1
void eraseEbullet(int x, int y)
{
    gotoxy(x, y);
    cout << "  ";
}
// decrement in health of Enemy 1
void enemyhealth1()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (bulletX[x] == enemyX && bulletY[x] == enemyY + 3)
        {
            HEALTH--;
        }
        if (bulletX[x] == enemyX + 1 && bulletY[x] == enemyY + 3)
        {
            HEALTH--;
        }
        if (bulletX[x] == enemyX + 2 && bulletY[x] == enemyY + 3)
        {
            HEALTH--;
        }
        if (bulletX[x] == enemyX + 3 && bulletY[x] == enemyY + 3)
        {
            HEALTH--;
        }
        if (bulletX[x] == enemyX + 4 && bulletY[x] == enemyY + 3)
        {
            HEALTH--;
        }
        if (bulletX[x] == enemyX + 5 && bulletY[x] == enemyY + 3)
        {
            HEALTH--;
        }
    }
}
// Print healt of enemy 1
void health1()
{
    green();
    gotoxy(150, 20);
    if (HEALTH > 0)
    {
        cout << "Health of enemy1 is = " << HEALTH << " ";
    }
    else
        cout << "Health of Enemy 1 is Finished . ";
}

// Chasing Enemey (3)
void moveenemy3()
{

    if (enemy3X > RescoX)
    {
        char next4 = getCharAtxy(enemy3X - 1, enemy3Y);
        char next1 = getCharAtxy(enemy3X - 1, enemy3Y + 1);
        char next2 = getCharAtxy(enemy3X - 1, enemy3Y + 2);
        char next3 = getCharAtxy(enemy3X - 1, enemy3Y + 3);
        if ((next1 == ' ' && next2 == ' ' && next3 == ' ' && next4 == ' ') || (next1 == '+' || next2 == '+' || next3 == '+' || next4 == '+'))
        {
            eraseenemy3(enemy3X, enemy3Y);
            enemy3X--;
            printE3(enemy3X, enemy3Y);
        }
    }

    if (enemy3X < RescoX)
    {
        char next4 = getCharAtxy(enemy3X + 7, enemy3Y);
        char next1 = getCharAtxy(enemy3X + 7, enemy3Y + 1);
        char next2 = getCharAtxy(enemy3X + 7, enemy3Y + 2);
        char next3 = getCharAtxy(enemy3X + 7, enemy3Y + 3);
        if ((next1 == ' ' && next2 == ' ' && next3 == ' ' && next4 == ' ') || (next1 == '+' || next2 == '+' || next3 == '+' || next4 == '+'))
        {
            eraseenemy3(enemy3X, enemy3Y);
            enemy3X++;
            printE3(enemy3X, enemy3Y);
        }
    }
}
// Erase Enemey 3
void eraseenemy3(int x, int y)
{

    for (int x = 0; x < 4; x++)
    {
        gotoxy(enemy3X, enemy3Y + x);
        for (int y = 0; y < 7; y++)
        {
            cout << " ";
        }
    }
}
// print enemy3
void printE3(int x, int y)
{
    pink();
    char E2 = 'E';
    char head2 = 30;
    char tail3 = 47;
    char tail4 = 92;
    char side2 = 17;
    char body2 = 219;
    char end3 = 16;
    char enemy3[4][7] = {{' ', ' ', E2, '3', ' ', ' ', ' '},
                         {' ', ' ', head2, head2, head2, ' ', ' '},
                         {side2, body2, body2, body2, body2, body2, end3},
                         {' ', tail3, ' ', ' ', ' ', tail4, ' '}};

    for (int x = 0; x < 4; x++)
    {
        gotoxy(enemy3X, enemy3Y + x);
        for (int y = 0; y < 7; y++)
        {
            cout << enemy3[x][y];
        }
    }
}
// Enemey3 bullets
void generatebulletE3()
{
    bulletE3X[bulletCountE3] = enemy3X + 3;
    bulletE3Y[bulletCountE3] = enemy3Y + 3;
    char next = getCharAtxy(bulletE3X[bulletCountE3], bulletE3Y[bulletCountE3] + 4);
    if (next == ' ')
    {
        gotoxy(bulletE3X[bulletCountE3], bulletE3Y[bulletCountE3]);
        cout << "<";
        bulletCountE3++;
    }
}
// movement of Enemy3 bullets
void movebulletE3()
{
    for (int x = 0; x < bulletCountE3; x++)
    {
        char next = getCharAtxy(bulletE3X[x], bulletE3Y[x] + 1);
        if (next == ' ')
        {
            erasebulletE3(bulletE3X[x], bulletE3Y[x]);
            bulletE3Y[x]++;
            printbulletE3(bulletE3X[x], bulletE3Y[x]);
        }
        else
        {
            erasebulletE3(bulletE3X[x], bulletE3Y[x]);
            makeE3bulletinactive(x);
        }
    }
}
// print bullet of Enemy3
void printbulletE3(int x, int y)
{
    gotoxy(x, y);
    cout << "<";
}
// Bullet of Enemy 3 inactive
void makeE3bulletinactive(int index)
{
    for (int y = index; y < bulletCountE3; y++)
    {
        bulletE3X[y] = bulletE3X[y + 1];
        bulletE3Y[y] = bulletE3Y[y + 1];
    }
    bulletCountE3--;
}
// ease bullet of Enemy 3
void erasebulletE3(int x, int y)
{
    gotoxy(x, y);
    cout << "  ";
}
// decreament in health of enemy 3
void enemyhealth3()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (bulletY[x] == enemy3Y + 4 && (bulletX[x] == enemy3X + 5 || bulletX[x] == enemy3X + 1))
        {
            E3health--;
        }
        if (bulletY[x] == enemy3Y + 3 && (bulletX[x] == enemy3X || bulletX[x] == enemy3X + 2 || bulletX[x] == enemy3X + 3 || bulletX[x] == enemy3X + 4 || bulletX[x] == enemy3X + 6))
        {
            E3health--;
        }
    }
}
// print health
void health3()
{
    gotoxy(150, 24);
    if (E3health > 0)
    {
        cout << "Health of enemy 3 is = " << E3health << " ";
    }
    else
        cout << "Health of Enemy 3 is Finished . ";
}

// Random Enemy(1)
void randomE()
{
    if (enemy2Shot % 5 == 0)
    {
        random = rand() % 4;
    }
    if (random == 0)
    {
        moveup();
    }
    if (random == 1)
    {
        movedown();
    }
    if (random == 2)
    {
        moveleft();
    }
    if (random == 3)
    {
        moveright();
    }

    enemy2Shot++;
}
// print Enemy2
void printE2(int x, int y)
{
    pink();
    char E1 = 'E';
    char head1 = 30;
    char tail1 = 47;
    char tail2 = 92;
    char side1 = 17;
    char body1 = 219;
    char end2 = 16;
    char enemy2[4][6] = {{' ', ' ', E1, '2', ' ', ' '},
                         {' ', ' ', head1, head1, ' ', ' '},
                         {side1, body1, body1, body1, body1, end2},
                         {' ', tail1, ' ', ' ', tail2, ' '}};

    for (int x = 0; x < 4; x++)
    {
        gotoxy(enemy2X, enemy2Y + x);
        for (int y = 0; y < 6; y++)
        {
            cout << enemy2[x][y];
        }
    }
}
// move the random enemy up, down, right and left
void moveup()
{

    char next = getCharAtxy(enemy2X, enemy2Y - 1);
    if (next == ' ')
    {
        eraseE2(enemy2X, enemy2Y);
        enemy2Y--;
        printE2(enemy2X, enemy2Y);
    }
}
void movedown()
{

    char next = getCharAtxy(enemy2X, enemy2Y + 4);
    if (next == ' ')
    {
        eraseE2(enemy2X, enemy2Y);
        enemy2Y++;
        printE2(enemy2X, enemy2Y);
    }
}
void moveleft()
{

    char next = getCharAtxy(enemy2X - 1, enemy2Y);
    if (next == ' ')
    {
        eraseE2(enemy2X, enemy2Y);
        enemy2X--;
        printE2(enemy2X, enemy2Y);
    }
}
void moveright()
{

    char next = getCharAtxy(enemy2X + 6, enemy2Y);
    if (next == ' ')
    {
        eraseE2(enemy2X, enemy2Y);
        enemy2X++;
        printE2(enemy2X, enemy2Y);
    }
}
// Erase Enemy2
void eraseE2(int x, int y)
{
    for (int x = 0; x < 4; x++)
    {
        gotoxy(enemy2X, enemy2Y + x);
        for (int y = 0; y < 6; y++)
        {
            cout << " ";
        }
    }
}
// Enemey2 bullets
void generatebulletenemy2()
{
    bulletE2X[bulletE2Count] = enemy2X + 2;
    bulletE2Y[bulletE2Count] = enemy2Y + 3;
    char next = getCharAtxy(bulletE2X[bulletE2Count], bulletE2Y[bulletE2Count] + 1);
    if (next == ' ')
    {
        gotoxy(bulletE2X[bulletE2Count], bulletE2Y[bulletE2Count]);
        cout << ">";
        bulletE2Count++;
    }
}
// movement of Enemy2 bullets
void movebulletenemy2()
{
    for (int x = 0; x < bulletE2Count; x++)
    {
        char next = getCharAtxy(bulletE2X[x], bulletE2Y[x] + 1);
        if (next == ' ')
        {
            eraseE2bullet(bulletE2X[x], bulletE2Y[x]);
            bulletE2Y[x]++;
            printE2bullet(bulletE2X[x], bulletE2Y[x]);
        }
        else
        {
            eraseE2bullet(bulletE2X[x], bulletE2Y[x]);
            makeE2bulletinactive(x);
        }
    }
}
// print bullet of Enemy2
void printE2bullet(int x, int y)
{
    gotoxy(x, y);
    cout << ">";
}
// Bullet of Enemy 2 inactive
void makeE2bulletinactive(int index)
{
    for (int y = index; y < bulletE2Count; y++)
    {
        bulletE2X[y] = bulletE2X[y + 1];
        bulletE2Y[y] = bulletE2Y[y + 1];
    }
    bulletE2Count--;
}
// ease bullet of Enemy 2
void eraseE2bullet(int x, int y)
{
    gotoxy(x, y);
    cout << "  ";
}
// decrement in health of Enemy2
void enemyhealth2()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (bulletX[x] == enemy2X && bulletY[x] == enemy2Y + 3)
        {
            health--;
        }
        if (bulletX[x] == enemy2X + 1 && bulletY[x] == enemy2Y + 3)
        {
            health--;
        }
        if (bulletX[x] == enemy2X + 3 && bulletY[x] == enemy2Y + 3)
        {
            health--;
        }
        if (bulletX[x] == enemy2X + 4 && bulletY[x] == enemy2Y + 3)
        {
            health--;
        }
        if (bulletX[x] == enemy2X + 5 && bulletY[x] == enemy2Y + 3)
        {
            health--;
        }
        if (bulletX[x] == enemy2X + 6 && bulletY[x] == enemy2Y + 3)
        {
            health--;
        }
    }
}
// Print health of Enemy 2
void health2()
{
    green();
    gotoxy(150, 22);
    if (health > 0)
    {
        cout << "Health of enemy 2 is = " << health << " ";
    }
    else
        cout << "Health of Enemy 2 is Finished . ";
}

// Random Enemy 4
void randomE2()
{
    if (enemy4Shot % 5 == 0)
    {
        random2 = rand() % 4;
    }
    if (random2 == 0)
    {
        moveup2();
    }
    if (random2 == 1)
    {
        movedown2();
    }
    if (random2 == 2)
    {
        moveleft2();
    }
    if (random2 == 3)
    {
        moveright2();
    }

    enemy4Shot++;
}
// print Enemy4
void printE4(int x, int y)
{
    pink();
    char E1 = 'E';
    char head1 = 30;
    char tail1 = 47;
    char tail2 = 92;
    char side1 = 17;
    char body1 = 219;
    char end2 = 16;
    char enemy4[4][6] = {{' ', ' ', E1, '4', ' ', ' '},
                         {' ', ' ', head1, head1, ' ', ' '},
                         {side1, body1, body1, body1, body1, end2},
                         {' ', tail1, ' ', ' ', tail2, ' '}};

    for (int x = 0; x < 4; x++)
    {
        gotoxy(enemy4X, enemy4Y + x);
        for (int y = 0; y < 6; y++)
        {
            cout << enemy4[x][y];
        }
    }
}
// move the random enemy up, down, right and left
void moveup2()
{

    char next = getCharAtxy(enemy4X, enemy4Y - 1);
    if (next == ' ')
    {
        eraseE4(enemy4X, enemy4Y);
        enemy4Y--;
        printE4(enemy4X, enemy4Y);
    }
}
void movedown2()
{

    char next = getCharAtxy(enemy4X, enemy4Y + 4);
    if (next == ' ')
    {
        eraseE4(enemy4X, enemy4Y);
        enemy4Y++;
        printE4(enemy4X, enemy4Y);
    }
}
void moveleft2()
{

    char next = getCharAtxy(enemy4X - 1, enemy4Y);
    if (next == ' ')
    {
        eraseE4(enemy4X, enemy4Y);
        enemy4X--;
        printE4(enemy4X, enemy4Y);
    }
}
void moveright2()
{

    char next = getCharAtxy(enemy4X + 6, enemy4Y);
    if (next == ' ')
    {
        eraseE4(enemy4X, enemy4Y);
        enemy4X++;
        printE4(enemy4X, enemy4Y);
    }
}
// Erase Enemy4
void eraseE4(int x, int y)
{
    for (int x = 0; x < 4; x++)
    {
        gotoxy(enemy4X, enemy4Y + x);
        for (int y = 0; y < 6; y++)
        {
            cout << " ";
        }
    }
}
// Enemey 4 bullets
void generatebulletenemy4()
{
    bulletE4X[bulletE4Count] = enemy4X + 2;
    bulletE4Y[bulletE4Count] = enemy4Y + 3;
    char next = getCharAtxy(bulletE4X[bulletE4Count], bulletE4Y[bulletE4Count] + 1);
    if (next == ' ')
    {
        gotoxy(bulletE4X[bulletE4Count], bulletE4Y[bulletE4Count]);
        cout << ">";
        bulletE4Count++;
    }
}
// movement of Enemy4 bullets
void movebulletenemy4()
{
    for (int x = 0; x < bulletE4Count; x++)
    {
        char next = getCharAtxy(bulletE4X[x], bulletE4Y[x] + 1);
        if (next == ' ')
        {
            eraseE4bullet(bulletE4X[x], bulletE4Y[x]);
            bulletE4Y[x]++;
            printE4bullet(bulletE4X[x], bulletE4Y[x]);
        }
        else
        {
            eraseE4bullet(bulletE4X[x], bulletE4Y[x]);
            makeE4bulletinactive(x);
        }
    }
}
// print bullet of Enemy  4
void printE4bullet(int x, int y)
{
    gotoxy(x, y);
    cout << ">";
}
// Bullet of Enemy 4 inactive
void makeE4bulletinactive(int index)
{
    for (int y = index; y < bulletE4Count; y++)
    {
        bulletE4X[y] = bulletE4X[y + 1];
        bulletE4Y[y] = bulletE4Y[y + 1];
    }
    bulletE4Count--;
}
// ease bullet of Enemy 4
void eraseE4bullet(int x, int y)
{
    gotoxy(x, y);
    cout << "  ";
}
// decrement in health of Enemy 4
void enemyhealth4()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (bulletX[x] == enemy4X && bulletY[x] == enemy4Y + 3)
        {
            E4health--;
        }
        if (bulletX[x] == enemy4X + 1 && bulletY[x] == enemy4Y + 3)
        {
            E4health--;
        }
        if (bulletX[x] == enemy4X + 3 && bulletY[x] == enemy4Y + 3)
        {
            E4health--;
        }
        if (bulletX[x] == enemy4X + 4 && bulletY[x] == enemy4Y + 3)
        {
            E4health--;
        }
        if (bulletX[x] == enemy4X + 5 && bulletY[x] == enemy4Y + 3)
        {
            E4health--;
        }
        if (bulletX[x] == enemy4X + 6 && bulletY[x] == enemy4Y + 3)
        {
            E4health--;
        }
    }
}
// Print health of Enemy 4
void health4()
{
    green();
    gotoxy(150, 25);
    if (E4health > 0)
    {
        cout << "Health of enemy 4 is = " << E4health << " ";
    }
    else
        cout << "Health of Enemy 4 is Finished . ";
}

// move enemy 5 in horizontal direction
void moveenemy5()
{
    if (enemydirection5 == "left")
    {
        char next1 = getCharAtxy(enemy5X - 1, enemy5Y);
        char next2 = getCharAtxy(enemy5X - 1, enemy5Y + 1);
        char next3 = getCharAtxy(enemy5X - 1, enemy5Y + 2);
        char next4 = getCharAtxy(enemy5X - 1, enemy5Y + 3);
        if ((next1 == ' ' && next2 == ' ' && next3 == ' ' && next4 == ' ') || (next1 == '+' || next2 == '+' || next3 == '+' || next4 == '+'))
        {
            eraseE5(enemy5X - 1, enemy5Y);
            enemy5X--;
            printE5(enemy5X - 1, enemy5Y);
        }
        if (next1 != ' ' || next2 != ' ' || next3 != ' ' || next4 != ' ')
        {
            enemydirection5 = "right";
        }
        if (next1 == RescoX + 5 || next2 == RescoX + 5 || next3 == RescoX + 5 || next4 == RescoX + 5)
        {
            Phealth = Phealth - 4;
            enemydirection5 = "right";
        }
    }
    if (enemydirection5 == "right")
    {
        char next1 = getCharAtxy(enemy5X + 6, enemy5Y);
        char next2 = getCharAtxy(enemy5X + 6, enemy5Y + 1);
        char next3 = getCharAtxy(enemy5X + 6, enemy5Y + 2);
        char next4 = getCharAtxy(enemy5X + 6, enemy5Y + 3);
        if ((next1 == ' ' && next2 == ' ' && next3 == ' ' && next4 == ' ') || (next1 == '+' || next2 == '+' || next3 == '+' || next4 == '+'))
        {
            eraseE5(enemy5X + 6, enemy5Y);
            enemy5X++;
            printE5(enemy5X + 6, enemy5Y);
        }
        if (next1 != ' ' || next2 != ' ' || next3 != ' ' || next4 != ' ')
        {
            enemydirection5 = "left";
        }
        if (next1 == RescoX - 1 || next2 == RescoX - 1 || next3 == RescoX - 1 || next4 == RescoX - 1 || next1 == (RescoX - 1 && RescoY - 1) || next2 == (RescoX - 1 && RescoY - 1) || next3 == (RescoX - 1 && RescoY - 1) || next4 == (RescoX - 1 && RescoY - 1))
        {
            Phealth = Phealth - 4;
            enemydirection5 = "right";
        }
    }
}
// Print Enemy 5
void printE5(int x, int y)
{
    pink();
    // Character of Enemy 5
    char E = 'E';
    char head = 30;
    char tail = 31;
    char side = 17;
    char body = 219;
    char side2 = 16;
    char enemy[4][6] = {{' ', ' ', E, '5', ' ', ' '},
                        {' ', ' ', head, head, ' ', ' '},
                        {side, body, body, body, body, side2},
                        {' ', ' ', tail, tail, ' ', ' '}};

    for (int x = 0; x < 4; x++)
    {
        gotoxy(enemy5X, enemy5Y + x);
        for (int y = 0; y < 6; y++)
        {
            cout << enemy[x][y];
        }
    }
}
// Erase Enemy5
void eraseE5(int x, int y)
{
    for (int x = 0; x < 4; x++)
    {
        gotoxy(enemy5X, enemy5Y + x);
        for (int y = 0; y < 6; y++)
        {
            cout << " ";
        }
    }
}
// Enemey 5 bullets
void generatebulletenemy5()
{
    bulletE5X[bulletE5Count] = enemy5X + 2;
    bulletE5Y[bulletE5Count] = enemy5Y + 4;
    char next = getCharAtxy(bulletE5X[bulletE5Count], bulletE5Y[bulletE5Count] + 1);
    if (next == ' ')
    {
        gotoxy(bulletE5X[bulletE5Count], bulletE5Y[bulletE5Count]);
        cout << ">";
        bulletE5Count++;
    }
}
// Print bullet of Enemy 5
void printE5bullet(int x, int y)
{
    gotoxy(x, y);
    cout << ">";
}
// movement of Enemy 5 bullets
void movebulletenemy5()
{
    for (int x = 0; x < bulletE5Count; x++)
    {
        char next = getCharAtxy(bulletE5X[x], bulletE5Y[x] + 1);
        if (next == ' ')
        {
            eraseE5bullet(bulletE5X[x], bulletE5Y[x]);
            bulletE5Y[x]++;
            printE5bullet(bulletE5X[x], bulletE5Y[x]);
        }
        else
        {
            eraseE5bullet(bulletE5X[x], bulletE5Y[x]);
            makeEbulletinactive5(x);
        }
    }
}
// Bullet of Enemy 1 inactive
void makeEbulletinactive5(int index)
{
    for (int y = index; y < bulletE5Count; y++)
    {
        bulletE5X[y] = bulletE5X[y + 1];
        bulletE5Y[y] = bulletE5Y[y + 1];
    }
    bulletE5Count--;
}
// erase bullet of Enemy 5
void eraseE5bullet(int x, int y)
{
    gotoxy(x, y);
    cout << "  ";
}
// decrement in health of Enemy 5
void enemyhealth5()
{
    for (int x = 0; x < bulletE5Count; x++)
    {
        if (bulletX[x] == enemy5X && bulletY[x] == enemy5Y + 3)
        {
            E5health--;
        }
        if (bulletX[x] == enemy5X + 1 && bulletY[x] == enemy5Y + 3)
        {
            E5health--;
        }
        if (bulletX[x] == enemy5X + 2 && bulletY[x] == enemy5Y + 3)
        {
            E5health--;
        }
        if (bulletX[x] == enemy5X + 3 && bulletY[x] == enemy5Y + 3)
        {
            E5health--;
        }
        if (bulletX[x] == enemy5X + 4 && bulletY[x] == enemy5Y + 3)
        {
            E5health--;
        }
        if (bulletX[x] == enemy5X + 5 && bulletY[x] == enemy5Y + 3)
        {
            E5health--;
        }
    }
}
// Print healt of enemy 5
void health5()
{
    green();
    gotoxy(150, 20);
    if (E5health > 0)
    {
        cout << "Health of enemy 5 is = " << E5health << " ";
    }
    else
        cout << "Health of Enemy 5 is Finished . ";
}


// Collision of bullets Player with enemy
void colision()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if ((bulletX[x] == enemyX && bulletY[x] == enemyY + 3) || (bulletX[x] == enemy2X && bulletY[x] == enemy2Y + 3) || (bulletX[x] == enemy3X && bulletY[x] == enemy3Y + 3))
        {
            Score++;
        }
        if ((bulletX[x] == enemyX + 1 && bulletY[x] == enemyY + 3) || (bulletX[x] == enemy2X + 1 && bulletY[x] == enemy2Y + 3) || (bulletX[x] == enemy3X + 1 && bulletY[x] == enemy3Y + 3))
        {
            Score++;
        }
        if ((bulletX[x] == enemyX + 2 && bulletY[x] == enemyY + 3) || (bulletX[x] == enemy2X + 3 && bulletY[x] == enemy2Y + 3) || (bulletX[x] == enemy3X + 2 && bulletY[x] == enemy3Y + 3))
        {
            Score++;
        }
        if ((bulletX[x] == enemyX + 3 && bulletY[x] == enemyY + 3) || (bulletX[x] == enemy2X + 4 && bulletY[x] == enemy2Y + 3) || (bulletX[x] == enemy3X + 3 && bulletY[x] == enemy3Y + 3))
        {
            Score++;
        }
        if ((bulletX[x] == enemyX + 4 && bulletY[x] == enemyY + 3) || (bulletX[x] == enemy2X + 5 && bulletY[x] == enemy2Y + 3) || (bulletX[x] == enemy3X + 3 && bulletY[x] == enemy3Y + 3))
        {
            Score++;
        }
        if ((bulletX[x] == enemyX + 5 && bulletY[x] == enemyY + 3) || (bulletX[x] == enemy2X + 6 && bulletY[x] == enemy2Y + 3) || (bulletX[x] == enemy3X + 3 && bulletY[x] == enemy3Y + 3))
        {
            Score++;
        }
    }
}

// Collision of Player with enemy 1
void playercollisionwithenemy1()
{
    if (RescoX + 5 == enemyX && (RescoY == enemyY || RescoY == enemyY + 1 || RescoY == enemyY + 2 || RescoY == enemyY + 3))
    {
        Phealth--;
    }
    if (RescoX == enemyX + 6 && (RescoY == enemyY || RescoY == enemyY + 1 || RescoY == enemyY + 2 || RescoY == enemyY + 3))
    {
        Phealth--;
    }
    if (RescoY == enemyY + 4 && (RescoX == enemyX || RescoX == enemyX + 1 || RescoX == enemyX + 2 || RescoX == enemyX + 3 || RescoX == enemyX + 4 || RescoX == enemyX + 5 || RescoX == enemyX + 6))
    {
        Phealth--;
    }
    if (RescoY + 2 == enemyY && (RescoX == enemyX || RescoX == enemyX + 1 || RescoX == enemyX + 2 || RescoX == enemyX + 3 || RescoX == enemyX + 4 || RescoX == enemyX + 5 || RescoX == enemyX + 6))
    {
        Phealth--;
    }
}
// Collision of Player with enemy 2
void playercollisionwithenemy2()
{
    if (RescoX + 5 == enemy2X && (RescoY == enemy2Y || RescoY == enemy2Y + 1 || RescoY == enemy2Y + 2 || RescoY == enemy2Y + 3))
    {
        Phealth--;
    }
    if (RescoX == enemy2X + 6 && (RescoY == enemy2Y || RescoY == enemy2Y + 1 || RescoY == enemy2Y + 2 || RescoY == enemy2Y + 3))
    {
        Phealth--;
    }
    if (RescoY == enemy2Y + 4 && (RescoX == enemy2X || RescoX == enemy2X + 1 || RescoX == enemy2X + 2 || RescoX == enemy2X + 3 || RescoX == enemy2X + 4 || RescoX == enemy2X + 5 || RescoX == enemy2X + 6))
    {
        Phealth--;
    }
    if (RescoY + 2 == enemy2Y && (RescoX == enemy2X || RescoX == enemy2X + 1 || RescoX == enemy2X + 2 || RescoX == enemy2X + 3 || RescoX == enemy2X + 4 || RescoX == enemy2X + 5 || RescoX == enemy2X + 6))
    {
        Phealth--;
    }
}
// Collision of Player with enemy 3
void playercollisionwithenemy3()
{

    if ((RescoX + 5 == enemy3X && RescoY == enemy3Y) || (RescoX + 5 == enemy3X && RescoY == enemy3Y + 1) || (RescoX + 5 == enemy3X && RescoY == enemy3Y + 3))
    {
        Phealth--;
    }
    if ((RescoX - 1 == enemy3X + 6 && RescoY == enemy3Y) || (RescoX - 1 == enemy3X + 6 && RescoY == enemy3Y + 1) || (RescoX - 1 == enemy3X + 6 && RescoY == enemy3Y + 3))
    {
        Phealth--;
    }
    if ((RescoX + 1 == enemy3X && RescoY - 2 == enemy3Y + 7) || (RescoX + 2 == enemy3X + 2 && RescoY - 2 == enemy3Y + 7) || (RescoX + 3 == enemy3X + 3 && RescoY - 2 == enemy3Y + 7))
    {
        Phealth--;
    }
    if ((RescoX + 1 == enemy3X && RescoY - 2 == enemy3Y + 5) || (RescoX + 2 == enemy3X + 2 && RescoY - 2 == enemy3Y + 4) || (RescoX + 3 == enemy3X + 3 && RescoY - 2 == enemy3Y + 5) || (RescoX + 3 == enemy3X + 3 && RescoY - 2 == enemy3Y + 5) || (RescoX + 3 == enemy3X + 3 && RescoY - 2 == enemy3Y + 5) || (RescoX + 3 == enemy3X + 3 && RescoY - 2 == enemy3Y + 5))
    {
        Phealth--;
    }
}
// Collision of Player with enemy 4
void playercollisionwithenemy4()
{
    if (RescoX + 5 == enemy4X && (RescoY == enemy4Y || RescoY == enemy4Y + 1 || RescoY == enemy4Y + 2 || RescoY == enemy4Y + 3))
    {
        Phealth--;
    }
    if (RescoX == enemy4X + 6 && (RescoY == enemy4Y || RescoY == enemy4Y + 1 || RescoY == enemy4Y + 2 || RescoY == enemy4Y + 3))
    {
        Phealth--;
    }
    if (RescoY == enemy4Y + 4 && (RescoX == enemy4X || RescoX == enemy4X + 1 || RescoX == enemy4X + 2 || RescoX == enemy4X + 3 || RescoX == enemy4X + 4 || RescoX == enemy4X + 5 || RescoX == enemy4X + 6))
    {
        Phealth--;
    }
    if (RescoY + 2 == enemy4Y && (RescoX == enemy4X || RescoX == enemy4X + 1 || RescoX == enemy4X + 2 || RescoX == enemy4X + 3 || RescoX == enemy4X + 4 || RescoX == enemy4X + 5 || RescoX == enemy4X + 6))
    {
        Phealth--;
    }
}
// Collision of Player with enemy 5
void playercollisionwithenemy5()
{
    if (RescoX + 5 == enemy5X && (RescoY == enemy5Y || RescoY == enemy5Y + 1 || RescoY == enemy5Y + 2 || RescoY == enemy5Y + 3))
    {
        Phealth--;
    }
    if (RescoX == enemy5X + 6 && (RescoY == enemy5Y || RescoY == enemy5Y + 1 || RescoY == enemy5Y + 2 || RescoY == enemy5Y + 3))
    {
        Phealth--;
    }
    if (RescoY == enemy5Y + 4 && (RescoX == enemy5X || RescoX == enemy5X + 1 || RescoX == enemy5X + 2 || RescoX == enemy5X + 3 || RescoX == enemy5X + 4 || RescoX == enemy5X + 5 || RescoX == enemy5X + 6))
    {
        Phealth--;
    }
    if (RescoY + 2 == enemy5Y && (RescoX == enemy5X || RescoX == enemy5X + 1 || RescoX == enemy5X + 2 || RescoX == enemy5X + 3 || RescoX == enemy5X + 4 || RescoX == enemy5X + 5 || RescoX == enemy5X + 6))
    {
        Phealth--;
    }
}

// food palltes
void foodpallet()
{
    lightYellow();
    int x = rand() % 129 + 1;
    int y = rand() % 33 + 1;
    char location = getCharAtxy(x, y);
    if (location == ' ')
    {
        gotoxy(x, y);
        cout << heart;
    }
}

// hurdles
void hurdles()
{
    lightBlue();
    int x = rand() % 129 + 1;
    int y = rand() % 30 + 1;
    char location = getCharAtxy(x, y);
    if (location == ' ')
    {
        gotoxy(x, y);
        cout << block;
    }
}
// Print Score of the Game
void printScore()
{
    red();
    gotoxy(150, 10);
    // addScore();
    cout << "Score = " << Score;
}

// gameover when enemy health is finished
void enemygameover()
{
    if (health <= 0 && HEALTH <= 0 && E3health <= 0 && E4health <= 0  && E5health <= 0)
    {
        system("cls");
        gotoxy(50, 20);
        red();
        cout << "GAME OVER";
        gameover = false;
        gameRunning = false;
        savedata();
        Sleep(3000);
        gotoxy(50, 22);
        cout << "Press any Key to Contine";
        getchar();
    }
}

// game win
void gamewin()
{

    system("cls");
    gotoxy(50, 20);
    red();
    cout << "YOU WIN" << endl;
    gameover = false;
    gameRunning = false;
    savedata();
    Sleep(3000);
    gotoxy(50, 22);
    cout << "Press any Key to Contine";
    getchar();
}

// pre defined function
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void maze()
{
    system("cls");
    grey();

    for (int x = 0; x < 35; x++)
    {
        for (int y = 0; y < 130; y++)
        {
            cout << maze1[x][y];
        }
        cout << endl;
    }
}
void maze2()
{
    system("cls");
    grey();

    for (int x = 0; x < 35; x++)
    {
        for (int y = 0; y < 130; y++)
        {

            cout << maze3[x][y];
        }
        cout << endl;
    }
    printplanet();
}
void level1()
{
    green();
    Sleep(1000);
    gotoxy(15, 5);
    cout << "               ,----.         ,-.-.    ,----.                    ,-----,--,   " << endl;
    gotoxy(15, 6);
    cout << "   _.-.     ,-.--` , \\ ,--.-./=/ ,/ ,-.--` , \\   _.-.            | '-  -\\==\\  " << endl;
    gotoxy(15, 7);
    cout << " .-,.'|    |==|-  _.-`/==/, ||=| -||==|-  _.-` .-,.'|            \\,--, '/==/  " << endl;
    gotoxy(15, 8);
    cout << "|==|, |    |==|   `.-.\\==\\,  \\ / ,||==|   `.-.|==|, |               /  /==/   " << endl;
    gotoxy(15, 9);
    cout << "|==|- |   /==/_ ,    / \\==\\ - ' - /==/_ ,    /|==|- |              / -/==/    " << endl;
    gotoxy(15, 10);
    cout << "|==|, |   |==|    .-'   \\==\\ ,   ||==|    .-' |==|, |             / -/==/     " << endl;
    gotoxy(15, 11);
    cout << "|==|- `-.|==|  ,`-._  |==| -  ,/|==|_  ,`-.|==|- `-.         / `\\==\\_,--, " << endl;
    gotoxy(15, 12);
    cout << "/==/ - , ,/==/ ,     /  \\==\\  _ / /==/ ,     //==/ - , ,/       /` -   ,/==/  " << endl;
    gotoxy(15, 13);
    cout << "`--`-----'`--`-----``    `--`--'  `--`-----`` `--`-----'        `------`--`   " << endl;
    Sleep(1000);
}

void printplanet()
{
    gotoxy(114, 4);
    cout << "new " << endl;
    gotoxy(114, 5);
    cout << "PLANET" << endl;
}
void starting()
{
    lightBlue();
    Sleep(500);
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    gotoxy(15, 6);
    cout << "                                                                                  " << endl;
    gotoxy(15, 7);
    cout << "                                                `. ___ " << endl;
    gotoxy(15, 8);
    cout << "                __,' __`.                _..----....____ " << endl;
    gotoxy(15, 9);
    cout << "    __...--.'``;.   ,.   ;``--..__     .'    ,-._    _.-' " << endl;
    gotoxy(15, 10);
    cout << " _..-''-------'   `'   `'   `'     O ``-''._   (,;') _,' " << endl;
    gotoxy(15, 11);
    cout << ",'________________                          \\`-._`-',' " << endl;
    gotoxy(15, 12);
    cout << "`._              ```````````------...___   '-.._'-: " << endl;
    gotoxy(15, 13);
    cout << "   ```--.._      ,.                     ````--...__\\-. " << endl;
    gotoxy(15, 14);
    cout << "        `.--. `-`                       ____    |  |` " << endl;
    gotoxy(15, 15);
    cout << "      `. `.                       ,'`````.  ;  ;` " << endl;
    gotoxy(15, 16);
    cout << "         `._`.        __________   `.      \'__/` " << endl;
    gotoxy(15, 17);
    cout << "          `-:._____/______/___/____`.     \\  ` " << endl;
    gotoxy(15, 18);
    cout << "                        |       `._    `.    \\ " << endl;
    gotoxy(15, 19);
    cout << "                      `._________`-.   `.   `.___ " << endl;
    gotoxy(15, 20);
    cout << "                                    `------'`  " << endl;
    gotoxy(15, 21);
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                   " << endl;
    cout << "                   LOADING                  ";
    Sleep(500);
    cout << "...  ";
    Sleep(500);
    cout << ".....  ";
    Sleep(500);
    cout << ".......  " << endl;
    Sleep(2000);
    system("cls");
}

void savedata1()
{
    fstream file;
    file.open("mazedata.txt", ios::out);

    for (int x = 0; x < 35; x++)
    {
        for (int y = 0; y < 130; y++)
        {

            if ((x == 0) && (y > -1 && y < 130))

            {
                maze1[x][y] = '_';
            }

            else if ((x == 32) && (y > 2 && y < 127))

            {
                maze1[x][y] = '_';
            }

            else if ((x == 1) && (y > 2 && y < 127))

            {
                maze1[x][y] = '#';
            }

            else if ((x == 33) && (y > -1 && y < 130))

            {
                maze1[x][y] = '#';
            }

            else if ((y == 0 || y == 129) && (x > 0 && x < 34))

            {
                maze1[x][y] = '|';
            }

            else if ((y == 1 || y == 128) && (x > 0 && x < 34))

            {
                maze1[x][y] = '#';
            }

            else if ((y == 2 || y == 127) && (x > 0 && x < 34))
            {
                maze1[x][y] = '|';
            }

            else
            {
                maze1[x][y] = ' ';
            }
            file << maze1[x][y];
        }
        file << endl;
    }
    file.close();
}
void loadata1()
{
    fstream myfile;
    string line;
    int row = 0;
    myfile.open("mazedata.txt", ios::in);
    while (getline(myfile, line))
    {
        for (int colom = 0; colom < 35; colom++)
        {
            maze1[row][colom] = line[colom];
        }
        cout << endl;
        row++;
    }
    myfile.close();
}
void savedata2()
{
    fstream file;
    file.open("mazedata1.txt", ios::out);

    for (int x = 0; x < 35; x++)
    {
        for (int y = 0; y < 130; y++)
        {

            if ((x == 0) && (y > -1 && y < 130))

            {
                maze3[x][y] = '_';
            }

            else if ((x == 32) && (y > 2 && y < 127))

            {
                maze3[x][y] = '_';
            }

            else if ((x == 1) && (y > 2 && y < 127))

            {
                maze3[x][y] = '#';
            }

            else if ((x == 33) && (y > -1 && y < 130))

            {
                maze3[x][y] = '#';
            }

            else if ((y == 0 || y == 129) && (x > 0 && x < 34))

            {
                maze3[x][y] = '|';
            }

            else if ((y == 1 || y == 128) && (x > 0 && x < 34))

            {
                maze3[x][y] = '#';
            }

            else if ((y == 2 || y == 127) && (x > 0 && x < 34))
            {
                maze3[x][y] = '|';
            }

            else
            {
                maze3[x][y] = ' ';
            }
            file << maze3[x][y];
        }
        file << endl;
    }
    file.close();
}
void loadata2()
{
    fstream myfile;
    string line;
    int row = 0;
    myfile.open("mazedata1.txt", ios::in);
    while (getline(myfile, line))
    {
        for (int colom = 0; colom < 35; colom++)
        {
            maze3[row][colom] = line[colom];
        }
        cout << endl;
        row++;
    }
    myfile.close();
}

void savedata()
{
    fstream file;
    file.open("gamedata.txt", ios::out);
    file << RescoX << ",";
    file << RescoY << ",";
    file << enemyX << ",";
    file << enemyY << ",";
    file << enemy2X << ",";
    file << enemy2Y << ",";
    file << enemy3X << ",";
    file << enemy3Y << ",";
    file << enemy4X << ",";
    file << enemy4Y << ",";
    file << Score << ",";
    file << health << ",";
    file << HEALTH << ",";
    file << E3health << ",";
    file << E4health << ",";
    file << count << ",";
    file << Phealth << ",";
    file << gameover << ",";
    file << enemy5X << ",";
    file << enemy5Y << ",";
    file << E5health << endl;
    file.close();
}
void loadata()
{
    string gameover_;
    string record;
    fstream myfile;
    myfile.open("gamedata.txt", ios::in);
    while (getline(myfile, record))
    {
        RescoX = stoi(getfield(record, 1));
        RescoY = stoi(getfield(record, 2));
        enemyX = stoi(getfield(record, 3));
        enemyY = stoi(getfield(record, 4));
        enemy2X = stoi(getfield(record, 5));
        enemy2Y = stoi(getfield(record, 6));
        enemy3X = stoi(getfield(record, 7));
        enemy3Y = stoi(getfield(record, 8));
        enemy4X = stoi(getfield(record, 9));
        enemy4Y = stoi(getfield(record, 10));
        Score = stoi(getfield(record, 11));
        health = stoi(getfield(record, 12));
        HEALTH = stoi(getfield(record, 13));
        E3health = stoi(getfield(record, 14));
        E4health = stoi(getfield(record, 15));
        count = stoi(getfield(record, 16));
        Phealth = stoi(getfield(record, 17));
        gameover_ = getfield(record, 18);
        enemy5X = stoi(getfield(record , 19));
        enemy5Y = stoi(getfield(record , 20));
        E5health = stoi(getfield(record, 21));
   
        if (gameover_ == "1")
        {
            gameover = true;
        }
        else
        {
            gameover = false;
        }
    }
    myfile.close();
}
string getfield(string record, int field)
{
    int commacount = 1;
    string item;
    for (int x = 0; x < record.length(); x++)
    {
        if (record[x] == ',')
        {
            commacount++;
        }
        else if (commacount == field)
        {
            item = item + record[x];
        }
    }
    return item;
}
void reset()
{
    bulletCount = 0;
    bulletE2Count = 0;
    bulletCountE3 = 0;
    bulletE4Count = 0;
    bulletECount = 0;
}
string newgame()
{
    system("cls");
    Header();
    blue();
    string option;
    cout << "Enter any key = " << endl;
    cout << "Press. 1 to load previous game ." << endl;
    cout << "Press 2 to start new game " << endl;
    cout << "Press 3 to exit " << endl;
    cin >> option;
    return option;
}