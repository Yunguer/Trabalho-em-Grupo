#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
    int x, y, g, o, tabuleiro[30][30], novotabuleiro[30][30];
    for(int i=0;i<30;i++){
        for(int j=0;j<30;j++){
            tabuleiro[i][j]=1;
            novotabuleiro[i][j]=1;
        }
    }
    printf("Por quantas gerações o jogo será simulado?\n");
    scanf("%d", &g);
    printf("Digite 1 se quiser indicar a posição de cada vida ou qualquer outro número se quiser uma matriz aleatória:\n");
    scanf("%d", &o);
    printf("O tabuleiro vai do 0 ao 29 da esquerda para a direita e de cima para baixo.\n");
    if(o==1){
	
    printf("Digite a linha e a coluna em que quer uma vida(encerre com -1 -1)\n");
    do{
        scanf("%d %d", &x, &y);
        if (x==-1 && y==-1){break;}
        tabuleiro[x][y]=0;
    }while(x!=-1 && y!=-1);
} else {
	for(int i=0;i<30;i++){
        for(int j=0;j<30;j++){
            tabuleiro[i][j]=(rand()%2);
			}
			}

}

    for(int h=0; h<g; h++){
        system("cls||clear");
        
    for(int i=0;i<30;i++){
        for(int j=0;j<30;j++){
            if(tabuleiro[i][j]==0){
                    printf("%d ", tabuleiro[i][j]);
            } else {printf(" ");}
            int k=0;
            if(i==0 && j==0){ 
                    if (tabuleiro[i+1][j]==0){k++;}
                    if (tabuleiro[i+1][j+1]==0){k++;}
                    if (tabuleiro[i][j+1]==0){k++;}
                }
                else if(i==0 && j==29){ 
                    if(tabuleiro[i+1][j]==0){k++;}
                    if (tabuleiro[i+1][j-1]==0){k++;}
                    if (tabuleiro[i][j-1]==0){k++;}
                }
                else if(i==29 && j==0){ 
                    if (tabuleiro[i-1][j]==0){k++;}
                    if (tabuleiro[i-1][j+1]==0){k++;}
                    if (tabuleiro[i][j+1]==0){k++;}
                }
                else if(i==29 && j==29){ 
                    if(tabuleiro[i-1][j]==0){k++;}
                    if(tabuleiro[i-1][j-1]==0){k++;}
                    if(tabuleiro[i][j-1]==0){k++;}
                }
                else if(i==0){
                    if(tabuleiro[i][j+1]==0){k++;}
                    if(tabuleiro[i][j-1]==0){k++;}
                    if(tabuleiro[i+1][j]==0){k++;}
                    if(tabuleiro[i+1][j-1]==0){k++;}
                    if(tabuleiro[i+1][j+1]==0){k++;}
                }
                else if(i==29){
                    if(tabuleiro[i][j+1]==0){k++;}
                    if(tabuleiro[i][j-1]==0){k++;}
                    if(tabuleiro[i-1][j]==0){k++;}
                    if(tabuleiro[i-1][j-1]==0){k++;}
                    if(tabuleiro[i-1][j+1]==0){k++;}
                }
                else if(j==0){
                    if(tabuleiro[i][j+1]==0){k++;}
                    if(tabuleiro[i-1][j]==0){k++;}
                    if(tabuleiro[i+1][j]==0){k++;}
                    if(tabuleiro[i-1][j+1]==0){k++;}
                    if(tabuleiro[i+1][j+1]==0){k++;}
                }
                else if(j==29){
                    if(tabuleiro[i][j-1]==0){k++;}
                    if(tabuleiro[i-1][j]==0){k++;}
                    if(tabuleiro[i+1][j]==0){k++;}
                    if(tabuleiro[i-1][j-1]==0){k++;}
                    if(tabuleiro[i+1][j-1]==0){k++;}
                }
                else{
                    if(tabuleiro[i-1][j]==0){k++;}
                    if(tabuleiro[i-1][j+1]==0){k++;}
                    if(tabuleiro[i][j+1]==0){k++;}
                    if(tabuleiro[i+1][j+1]==0){k++;}
                    if(tabuleiro[i+1][j]==0){k++;}
                    if(tabuleiro[i+1][j-1]==0){k++;}
                    if(tabuleiro[i][j-1]==0){k++;}
                    if(tabuleiro[i-1][j-1]==0){k++;}
                }
                if(tabuleiro[i][j]==0 && (k == 2 || k ==3)){
                    novotabuleiro[i][j]=0;
                }
                else if(tabuleiro[i][j]==0 && k<2){
                    novotabuleiro[i][j]=1;
                }
                else if(tabuleiro[i][j]==0 && k>3){
                    novotabuleiro[i][j]=1;
                } else if(tabuleiro[i][j]==1 && k==3){
                    novotabuleiro[i][j]=0;
                }
            
        }
        printf("\n");
    }
    for(int i=0;i<30;i++){
        for(int j=0;j<30;j++){
            tabuleiro[i][j]=novotabuleiro[i][j];
        }
    }
    Sleep(500);
    }
    return 0;
    
}
