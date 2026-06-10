#include <stdio.h>
#include <stdlib.h>

struct Player {
char name[50];
int runs;
int balls;
int fours;
int sixes;
float strikeRate;
};

int main() {


char team1[50], team2[50];
char tossWinner[50];
char choose[20];

int total1, wickets1, total2, wickets2;
float overs1, overs2;

struct Player p1, p2;

printf("\n=========================================\n");
printf("      CRICKET SCOREBOARD SYSTEM\n");
printf("=========================================\n");

printf("\nEnter Team 1 Name: ");
scanf("%s", team1);

printf("Enter Team 2 Name: ");
scanf("%s", team2);

printf("\nToss won by: ");
scanf("%s", tossWinner);

printf("Choose Bat/Bowl: ");
scanf("%s", choose);

printf("\n=========================================\n");

printf("\nEnter %s Innings Details\n", team1);

printf("Runs: ");
scanf("%d", &total1);

printf("Wickets: ");
scanf("%d", &wickets1);

printf("Overs: ");
scanf("%f", &overs1);

printf("\nTop Performer of %s\n", team1);

printf("Player Name: ");
scanf("%s", p1.name);

printf("Runs Scored: ");
scanf("%d", &p1.runs);

printf("Balls Faced: ");
scanf("%d", &p1.balls);

printf("Fours: ");
scanf("%d", &p1.fours);

printf("Sixes: ");
scanf("%d", &p1.sixes);

p1.strikeRate = ((float)p1.runs / p1.balls) * 100;

printf("\n-----------------------------------------\n");

printf("\nEnter %s Innings Details\n", team2);

printf("Runs: ");
scanf("%d", &total2);

printf("Wickets: ");
scanf("%d", &wickets2);

printf("Overs: ");
scanf("%f", &overs2);

printf("\nTop Performer of %s\n", team2);

printf("Player Name: ");
scanf("%s", p2.name);

printf("Runs Scored: ");
scanf("%d", &p2.runs);

printf("Balls Faced: ");
scanf("%d", &p2.balls);

printf("Fours: ");
scanf("%d", &p2.fours);

printf("Sixes: ");
scanf("%d", &p2.sixes);

p2.strikeRate = ((float)p2.runs / p2.balls) * 100;

printf("\n=========================================\n");
printf("            MATCH SUMMARY\n");
printf("=========================================\n");

printf("\n%s : %d/%d (%.1f Overs)\n",
       team1, total1, wickets1, overs1);

printf("Top Player: %s\n", p1.name);

printf("Runs: %d | Balls: %d | 4s: %d | 6s: %d | SR: %.2f\n",
       p1.runs, p1.balls, p1.fours, p1.sixes, p1.strikeRate);

printf("\n%s : %d/%d (%.1f Overs)\n",
       team2, total2, wickets2, overs2);

printf("Top Player: %s\n", p2.name);

printf("Runs: %d | Balls: %d | 4s: %d | 6s: %d | SR: %.2f\n",
       p2.runs, p2.balls, p2.fours, p2.sixes, p2.strikeRate);

printf("\n=========================================\n");

if(total1 > total2) {

    printf("\n%s WON THE MATCH BY %d RUNS!\n",
           team1, total1-total2);

    printf("\nMAN OF THE MATCH: %s\n", p1.name);
}

else if(total2 > total1) {

    printf("\n%s WON THE MATCH BY %d WICKETS!\n",
           team2, 10-wickets2);

    printf("\nMAN OF THE MATCH: %s\n", p2.name);
}

else {

    printf("\nMATCH DRAW!\n");
}

FILE *file = fopen("score.txt", "a");

fprintf(file, "\n====================================\n");

fprintf(file, "\n%s : %d/%d",
        team1, total1, wickets1);

fprintf(file, "\n%s : %d/%d",
        team2, total2, wickets2);

fprintf(file, "\nWinner Recorded Successfully\n");

fclose(file);

printf("\nMatch data saved to score.txt\n");

printf("\n=========================================\n");
printf("      THANK YOU FOR USING SYSTEM\n");
printf("=========================================\n");

return 0;


}
