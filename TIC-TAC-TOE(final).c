#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//function to display 2 player game mode

void display_game(char p[])
{
    printf("\n\n\n\n      \t\t\t\t\t\t\t\t\t\t %c | %c | %c \n",p[0],p[1],p[2]);
    printf("      \t\t\t\t\t\t\t\t\t\t---+---+---\n");
    printf("      \t\t\t\t\t\t\t\t\t\t %c | %c | %c \n",p[3],p[4],p[5]);
    printf("      \t\t\t\t\t\t\t\t\t\t---+---+---\n");
    printf("      \t\t\t\t\t\t\t\t\t\t %c | %c | %c \n",p[6],p[7],p[8]);
}

//function to display 3 player game mode

void display_game2(char g[16][3]){
    printf("\n\n\n\n      \t\t\t\t\t\t\t\t\t\t %-2s | %-2s | %-2s | %-2s  \n", g[0], g[1], g[2], g[3]);
printf("      \t\t\t\t\t\t\t\t\t\t----+----+----+----\n");
printf("      \t\t\t\t\t\t\t\t\t\t %-2s | %-2s | %-2s | %-2s  \n", g[4], g[5], g[6], g[7]);
printf("      \t\t\t\t\t\t\t\t\t\t----+----+----+----\n");
printf("      \t\t\t\t\t\t\t\t\t\t %-2s | %-2s | %-2s | %-2s  \n", g[8], g[9], g[10], g[11]);
printf("      \t\t\t\t\t\t\t\t\t\t----+----+----+----\n");
printf("      \t\t\t\t\t\t\t\t\t\t %-2s | %-2s | %-2s | %-2s  \n", g[12], g[13], g[14], g[15]);

}

//function to display 4 player game mode

void display_game3(char h[25][3]){
    printf("\n\n\n\n      \t\t\t\t\t\t\t\t\t\t %-2s | %-2s | %-2s | %-2s | %-2s  \n", h[0], h[1], h[2], h[3],h[4]);
printf("      \t\t\t\t\t\t\t\t\t\t----+----+----+----+----\n");
printf("      \t\t\t\t\t\t\t\t\t\t %-2s | %-2s | %-2s | %-2s | %-2s \n", h[5], h[6], h[7], h[8],h[9]);
printf("      \t\t\t\t\t\t\t\t\t\t----+----+----+----+----\n");
printf("      \t\t\t\t\t\t\t\t\t\t %-2s | %-2s | %-2s | %-2s | %-2s \n", h[10], h[11], h[12], h[13],h[14]);
printf("      \t\t\t\t\t\t\t\t\t\t----+----+----+----+----\n");
printf("      \t\t\t\t\t\t\t\t\t\t %-2s | %-2s | %-2s | %-2s | %-2s \n", h[15], h[16], h[17], h[18],h[19]);
printf("      \t\t\t\t\t\t\t\t\t\t----+----+----+----+----\n");
printf("      \t\t\t\t\t\t\t\t\t\t %-2s | %-2s | %-2s | %-2s | %-2s \n", h[20], h[21], h[22], h[23],h[24]);
}

//function to display banner using filing concepts

void banner(){
	char line [1000];
	FILE *banner;
	banner = fopen("C:\\Users\\Aqsa\\Desktop\\banner.txt","r");
	if(banner == NULL){
		printf("Error Loading Banner\n");	
		return;	
	}
	while (fgets(line,sizeof(line),banner)!=NULL){
		printf("%s",line);
	}
	fclose(banner);
}

//main function

