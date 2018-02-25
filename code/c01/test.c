#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int prob_sudoku[9][9],empty_cell_not[9][9],prob_len,rowcheck=1,columncheck=1,boxcheck=1,going_back_flag=1,repeat,i,j,k,l;
    char problem[100];

    /*INPUT*/
    printf("Enter the problem sudoku:\n");
    do
    {
        repeat=0;
        scanf("%s",problem);
        prob_len=strlen(problem);
        if(prob_len!=81)
        {
            printf("Invalid input. The problem must have 81 digits.\nPlease enter the problem again:\n");
            repeat=1;
        }
    }
    while(repeat==1);

    /*PREPARE PROBLEM SUDOKU*/
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            prob_sudoku[i][j]=toascii(problem[9*i+j])-48;
            if(prob_sudoku[i][j]==0){empty_cell_not[i][j]=0;}
            else{empty_cell_not[i][j]=1;}
        }
    }

    /*SOLVE*/
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(empty_cell_not[i][j]==0)
            {
                do
                {
                    going_back_flag=0;
                    while((rowcheck==1 || columncheck==1 || boxcheck==1) && prob_sudoku[i][j]<=9)
                    {
                        rowcheck=0; columncheck=0; boxcheck=0;
                        prob_sudoku[i][j]++;

                        for(k=0;k<9;k++)
                        {
                            if(k!=j && prob_sudoku[i][j]==prob_sudoku[i][k])
                            {
                                rowcheck=1;
                                printf("Row Conflict  \t%d%d%d\t%d%d%d\n",i,j,prob_sudoku[i][j],i,k,prob_sudoku[i][k]);
                                break;
                            }
                        }

                        if(rowcheck==0)
                        {
                            for(l=0;l<9;l++)
                            {
                                if(l!=i && prob_sudoku[i][j]==prob_sudoku[l][j])
                                {
                                    columncheck=1;
                                    printf("Column Conflict\t%d%d%d\t%d%d%d\n",i,j,prob_sudoku[i][j],l,j,prob_sudoku[l][j]);
                                    break;
                                }
                            }
                        }

                        if(rowcheck==0 && columncheck==0)
                        {
                            for(k=0;k<9;k++)
                            {for(l=0;l<9;l++)
                                {
                                    if(k!=j && l!=i && (10*(i/3)+j/3==10*(l/3)+k/3) && prob_sudoku[i][j]==prob_sudoku[l][k])
                                    {
                                        boxcheck=1;
                                        printf("Box Conflict  \t%d%d%d\t%d%d%d\n",i,j,prob_sudoku[i][j],l,k,prob_sudoku[l][k]);
                                        break;
                                    }
                                }
                            }
                        }
                    }

                    rowcheck=1; columncheck=1; boxcheck=1;

                    if(prob_sudoku[i][j]>9)
                    {
                        prob_sudoku[i][j]=0;
                        do
                        {
                            j--;
                            if(j<0)
                            {
                                j=8; i--;
                            }
                        }
                        while(empty_cell_not[i][j]==1);
                        going_back_flag=1;
                        printf("\n\nGoing Back\t\n\n");
                    }
                }
                while(going_back_flag==1);
            }
        }
    }

    /*OUTPUT*/
    printf("\n\nThe solution is:\n");
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%d",prob_sudoku[i][j]);
        }
    }
    return 0;
}
