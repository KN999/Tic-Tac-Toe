#include<stdio.h>

int Board(int);
int GameOver();
int Board2();

char a[10] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
int i;

int main()
{
    int r;
    int Game_Over;

    Game_Over = -1;


    printf("\t\t\t\tTic Tac Toe\n");
    printf("Choose a no. from the board & Enter that no. to input X or O\n\n");

    Board2();

    while(Game_Over != 1)
    {
        printf("\nEnter Number- ");
        scanf("%d", &r);

        if(a[r-1] != ' ')
        {
            printf("Wrong Choice\n");
        }

        else if(a[r-1] == ' ')
            Game_Over = Board(r);

        if(Game_Over == 1)
            printf("%c is Winner\n", a[r-1]);
        else if(Game_Over == 0)
            printf("DRAW\n");
    }


    return 0;
}


int Board(int r)
{
    int n;
    char v = '|';

    i++;
    if(r >= 0)
        if(i % 2 != 0)
            a[r-1] = 'X';
        else
            a[r-1] = 'O';

    printf("%c %2c %c%2c %c \n",a[0], v, a[1], v, a[2]);
    printf("-----------\n");
    printf("%c %2c %c%2c %c\n",a[3], v, a[4], v, a[5]);
    printf("-----------\n");
    printf("%c %2c %c%2c %c\n",a[6], v, a[7], v, a[8]);

    n = GameOver();

    return n;
}

int GameOver()
{
    if(
       (a[0]=='X'&&a[1]=='X'&&a[2]=='X')||(a[0]=='O'&&a[1]=='O'&&a[2]=='O')||
       (a[0]=='X'&&a[3]=='X'&&a[6]=='X')||(a[0]=='O'&&a[3]=='O'&&a[6]=='O')||
       (a[0]=='X'&&a[4]=='X'&&a[8]=='X')||(a[0]=='O'&&a[4]=='O'&&a[8]=='O')||
       (a[1]=='X'&&a[4]=='X'&&a[7]=='X')||(a[1]=='O'&&a[4]=='O'&&a[7]=='O')||
       (a[2]=='X'&&a[4]=='X'&&a[6]=='X')||(a[2]=='O'&&a[4]=='O'&&a[6]=='O')||
       (a[2]=='X'&&a[5]=='X'&&a[8]=='X')||(a[2]=='O'&&a[5]=='O'&&a[8]=='O')||
       (a[3]=='X'&&a[4]=='X'&&a[5]=='X')||(a[3]=='O'&&a[4]=='O'&&a[5]=='O')||
       (a[6]=='X'&&a[7]=='X'&&a[8]=='X')||(a[6]=='O'&&a[7]=='O'&&a[8]=='O')
       )
        return 1;
    else if(a[0]>32 && a[1]>32 && a[2]>32 && a[3]>32 && a[4]>32 && a[5]>32 && a[6]>32 && a[7]>32 && a[8]>32)
        return 0;
    else
        return -1;

}

int Board2()
{
    char v = '|';

    printf("1 %2c 2%2c 3\n", v, v);
    printf("-----------\n");
    printf("4 %2c 5%2c 6\n", v, v);
    printf("-----------\n");
    printf("7 %2c 8%2c 9\n", v, v);

    return 0;
}

