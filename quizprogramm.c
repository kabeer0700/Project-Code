#include<stdio.h>
#include<string.h>
#include<ctype.h>
void instruction(){
    printf("\033[1;34m=============================================\n");  
printf("                HOW TO PLAY                \n");
printf("=============================================\033[0m\n\n");

printf("\033[1;33m1) Choose a Category:\n");  
printf("   Select a question category such as General Knowledge, CRICKET, Science, etc.\n");
printf("   (Available categories will be displayed if applicable.)\033[0m\n\n");

printf("\033[1;36m2) Answer Questions:\n");  
printf("   You will be presented with a series of multiple-choice questions.\n");
printf("   Each question has four options (A, B, C, D). Type the letter of your choice.\033[0m\n\n");

printf("\033[1;32m3) Scoring System:\n");  
printf("   Correct answers earn points! The points can vary depending on the difficulty of the question.\n");
printf("   Incorrect answers will not affect your score.\033[0m\n\n");

printf("\033[1;35m4) Special CRICKET Section:\n");  
printf("   In this section, questions are more challenging. You must fill in the blanks without options.\n");
printf("   A hint will be provided, and using it will grant extra points (1 point). If not used, the maximum score is 2.\n");
printf("   Please ensure to enter the full and correct name for answers (e.g., 'West Indies' is correct, 'westindies' is incorrect).\033[0m\n\n");

printf("\033[1;32mGood luck and enjoy the game!\033[0m\n");  


}
int disGK(char q1[][200],int num,char opt1[][30],char key1[]){
      int score=0;
      printf("\033[30m==============================================\033[0m\n");
      printf("\033[1;47m            GENERAL KNOWLEDGE QUIZ           \033[0m\n");
      printf("\033[30m==============================================\033[0m\n");

      for(int i=0;i<num;i++){
        printf("%s\n",q1[i]);
    for(int j=(i*4);j<(i*4)+4;j++){
        printf("%s\n",opt1[j]);
    }
    char guess;
    printf("enter your option\n");
    scanf(" %c", &guess);

    guess = toupper(guess);

    if(guess == key1[i]){
      score+=2;
      printf("\033[32mCORRECT ANSWER YOU HAVE EARNED 2 POINTS:.\033[0m\n"); 
      
    }
    else{
        printf("\033[31mOops you have entered wrong option.\033[0m\n");
    }

    }
    return score;
}
int disCS(char q2[][200],int num,char opt2[][35],char key2[]){
      int score=0;
      printf("\033[30m==============================================\033[0m\n");
      printf("\033[44m             COMPUTER SCIENCE QUIZ            \033[0m\n");
      printf("\033[30m==============================================\033[0m\n");

      for(int i=0;i<num;i++){
        printf("%s\n",q2[i]);
    for(int j=(i*4);j<(i*4)+4;j++){
        printf("%s\n",opt2[j]);
    }
    char guess;
    printf("\033[34menter your option\033[0m\n");
    scanf(" %c", &guess);

    guess = toupper(guess);

    if(guess == key2[i]){
      score+=2;
      printf("\033[32mCORRECT ANSWER YOU HAVE EARNED 2 POINTS:.\033[0m\n"); 
      
    }
    else{
       printf("\033[31mYOUR ANSWER IS WRONG!!.. \033[0m\n\n");
    }

    }
    return score;
}
int disCRIC(char q3[][200],int num,char hint[][20],char key3[][25]){
      char answer[10][30];
       int score = 0;
       char YN;
       int flag=0;

      printf("\033[30m==============================================\033[0m\n");
      printf("\033[41m             CRICKET QUIZZZ                   \033[0m\n");
      printf("\033[30m==============================================\033[0m\n");

        for(int i=0;i<num;i++){
        
            printf("%s\n",q3[i]);
         printf("Enter Y if you want hint else N (NOTE:Taking Hint will cost u lose 1 point)\t");
         scanf(" %c",&YN);
         YN=toupper(YN);
         
         if(YN=='Y'){
            printf("YOUR HINT IS: %s\n",hint[i]);
            flag++;
            printf("\n\033[34m enter your answer: \033[0m");
            score--;
         }
        else    printf("\n\033[34m enter your answer: \033[0m");

       
          
          scanf(" %[^\n]s",answer[i]);
            
           if(strcmp(answer[i],key3[i])==0){
            printf("\033[32mCORRECT ANSWER!\033[0m\n\n");
             score=score+2;
           }
           else{
            printf("\033[31mYOUR ANSWER IS WRONG!!..\033[0m\n\n");
           }

         }
         printf("\033[41mNumber of hint used %d\033[0m\n",flag);
        return score;               
}


