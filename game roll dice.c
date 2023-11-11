/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {
   int player1_score=0;
   int player2_score=0;
   int rounds=0;
   
   srand(time(0)); //realtime
   
   while(1) {
       int choice;
       printf("Welcome in roll dice game \n");
       printf("1. Begin new round: \n");
       printf("0. Exit from game: \n");
       scanf("%d" ,&choice);
       
         if(choice == 0) {
           break;
       
        } else if(choice == 1) {
           char player1_name[20];
           char player2_name[20];
           
           printf("Player 1 please enter your name: \n");
           scanf("%s" ,player1_name);
           
           printf("Player 2 please enter your name: \n");
           scanf("%s" ,player2_name);
           
           int player1_roll=rand() % 10+1; // random number from 1-10
           int player2_roll=rand() % 10+1;
           
           printf("%s roll %d\n" , player1_name , player1_roll);
           printf("%s roll %d\n" , player2_name , player2_roll);
           
           //must be print rolls and now to return dice to win
           //increase score and rounds must be 
        
           if(player1_roll>player2_roll) {
               printf("%s this round win goes to: \n" ,player1_name);
               
               player1_score++;
           
           } else if(player1_roll<player2_roll) {
               printf("%s this round win goes to: \n" ,player2_name);
               
               player2_score++;
           
           } else {
               printf("This round is a draw. \n"); //if rand give the same number player1_roll=player2_roll
           }
           
           rounds++; // mandate to increase rounds
           
           printf("Score after the round %d: \n" ,rounds);
           printf("%s: %d\n", player1_name, player1_score);
           printf("%s: %d\n", player2_name, player2_score);
           
           if(player1_score>=5 || player2_score>=5) {
               printf("The winner is: %s\n" ,player1_score>player2_score ? player1_name : player2_name);
               break; // exit when you have the winner in 5 wins  
           } else {
               printf("Not right choice please try again. \n");
           }
           
           
        
           
           
           
           
       }
   }

    return 0;
}
