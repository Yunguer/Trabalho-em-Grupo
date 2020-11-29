#include <stdio.h>
#include <stdlib.h>

void jogodavelha(char posicao2[3][3])
{
	system("cls");
	printf("\t %c | %c | %c \n",posicao2[0][0],posicao2[0][1],posicao2[0][2]);
	printf("\t ----------\n");
	printf("\t %c | %c | %c\n",posicao2[1][0],posicao2[1][1],posicao2[1][2]);
	printf("\t ----------\n");
	printf("\t %c | %c | %c\n",posicao2[2][0],posicao2[2][1],posicao2[2][2]);
	
}

int main()
{
    char posicao[3][3] = 
    {
        {'1','2','3',},
        {'4','5','6',},
        {'7','8','9',},
    };
    char loop;
    int ctjogadas,l,c,vez = 0,i,j;
    do
    {
        ctjogadas = 1;
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
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
            if(l < 1 || c < 1 || l > 3 || c > 3)
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
            if(posicao[0][0]=='1' && posicao[0][1]=='1'&& posicao[0][2]=='1'){ctjogadas = 11;}
            if(posicao[1][0]=='1' && posicao[1][1]=='1'&& posicao[1][2]=='1'){ctjogadas = 11;}
            if(posicao[2][0]=='1' && posicao[2][1]=='1'&& posicao[2][2]=='1'){ctjogadas = 11;}
            if(posicao[0][0]=='1' && posicao[1][0]=='1'&& posicao[2][0]=='1'){ctjogadas = 11;}
            if(posicao[0][1]=='1' && posicao[1][1]=='1'&& posicao[2][1]=='1'){ctjogadas = 11;}
            if(posicao[0][2]=='1' && posicao[1][2]=='1'&& posicao[2][2]=='1'){ctjogadas = 11;}
            if(posicao[0][0]=='1' && posicao[1][1]=='1'&& posicao[2][2]=='1'){ctjogadas = 11;}
            if(posicao[0][2]=='1' && posicao[1][1]=='1'&& posicao[2][0]=='1'){ctjogadas = 11;}
            
            if(posicao[0][0]=='2' && posicao[0][1]=='2'&& posicao[0][2]=='2'){ctjogadas = 12;}
            if(posicao[1][0]=='2' && posicao[1][1]=='2'&& posicao[1][2]=='2'){ctjogadas = 12;}
            if(posicao[2][0]=='2' && posicao[2][1]=='2'&& posicao[2][2]=='2'){ctjogadas = 12;}
            if(posicao[0][0]=='2' && posicao[1][0]=='2'&& posicao[2][0]=='2'){ctjogadas = 12;}
            if(posicao[0][1]=='2' && posicao[1][1]=='2'&& posicao[2][1]=='2'){ctjogadas = 12;}
            if(posicao[0][2]=='2' && posicao[1][2]=='2'&& posicao[2][2]=='2'){ctjogadas = 12;}
            if(posicao[0][0]=='2' && posicao[1][1]=='2'&& posicao[2][2]=='2'){ctjogadas = 12;}
            if(posicao[0][2]=='2' && posicao[1][1]=='2'&& posicao[2][0]=='2'){ctjogadas = 12;}
        }
        while(ctjogadas<=9);
        jogodavelha(posicao);
        printf("\n");
        if(ctjogadas==10)
        {
            printf("Empate!\n");
        }
        if(ctjogadas==11)
        {
            printf("Parabens! Primeiro jogador ganhou!\n");
        }
        if(ctjogadas==12)
        {
            printf("Parabens! Segundo jogador ganhou!\n");
        }
        loop='s';
    	system("pause");
    }
    while(loop=='s');
}