int main(){
    
    int start=1;
    int num=10;
    int words=200;
    
    char q1[10][200]={"Q1)Who was the first president of the United States?\n",
                     "Q2)What is the capital city of France?\n",
                     "Q3)What planet is known as the Red Planet?\n",
                     "Q4)What is the largest mammal in the world?\n",
                     "Q5)How many continents are there on Earth?\n",
                     "Q6)Who wrote the play Romeo and Juliet?\n",
                     "Q7)In which year did World War II end?\n",
                     "Q8)What is the smallest country in the world by land area?\n",
                     "Q9)How many colors are there in a rainbow?\n",
                     "Q10)What is the chemical symbol for water?\n"};

      char opt1[40][30]={
    "A) Abraham Lincoln\n","B) George Washington\n","C) Thomas Jefferson\n","D) John Adams\n",
    "A) Rome\n","B) Berlin\n","C) Madrid\n","D) Paris\n",
    "A) Venus\n","B) Mars\n","C) Jupiter\n","D) Saturn\n",
    "A) African Elephant\n","B) Giraffe\n","C) Blue Whale\n","D)GreatWhiteShark\n",
    "A) Five\n","B) Six\n","C) Seven\n","D) Eight\n",
    "A) Charles Dickens\n","B) Mark Twain\n","C) J.K. Rowling\n","D)W.Shakespeare\n",
    "A) 1939\n","B) 1945\n","C) 1950\n","D) 1965\n",
    "A) Monaco\n","B) Nauru\n","C) Vatican City\n","D) San Marino\n",
    "A) Five\n","B) Six\n","C) Seven\n","D) Eight\n",
    "A) CO2\n","B) H2O\n","C) O2\n","D) NaCl\n"};       

    char key1[10]={'B','D','B','C','C','D','B','C','C','B'};   

    char q2[10][200]={"1. What does CPU stand for?",
    "2. What is the name of the part of the computer that stores data permanently?",
    "3. Which of these languages is a low-level programming language?",
    "4. What does 'HTTP' stand for?", "5. What is the smallest unit of data in a computer?",
    "6. Which of the following is NOT an operating system?",
    "7. Who is known as the father of computer science?",
    "8. Which of these is a type of network topology?","9. In programming, what is a loop used for?",
    "10. Which sorting algorithm has the best average time complexity?"};   

    char opt2[40][35]={"A) Central Processing Unit\n","B) Central Program Unit\n","C) Computer Processing Unit\n",
    "D) Control Processing Unit\n","A) RAM\n","B) ROM\n","C) CPU\n","D) Cache\n","A) Python\n","B) Java\n","C) Assembly\n",
    "D) JavaScript\n","A) HyperText Transfer Protocol\n","B) HyperText Transmission Protocol\n","C) HighText Transfer Protocol\n",
    "D) HyperLink Transfer Protocol\n","A) Bit\n","B) Byte\n","C) Kilobyte\n","D) Megabyte\n","A) Windows\n","B) macOS\n",
    "C) Linux\n","D) Python\n","A) Charles Babbage\n","B) Alan Turing\n","C) Bill Gates\n","D) Steve Jobs\n","A) Line\n","B) Grid\n",
    "C) Bus\n","D) Branch\n","A) To repeat a block of code\n","B) To define a variable\n","C) To delete data\n",
    "D) To exit a program\n","A) Bubble Sort\n","B) Quick Sort\n","C) Selection Sort\n","D) Insertion Sort\n"};   
    
    char key2[10]={'A','B','C','A','A','D','B','C','A','B'};

    char q3[10][200]={"1)Who is the highest run-scorer in the history of Test cricket?\n",
    "2)Which player has the most wickets in Test cricket history?\n","3)Who was the first cricketer to reach 10,000 runs in ODIs?\n",
    "4)Which country won the first-ever Cricket World Cup in 1975?\n","5)Who holds the record for the fastest century in ODIs?\n",
    "6)Who is known as the Sultan of Swing in cricket?\n","7)Who has scored the most runs in a single ODI inning?\n",
    "8)Which captain has won the most number of ICC Cricket World Cups?\n",
    "9)Who was the first bowler to take a hat-trick in a World Cup match?\n",
    "10)Who is the youngest cricketer to score a century in international cricket?\n"
 };
 char key3[10][25]={
    "Sachin Tendulkar","Muttiah Muralitharan","Sachin Tendulkar","West Indies","AB de Villiers",
    "Wasim Akram","Rohit Sharma","Ricky Ponting","Chetan Sharma","Shahid Afridi"
 };
 char hint[10][20]={
    "Little Master","Srilankan","Best straight drive","red flag","Mr360","NO Hint","HIT_MAN",
    "Kangaroo","sharma","Boom Boom"
 };

    int choice;
    while(start){
        
        printf("\033[1;34m==========================================\033[0m\n");  
        printf("\033[1;47m          WELCOME TO THE QUIZ GAME        \033[0m\n"); 
        printf("\033[1;34m==========================================\033[0m\n");  

        printf("\033[1;36m\nPlease review the options below and make your selection:\n\033[0m");
        printf("\033[1;33m1) Start QUIZ\n\033[0m");  
        printf("\033[1;35m2) INSTRUCTIONS\n\033[0m");  
        printf("\033[1;31m3) EXIT\n\033[0m");  

        printf("\033[1;36m\nENTER YOUR CHOICE (1-3): \033[0m");  

        scanf("%d",&choice);
        printf("\n");
        
        switch(choice){
            case 1:{
                printf("\033[1;32m1) GENERAL KNOWLEDGE\n\033[0m");
                printf("\033[1;33m2) COMPUTER SCIENCE\n\033[0m");
                printf("\033[1;35m3) CRICKET\n\033[0m");
                printf("\033[1;31m4) BACK\n\033[0m");

                int ch;
                printf("\n");
                scanf("%d",&ch);
                printf("\n");
                if(ch==1){
                       int score1=disGK(q1,num,opt1,key1);
                       
                  printf("YOUR GK SCORE IS %d/20.\n",score1);
            (score1<10)?printf("\n\033[41mYou Need To Improve Your General Knwoledge.\033[0m\n"):printf("\n\033[42mGOOD JOB.\033[0m\n");
    if(score1==20) printf("\n\033[46mApkaa Knowledge Tou Kammal Ka Hain Bhai.\033[0m\n");
}
                else if(ch==2){
                  int score2=disCS(q2,num,opt2,key2);
                  printf("YOUR CS SCORE IS %d/20.\n",score2);
    (score2<10)?printf("\n\033[41mYou Need To Improve Your Computer Science Basics.\033[0m\n"):printf("\n\033[42mGOOD JOB.\033[0m\n");
    if(score2==20) printf("\n\033[46mApkaa Knowledge Tou Kammal Ka Hain Bhai.\033[0m\n");
       }
                else if (ch==3){
                  int score3=disCRIC(q3,num,hint,key3);
                  printf("YOUR CRICKET SCORE IS %d/20.\n",score3);
                (score3<10)?printf("\n\033[41mYou are not a true cricket fan.\033[0m\n"):printf("\n\033[42mExcellent!!.\033[0m\n");
                if(score3==20) printf("\n\033[46mApkaa Knowledge Tou Kammal Ka Hain Bhai.\033[0m\n");
                  
                }
                else if(ch==4){
                    break;
                }
                else{
                    printf("\033[31minvalid input.\033[0m\n");
                }
                // start =0;
                break;
                
            }
            case 2:{
                instruction();
                break;
            }
            case 3:{
                printf("\n\033[45m THANK YOU FOR PLAYING QUIZ GAME: \033[0m");
                start =0;
                break;
            }
            default : {
                printf("\033[31minvalid input.\033[0m\n");
                break;
            }
        }
    }
}