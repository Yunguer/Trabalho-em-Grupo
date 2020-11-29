#include<stdio.h>

void m (char casasq [3][3]) {
	printf("jogo da velha!\n");
	printf("%c %c %c\n", casasq[0][0], casasq [0][1], casasq[0][2]);
	printf("%c %c %c\n", casasq[1][0], casasq [1][1], casasq[1][2]);
	printf("%c %c %c\n", casasq[2][0], casasq [2][1], casasq[2][2]);
}
int main () {
	
	int x, y=0; // turnos do jogo e decide quem ganha, vez de cada jogador
	int l, c, i, j; //linha e coluna
	
	char casasq [3][3] =
	 { 
	{'1','2','3'},
	{'6','5','4'},
	{'7','8','9'},
	 };
	for (i=0;i<=2;i++) {
		for (j=0;j<=2;j++) {
		casasq[i][j]=' ';
		}
	}
	
	do { //logica do jogo
		m (casasq);
		if (l<1 || c<1 ||l>3 ||c>3) {
			l=0;
			c=0;
			printf ("jogada invalida\n");
		} 
		else if (casasq[l-1][c-1]!=' ') {
			l=0;
			c=0;
			printf ("jogada invalida\n");
		} 
		else {
		if(y%2==0) {
			// se for a jogada do jogador 1
			casasq[l-1][c-1]='1';
		} 
			else {
				// se for a jogada do jogador 2
				casasq[l-1][c-1]='2';
		} 
		y++;
		x++;
		}
		
		
		// se o jogador 1 ganhar
		if(casasq[0][0]=='1' && casasq[0][1]=='1' && casasq[0][2]=='1') {
			x=111;
		}
		if(casasq[1][0]=='1' && casasq[1][1]=='1' && casasq[1][2]=='1') {
			x=111;
		}
		if(casasq[2][0]=='1' && casasq[2][1]=='1' && casasq[2][2]=='1') {
			x=111;
		}
		if(casasq[0][0]=='1' && casasq[1][0]=='1' && casasq[2][0]=='1') {
			x=111;
		}
		if(casasq[0][1]=='1' && casasq[1][1]=='1' && casasq[2][1]=='1') {
			x=111;
		}
		if(casasq[2][0]=='1' && casasq[2][1]=='1' && casasq[2][2]=='1') {
			x=111;
		}
		if(casasq[0][0]=='1' && casasq[1][1]=='1' && casasq[2][2]=='1') {
			x=111;
		}
		if(casasq[0][2]=='1' && casasq[1][1]=='1' && casasq[2][0]=='1') {
			x=111;
		}
	
		// se o jogador 2 ganhar
		if(casasq[0][0]=='2' && casasq[0][1]=='2' && casasq[0][2]=='2') {
			x=222;
		}
		if(casasq[1][0]=='2' && casasq[1][1]=='2' && casasq[1][2]=='2') {
			x=222;
		}
		if(casasq[2][0]=='2' && casasq[2][1]=='2' && casasq[2][2]=='2') {
			x=222;
		}
		if(casasq[0][0]=='2' && casasq[1][0]=='2' && casasq[2][0]=='2') {
			x=222;
		}
		if(casasq[0][1]=='2' && casasq[1][1]=='2' && casasq[2][1]=='2') {
			x=222;
		}
		if(casasq[2][0]=='2' && casasq[2][1]=='2' && casasq[2][2]=='2') {
			x=222;
		}
		if(casasq[0][0]=='2' && casasq[1][1]=='2' && casasq[2][2]=='2') {
			x=222;
		}
		if(casasq[0][2]=='2' && casasq[1][1]=='2' && casasq[2][0]=='2') {
			x=222;
		}
		
	}while(9 <= x); // se o numero de jogadas possiveis terminar
	
	if(x==111){
	printf("Jogador 1 venceu\n");
	}
	if(x==222){
	printf("Jogador 2 venceu\n");
	}
	if(x==10){
	printf("Empate\n");
	}


}
