/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <stdbool.h>

int rolldice() {
    return (rand() % 10) +1; // dice 1 from 10
}

int main() {
   int player1_score=0;
   int player2_score=0;
   int rounds=0;
   int choice;
   
   srand(time(0)); //realtime
   
   char player1_name[20];
   char player2_name[20]; 
   bool namesentered = false; // no put a lot of times the name of each player
    
    
     printf("Welcome in roll dice game \n");
       printf("1. Begin new round: \n");
       printf("0. Exit from game: \n");
       scanf("%d" ,&choice);
   
   
   while(1) {
      
       
       
         if(choice == 0) {
           break;
       
        } else if(choice == 1) {
           if(!namesentered) { 
           
           
           printf("Player 1 please enter your name: \n");
           scanf("%s" ,player1_name);
           
           printf("Player 2 please enter your name: \n");
           scanf("%s" ,player2_name);
           
           namesentered = true;
           }
           
           int player1_roll1=rolldice();
           int player1_roll2=rolldice();
           int player2_roll1=rolldice();
           int player2_roll2=rolldice();
           
           printf("%s roll %d and %d\n" , player1_name , player1_roll1,  player1_roll2);
           printf("%s roll %d and %d\n" , player2_name , player2_roll1, player2_roll2);
           
           int player1_total=player1_roll1+player1_roll2;
           int player2_total=player2_roll1+player2_roll2; // total dice 
          
           //must be print rolls and now to return dice to win
          
           //increase score and rounds must be 
           
           if(player1_total>player2_total) {
               printf("This round win goes to: %s \n" ,player1_name);
               
               player1_score++;
           
           } else if(player1_total<player2_total) {
               printf("This round win goes to: %s \n" ,player2_name);
               
               player2_score++;
           
           } else {
               printf("This round is a draw. \n"); //if rand give the same number player1_roll=player2_roll
           }
           
           rounds++; // mandate to increase rounds
           
           printf("Score after the round %d: \n" ,rounds);
           printf("%s: %d\n", player1_name, player1_score);
           printf("%s: %d\n", player2_name, player2_score);
           
           if(player1_score == 5 || player2_score == 5) {
               printf("\n The winner is: %s after %d rounds.\n" , (player1_score ==5) ? player1_name : player2_name, rounds);
               break; // exit when you have the winner in 5 wins  
           }
        }   
        
        
   }   
        return 0;
           
   }      
           
           
    
           
           
    