int main()
{
	char g[16][3],h[25][3];
	int m2draw=0,m3draw=0,m4draw=0,m2player1=0,m2player2=0,m3player1=0,m3player2=0,m3player3=0,m4player1=0,m4player2=0,m4player3=0,m4player4=0;
	int  player=0;
	char n[3],option[3];
	//use of while loop ensuring player to be able to play game again 
	while(1){
		int win=0;
		printf("\n\t\t\t\t\t\t\t\t******************MENU******************\n\n");
		printf("\t\t\t\t\t\t\t\t       Press 1 to start the game \n");
		printf("\t\t\t\t\t\t\t\t       Press 2 to View Leaderboard\n");
		printf("\t\t\t\t\t\t\t\t       Press 3 for instructions \n");
		printf("\t\t\t\t\t\t\t\t       Press 0 to Exit the game \n");
		scanf("%s",&option);
		if(strlen(option)!=1 || option[0]>'3' || option[0]<'0'){
			printf("Invalid Input\n\n");
		}
	 // game ends if user enters 0 at the beginning of the program
    if(option[0]=='0')
	{
	printf("\t\t\t\t\t\t\t\t******************Game Ended******************");
	return 0;
    }
    if(option[0]=='3'){
    	system("cls");
    	printf("\n\t\t\t\t\t\t\t\t******************INSTRUCTIONS******************\n");
    	printf("\n\t\t\t\t\t\t\t\tFirst Select Number Of Players afterwhich when the\n\t\t\t\t\t\t\t\tgame layout appears make sure each Player Remember\n\t\t\t\t\t\t\t\ttheir symbols then there are various number displaying\n\t\t\t\t\t\t\t\ton the game layout each player has to select a number\n\t\t\t\t\t\t\t\tin the range of game layout to mark their move on that\n\t\t\t\t\t\t\t\tparticular spot.\n\t\t\t\t\t\t\t\tWINNING CONDITIONS : \n\t\t\t\t\t\t\t\tFor 2 Players First to 3 Win\n\t\t\t\t\t\t\t\tFor 3 Players First to 4 Win\n\t\t\t\t\t\t\t\tFor 4 Players First to 5 Win\n");
	}
		if(option[0]=='2'){
			system("cls");
			printf("\n\n\n\n\n\n\n\t\t\t\t\t\t====================LEADERBOARD====================\n\n");
			printf("2 player Mode :\nPlayer 1 Wins : %d\tPlayer 2 Wins : %d\t Draws : %d\tTotal Games Played : %d\n\n\n",m2player1,m2player2,m2draw,m2player1+m2player2+m2draw);
			printf("3 player Mode :\nPlayer 1 Wins : %d\tPlayer 2 Wins : %d\tPlayer 3 Wins : %d\tDraws : %d\tTotal Games Played : %d\n\n\n",m3player1,m3player2,m3player3,m3draw,m3player1+m3player2+m3player3+m3draw);
			printf("4 player Mode :\nPlayer 1 Wins : %d\tPlayer 2 Wins : %d\tPlayer 3 Wins : %d\tPlayer 4 Wins : %d\tDraws : %d\tTotal Games Played : %d\n\n\n",m4player1,m4player2,m4player3,m4player4,m4draw,m4player1+m4player2+m4player3+m4player4+m4draw);
	        printf("\t\t\t\t\t\t===================================================\n\n");
		}
		if(option[0]=='1'){
			system("cls");
	banner();
  printf("\nPRESS '2' FOR 2 PLAYER GAME\nPRESS '3' FOR 3 PLAYER GAME\nPRESS '4' FOR 4 PLAYER GAME\n");
  scanf("%s",&n);
  
  //Error handling if player enter incorrect no. of players 
  if(n[0]>'4'||n[0]<'2'){
 	printf("Invalid Input\n");
 }
 
 // 2 player game starting :
  if(n[0]=='2'){
  	//array for passing in 2 player game function:
	char p[9]={'1','2','3','4','5','6','7','8','9'};
  	char symbol;
  	display_game(p);
  	
  printf("\nPlayer 1 = 'X'\n");
  printf("Player 2 = 'O'\n");
  for(int i=0 ; i<9 ; i++){
                        player = (i % 2) + 1;
                        char move[3];
                        int valid = 0;
                        while (!valid) {
                            printf("\nPlayer %d Enter Your Move (1-9): ", player);
                            scanf("%s", move);
                            
   //effective error handling for wrong moves entered:
                            if (strlen(move) == 1 && move[0] >= '1' && move[0] <= '9' && p[move[0] - '1'] != 'X' && p[move[0] - '1'] != 'O') {
                                valid = 1;
                                if(player==1){
                                	symbol='X';
								}else{
									symbol='0';
								}
                                p[move[0]-'1'] = symbol;
                                system("cls");
                                banner();
                                display_game(p);
                            } else {
                                printf("\nInvalid move. Please try again Player %d\n",player);
                            }}
							                            
	if(p[0]== p[1] && p[1] == p[2] || 
     p[3]== p[4] && p[4] == p[5] ||
     p[6]== p[7] && p[7] == p[8] ||
     p[0]== p[4] && p[4] == p[8] ||
     p[2]== p[4] && p[4] == p[6] ||
	 p[0]== p[3] && p[3] == p[6] ||
	 p[1]== p[4] && p[4] == p[7]||
	 p[2]== p[5] && p[5] == p[8]){
    printf("\n\n\t\t\t\t\t\t\t\t\t\tPlayer %d Won\n",player);
    win=1;
    if(player==1){
    	m2player1++;
	}
	if(player==2){
		m2player2++;
	}
    break ;
    }
   }
 //condition for draw (2 player game)
 if(win==0&&n[0]=='2'){
 	printf("\n\n\t\t\t\t\t\t\t\t\t\t\tIt's A Draw !\n\n");
 	m2draw++;
 }
}
 //starting of 3 player game :
  if(n[0]=='3'){
  	 //array for passing in 3 player game function:
	for (int i=0 ; i<16 ; i++){
		sprintf(g[i], "%d", i+1);}
 char symbol;
 	char x[3];
 	int move;
 	int moveindex;
 	display_game2(g);
  
  printf("\nPlayer 1 = 'X'\n");
  printf("Player 2 = 'O'\n");
  printf("player 3 = 'A'\n");
  for(int i=0 ; i<16 ; i++){
      if(i%3==0){
      	player =1;
	  }else if (i%3==1){
	  	player = 2 ;
	  } else if (i%3==2){
	  	player = 3 ;
	  }
	  char move[3];
      int valid = 0;
      while(!valid){
      printf("\nPlayer %d Enter Your Move : ",player);
  	scanf("%s",move);
  	moveindex= atoi(move)-1;
  	
  	//effective error handling for wrong moves entered:
  	if(moveindex >= 0 && moveindex < 16 && strcmp(g[moveindex], "X") != 0 && strcmp(g[moveindex], "O") != 0 && strcmp(g[moveindex], "A") != 0) 
	  {
	  	 valid = 1;
      if(player==1){
        symbol = 'X';
      }else if(player==2){
      symbol = 'O';
      }else if(player ==3){
      	symbol = 'A';
	  }
	sprintf(g[moveindex], "%c", symbol);
	  system("cls");
	  banner();
      display_game2(g);}
      else {
      printf("\nInvalid move. Please try again Player %d\n",player);
	   }}
  // winning condition (3 players) :
  if((strcmp(g[0], g[1]) == 0 && strcmp(g[1], g[2]) == 0 && strcmp(g[2], g[3]) == 0) ||  // Row 1
        (strcmp(g[4], g[5]) == 0 && strcmp(g[5], g[6]) == 0 && strcmp(g[6], g[7]) == 0) ||  // Row 2
        (strcmp(g[8], g[9]) == 0 && strcmp(g[9], g[10]) == 0 && strcmp(g[10], g[11]) == 0) || // Row 3
        (strcmp(g[12], g[13]) == 0 && strcmp(g[13], g[14]) == 0 && strcmp(g[14], g[15]) == 0) || // Row 4
        (strcmp(g[0], g[4]) == 0 && strcmp(g[4], g[8]) == 0 && strcmp(g[8], g[12]) == 0) ||  // Column 1
        (strcmp(g[1], g[5]) == 0 && strcmp(g[5], g[9]) == 0 && strcmp(g[9], g[13]) == 0) ||  // Column 2
        (strcmp(g[2], g[6]) == 0 && strcmp(g[6], g[10]) == 0 && strcmp(g[10], g[14]) == 0) || // Column 3
        (strcmp(g[3], g[7]) == 0 && strcmp(g[7], g[11]) == 0 && strcmp(g[11], g[15]) == 0) || // Column 4
        (strcmp(g[0], g[5]) == 0 && strcmp(g[5], g[10]) == 0 && strcmp(g[10], g[15]) == 0) || // Main Diagonal (\)
        (strcmp(g[3], g[6]) == 0 && strcmp(g[6], g[9]) == 0 && strcmp(g[9], g[12]) == 0)){
    printf("\n\n\t\t\t\t\t\t\t\t\t\tPlayer %d Won\n",player);
    if(player==1){
    	m3player1++;
	}
	if(player==2){
		m3player2++;
	}
	if(player==3){
		m3player3++;
	}
    win=1;
    break ;
    } 
	}
	//condition for draw(3 players):
	if(win==0 && n[0]=='3'){
			m3draw++;
  	printf("\n\t\t\t\t\t\t\t\t\t\tIt's A Draw!\n\n");
 }	
    } 
    
 // 4 player game starting :
 
 if(n[0]=='4'){		
	 //array for passing in 4 player game function:
	 for (int i=0 ; i<25 ; i++){
		sprintf(h[i], "%d", i+1);
	}	
 char symbol;
 	char move[3];
 	int moveindex;
 	display_game3(h);
  
  printf("\nPlayer 1 = 'X'\n");
  printf("Player 2 = 'O'\n");
  printf("player 3 = 'A'\n");
  printf("player 4 = 'Y'\n");
  for(int i=0 ; i<25 ; i++){
      if(i%4==0){
      	player =1;
	  }else if (i%4==1){
	  	player = 2 ;
	  } else if (i%4==2){
	  	player = 3 ;
	  }else if (i%4==3){
	  	player = 4 ;
	  }
	  int valid=0;
	  while(!valid){
      printf("\n\t\t\t\t\t\t\t\tPlayer %d Enter Your Move : ",player);
  	scanf("%s",move);
  moveindex= atoi(move)-1;
  
  //effective error handling for wrong moves entered:
  
  	if(moveindex >= 0 && moveindex <25  && strcmp(h[moveindex], "X") != 0 && strcmp(h[moveindex], "O") != 0 && strcmp(h[moveindex], "A") != 0 && strcmp(h[moveindex], "Y") != 0) 
	  {
	  	 valid = 1;
      if(player==1){
        symbol = 'X';
      }else if(player==2){
      symbol = 'O';
      }else if(player ==3){
      	symbol = 'A';
	  }else if(player==4){
	  	symbol = 'Y';
	  }
	sprintf(h[moveindex], "%c", symbol);
	  system("cls");
	  banner();
      display_game3(h);}
      else {
      printf("\nInvalid move. Please try again Player %d\n",player);
	   }}
		// winning condition (4 players):
  if((strcmp(h[0], h[1]) == 0 && strcmp(h[1], h[2]) == 0 && strcmp(h[2], h[3]) == 0 && strcmp(h[3], h[4]) == 0) ||  // Row 1
        (strcmp(h[5], h[6]) == 0 && strcmp(h[6], h[7]) == 0 && strcmp(h[7], g[8]) == 0 && strcmp(h[8], h[9]) == 0) ||  // Row 2
        (strcmp(h[10], h[11]) == 0 && strcmp(h[11], h[12]) == 0 && strcmp(h[12], h[13]) == 0 && strcmp(h[13], h[14]) == 0) || // Row 3
        (strcmp(h[15], h[16]) == 0 && strcmp(h[16], h[17]) == 0 && strcmp(h[17], h[18]) == 0 && strcmp(h[18], h[19]) == 0) || // Row 4
        (strcmp(h[0], h[5]) == 0 && strcmp(h[5], h[10]) == 0 && strcmp(h[10], h[15]) == 0 && strcmp(h[15], h[20]) == 0) ||  // Column 1
        (strcmp(h[1], h[6]) == 0 && strcmp(h[6], h[11]) == 0 && strcmp(h[11], h[16]) == 0 && strcmp(h[16], h[21]) == 0) ||  // Column 2
        (strcmp(h[2], h[7]) == 0 && strcmp(h[7], h[12]) == 0 && strcmp(h[12], h[17]) == 0 && strcmp(h[17], h[22]) == 0) || // Column 3
        (strcmp(h[3], h[8]) == 0 && strcmp(h[8], h[13]) == 0 && strcmp(h[13], h[18]) == 0&& strcmp(g[18], g[23]) == 0) || // Column 4
        (strcmp(h[0], h[6]) == 0 && strcmp(h[6], h[12]) == 0 && strcmp(h[12], h[18]) == 0&& strcmp(h[18], h[24]) == 0) || // Main Diagonal (\)
        (strcmp(h[4], h[8]) == 0 && strcmp(h[8], h[12]) == 0 && strcmp(h[12], h[16]) == 0&& strcmp(h[16], h[20]) == 0)){
    printf("\n\n\t\t\t\t\t\t\t\t\t\tPlayer %d Won\n",player);
     if(player==1){
    	m4player1++;
	}
	if(player==2){
		m4player2++;
	}
	if(player==3){
		m4player3++;
	}
	if(player==4){
		m4player4++;
	}
    win=1;
    break ;
    }
	}
	if(win==0 && n[0]=='4'){
		// condition for draw(4 players)
			m4draw++;
  	printf("\n\t\t\t\t\t\t\t\t\t\tIt's A Draw!\n\n");
 }	
}
}
}
}

