#include <stdio.h>
#include <stdlib.h>

void jogodavelha(char posicao2[5][5])
{
	system("cls");
	printf("\t %c | %c | %c | %c | %c\n",posicao2[0][0],posicao2[0][1],posicao2[0][2],posicao2[0][3],posicao2[0][4]);
	printf("\t ------------------\n");
	printf("\t %c | %c | %c | %c | %c\n",posicao2[1][0],posicao2[1][1],posicao2[1][2],posicao2[1][3],posicao2[1][4]);
	printf("\t ------------------\n");
	printf("\t %c | %c | %c | %c | %c\n",posicao2[2][0],posicao2[2][1],posicao2[2][2],posicao2[2][3],posicao2[2][4]);
	printf("\t ------------------\n");
	printf("\t %c | %c | %c | %c | %c\n",posicao2[3][0],posicao2[3][1],posicao2[3][2],posicao2[3][3],posicao2[3][4]);
	printf("\t ------------------\n");
	printf("\t %c | %c | %c | %c | %c\n",posicao2[4][0],posicao2[4][1],posicao2[4][2],posicao2[4][3],posicao2[4][4]);
	
	
}

int main()
{
    char posicao[5][5] = 
    {
        {'1','2','3','4','5',},
        {'6','7','8','9','10',},
        {'11','12','13','14','15',},
        {'16','17','18','19','20',},
        {'21','22','23','24','25',},
    };
    char loop;
    int ctjogadas,l,c,vez = 0,i,j;
    do
    {
        ctjogadas = 1;
        for(i=0;i<=4;i++)
        {
            for(j=0;j<=4;j++)
            {
                posicao[i][j] = '0';
            }
        }
        do
        {
            jogodavelha(posicao);
            printf("\n");
            if(vez%2==0)
            {
                printf("Primeiro jogador:\n");
            }
            else
            {
                printf("Segundo jogador:\n");
            }
            printf("Digite a linha: ");
            scanf("%i",&l);
            printf("Digite a coluna: ");
            scanf("%i",&c);
            if(l < 1 || c < 1 || l > 5 || c > 5)
            {
                l = 0;
                c = 0;
                printf("Posicao invalida\n");
                printf("Tente novamente\n");
                printf("\n");
                system("pause");
            }
            else if(posicao[l-1][c-1] != '0')
            {
                l = 0;
                c = 0;
                printf("Posicao invalida\n");
                printf("Tente novamente\n");
                printf("\n");
                system("pause");
            }
            else
            {
                if(vez%2==0)
                {
                    posicao[l-1][c-1] = '1';
                }
                else
                {
                    posicao[l-1][c-1] = '2';
                }
                vez++;
                ctjogadas++;
                    
            }
            if(posicao[0][0]=='1' && posicao[0][1]=='1'&& posicao[0][2]=='1' && posicao[0][3]=='1' && posicao[0][4]=='1'){ctjogadas = 27;}
            if(posicao[1][0]=='1' && posicao[1][1]=='1'&& posicao[1][2]=='1' && posicao[1][3]=='1' && posicao[1][4]=='1'){ctjogadas = 27;}
            if(posicao[2][0]=='1' && posicao[2][1]=='1'&& posicao[2][2]=='1' && posicao[2][3]=='1' && posicao[2][4]=='1'){ctjogadas = 27;}
            if(posicao[3][0]=='1' && posicao[3][1]=='1'&& posicao[3][2]=='1' && posicao[3][3]=='1' && posicao[3][4]=='1'){ctjogadas = 27;}
            if(posicao[4][0]=='1' && posicao[4][1]=='1'&& posicao[4][2]=='1' && posicao[4][3]=='1' && posicao[4][4]=='1'){ctjogadas = 27;}
            if(posicao[0][0]=='1' && posicao[1][0]=='1'&& posicao[2][0]=='1' && posicao[3][0]=='1' && posicao[4][0]=='1'){ctjogadas = 27;}
            if(posicao[0][1]=='1' && posicao[1][1]=='1'&& posicao[2][1]=='1' && posicao[3][1]=='1' && posicao[3][1]=='1'){ctjogadas = 27;}
            if(posicao[0][2]=='1' && posicao[1][2]=='1'&& posicao[2][2]=='1' && posicao[3][2]=='1' && posicao[4][2]=='1'){ctjogadas = 27;}
            if(posicao[0][3]=='1' && posicao[1][3]=='1'&& posicao[2][3]=='1' && posicao[3][3]=='1' && posicao[4][3]=='1'){ctjogadas = 27;}
            if(posicao[0][4]=='1' && posicao[1][4]=='1'&& posicao[2][4]=='1' && posicao[3][4]=='1' && posicao[4][4]=='1'){ctjogadas = 27;}
            if(posicao[0][0]=='1' && posicao[1][1]=='1'&& posicao[2][2]=='1' && posicao[3][3]=='1' && posicao[4][4]=='1'){ctjogadas = 27;}
            if(posicao[0][4]=='1' && posicao[1][3]=='1'&& posicao[2][2]=='1' && posicao[3][1]=='1' && posicao[4][0]=='1'){ctjogadas = 27;}
            
            if(posicao[0][0]=='2' && posicao[0][1]=='2'&& posicao[0][2]=='2' && posicao[0][3]=='2' && posicao[0][4]=='2'){ctjogadas = 28;}
            if(posicao[1][0]=='2' && posicao[1][1]=='2'&& posicao[1][2]=='2' && posicao[1][3]=='2' && posicao[1][4]=='2'){ctjogadas = 28;}
            if(posicao[2][0]=='2' && posicao[2][1]=='2'&& posicao[2][2]=='2' && posicao[2][3]=='2' && posicao[2][4]=='2'){ctjogadas = 28;}
            if(posicao[3][0]=='2' && posicao[3][1]=='2'&& posicao[3][2]=='2' && posicao[3][3]=='2' && posicao[3][4]=='2'){ctjogadas = 28;}
            if(posicao[4][0]=='2' && posicao[4][1]=='2'&& posicao[4][2]=='2' && posicao[4][3]=='2' && posicao[4][4]=='2'){ctjogadas = 28;}
            if(posicao[0][0]=='2' && posicao[1][0]=='2'&& posicao[2][0]=='2' && posicao[3][0]=='2' && posicao[4][0]=='2'){ctjogadas = 28;}
            if(posicao[0][1]=='2' && posicao[1][1]=='2'&& posicao[2][1]=='2' && posicao[3][1]=='2' && posicao[3][1]=='2'){ctjogadas = 28;}
            if(posicao[0][2]=='2' && posicao[1][2]=='2'&& posicao[2][2]=='2' && posicao[3][2]=='2' && posicao[4][2]=='2'){ctjogadas = 28;}
            if(posicao[0][3]=='2' && posicao[1][3]=='2'&& posicao[2][3]=='2' && posicao[3][3]=='2' && posicao[4][3]=='2'){ctjogadas = 28;}
            if(posicao[0][4]=='2' && posicao[1][4]=='2'&& posicao[2][4]=='2' && posicao[3][4]=='2' && posicao[4][4]=='2'){ctjogadas = 28;}
            if(posicao[0][0]=='2' && posicao[1][1]=='2'&& posicao[2][2]=='2' && posicao[3][3]=='2' && posicao[4][4]=='2'){ctjogadas = 28;}
            if(posicao[0][4]=='2' && posicao[1][3]=='2'&& posicao[2][2]=='2' && posicao[3][1]=='2' && posicao[4][0]=='2'){ctjogadas = 28;}
        }
        while(ctjogadas<=25);
        jogodavelha(posicao);
        printf("\n");
        if(ctjogadas==26)
        {
            printf("Empate!\n");
        }
        if(ctjogadas==27)
        {
            printf("Parabens! Primeiro jogador ganhou!\n");
        }
        if(ctjogadas==28)
        {
            printf("Parabens! Segundo jogador ganhou!\n");
        }
        loop='s';
    	system("pause");
    }
    while(loop=='s');
}
