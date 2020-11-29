#include<stdio.h>

void imprimirElefanteVertical(char M[23][23])
{
	int i,j;
	
	for(i=0;i<22;i++)
    {
        for(j=22;j>=0;j--)
        {
            printf("%c",M[i][j]);
        }
        printf("\n");
    }
}

void imprimirRotacaoSentidoAntiHorario(char M[23][23])
{
	int i,j;
	
	for(j=0;j<22;j++)
    {
        for(i=0;i<22;i++)
        {
            printf("%c",M[i][j]);
        }
        printf("\n");
    }
}

void imprimirRotacaoSentidoHorario(char M[23][23])
{
	int i,j;
	
	for(j=22;j>=0;j--)
    {
        for(i=22;i>=0;i--)
        {
            printf("%c",M[i][j]);
        }
        printf("\n");
    }
}
void imprimirElefanteNormal(char M[23][23])
{
	int i,j;
	
	for(i=0;i<23;i++)
    {
        for(j=0;j<23;j++)
        {
            printf("%c",M[i][j]);
        }
        printf("\n");
    }
}

void ImprimirElefanteHorizontal(char M[23][23])
{
	int i,j;
	
	for(i=22;i>=0;i--)
    {
        for(j=22;j>=0;j--)
        {
            printf("%c",M[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    char M[23][23];
    int i,j;
    char op[2];
    int ctop=0;
    printf("Seu Desenho:\n");
    for(i=0;i<23;i++)
    {
        for(j=0;j<23;j++)
        {
            scanf("%[^\n]",&M[i][j]);
        }
    }
    
    getchar();
    
    imprimirElefanteNormal(M);
    
    for(ctop=0;ctop<2;ctop++)
    {
    	scanf("%c",&op[ctop]);
    }
    printf("\n");
    if(op[0] == 'R' && op[1] == '1' )
    {
    	imprimirRotacaoSentidoHorario(M);
    }
    else if(op[0] == 'R' && op[1] == '2' )
    {
   	imprimirRotacaoSentidoAntiHorario(M);
    }
    else if(op[0] == 'E' && op[1] == 'V' )
    {
    	imprimirElefanteVertical(M);
    }
    else if(op[0] == 'E' && op[1] == 'H' )
    {
    	ImprimirElefanteHorizontal(M);
    }

    return 0;
}
