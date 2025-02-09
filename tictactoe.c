#include <stdio.h>
int main()
{
    printf("\n\n\n\nWELCOME TO TIC-TAC-TOE\n\nTo continue to game: ENTER '0'  : ");
    char condition;
    scanf("%c", &condition);
    getchar();

    while (condition == '0')
    { // OUTER LOOP BEGINS

        char p[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
        printf("\n\n %c | %c | %c \n---+---+---\n %c | %c | %c \n---+---+---\n %c | %c | %c \n", p[0][0], p[0][1], p[0][2], p[1][0], p[1][1], p[1][2], p[2][0], p[2][1], p[2][2]);
        int x = 0, y = 0, i, j, a = 0, b = 0, c = 0; // x checks winnings and draws;  y checks for illegal move/invalid input;  a,b,c are used for checking the conditions of winning
        int ch;

        while (x != 999 && x != 1000 && x != 9) // if x==999: Player 1 wins;  if x==1000: Player 2 wins;  if x==9: DRAW
        {
        // INPUT FROM PLAYER 1
        again1:
            printf("\nPLAYER 1 (X) :- Enter the number to mark the position : ");
            scanf("%d", &ch);
            getchar();
            if (ch < 1 || ch > 9)
            {
                printf("INVALID INPUT");
                goto again1;
            }
            ch = ch + 48;
            for (i = 0; i < 3; i++)
                for (j = 0; j < 3; j++)
                    if (ch == p[i][j])
                    {
                        p[i][j] = 'X';
                        y = 1;
                    }
            if (y == 0)
            {
                printf("ILLEGAL MOVE");
                goto again1;
            }
            y = 0;

            // DISPLAY OF PROGRESS of player1
            printf("\n\n\n %c | %c | %c \n---+---+---\n %c | %c | %c \n---+---+---\n %c | %c | %c \n", p[0][0], p[0][1], p[0][2], p[1][0], p[1][1], p[1][2], p[2][0], p[2][1], p[2][2]);

            // Checking if  X wins
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (p[i][j] == 'X')
                        a++;
                    if (p[j][i] == 'X')
                        b++;
                }
                if (p[i][i] == 'X')
                    c++;
                if (a == 3 || b == 3 || c == 3)
                {
                    x = 999;
                    goto result;
                }
                a = b = 0;
                if (p[0][2] == 'X' && p[1][1] == 'X' && p[2][0] == 'X')
                {
                    x = 999;
                    goto result;
                }
            }

            a = b = c = 0;
            x++;
            if (x == 9)
                continue; // if x==9 then the game has drawn and thus the command line skips the further code

        // INPUT FROM PLAYER 2
        again2:
            printf("\nPLAYER 2 (o) :- Enter the number to mark the position : ");
            scanf("%d", &ch);
            getchar();
            if (ch < 1 || ch > 9)

                printf("INVALID INPUT");
            goto again2;
        }
        ch = ch + 48;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                if (ch == p[i][j])
                {
                    p[i][j] = 'o';
                    y = 1;
                }
        if (y == 0)
        {
            printf("ILLEGAL MOVE");
            goto again2;
        }
        y = 0;

        // DISPLAY OF PROGRESS of player 2
        printf("\n\n\n %c | %c | %c \n---+---+---\n %c | %c | %c \n---+---+---\n %c | %c | %c \n", p[0][0], p[0][1], p[0][2], p[1][0], p[1][1], p[1][2], p[2][0], p[2][1], p[2][2]);

        // Checking if  Y wins
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (p[i][j] == 'o')
                    a++;
                if (p[j][i] == 'o')
                    b++;
            }
            if (p[i][i] == 'o')
                c++;
            if (a == 3 || b == 3 || c == 3)
            {
                x = 1000;
                goto result;
            }
            a = b = 0;

            if (p[0][2] == 'o' && p[1][1] == 'o' && p[2][0] == 'o')
            {
                x = 1000;
                goto result;
            }
            a = b = c = 0;
            x++;
        }

    result: // results being displayed
        if (x == 999)
            printf("\n\nPLAYER 1(X): WON!!!\n\n");
        else if (x == 1000)
            printf("\n\nPLAYER 2(o): WON!!!\n\n");
        else
            printf("THE GAME WAS A DRAW!!!\n\n");

        printf("\nTO PLAY ANOTHER MATCH ENTER '0'\nTO EXIT ENTER ANYTHING ELSE : ");
        scanf("%c", &condition);
        printf("\n\n\n");
    } // outer loop exit
    printf("GOODBYE!  SEE YOU AGAIN...");
    return 0;
}
