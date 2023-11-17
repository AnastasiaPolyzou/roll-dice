/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <stdbool.h>

int main() {
   int player1_score=0;
   int player2_score=0;
   int rounds=0;
   int choice;
   
   srand(time(0)); //realtime
   
   char player1_name[20];
   char player2_name[20]; 
   bool namesEntered = false;
    
    
     printf("Welcome in roll dice game \n");
       printf("1. Begin new round: \n");
       printf("0. Exit from game: \n");
       scanf("%d" ,&choice);
   
   
   while(1) {
      
       
       
         if(choice == 0) {
           break;
       
        } else if(choice == 1) {
           if(!namesEntered) { 
           
           
           printf("Player 1 please enter your name: \n");
           scanf("%s" ,player1_name);
           
           printf("Player 2 please enter your name: \n");
           scanf("%s" ,player2_name);
           
           namesEntered = true;
           }
           
           int player1_roll=rand(% 10+)1; // random number from 1-10
           int player2_roll=rand(% 10+)1;
           
           printf("%s roll %d\n" , player1_name , player1_roll);
           printf("%s roll %d\n" , player2_name , player2_roll);
           
           //must be print rolls and now to return dice to win
           //increase score and rounds must be 
        
           if(player1_roll>player2_roll) {
               printf("this round win goes to: %s \n" ,player1_name);
               
               player1_score++;
           
           } else if(player1_roll<player2_roll) {
               printf("this round win goes to: %s \n" ,player2_name);
               
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
           
           
    
