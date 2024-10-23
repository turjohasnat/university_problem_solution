//C Solution:
#include <stdio.h>

struct Train{
    char name[100];
    int totalTickets;
    float ratings;
};

int addTrain(struct Train listOfTrains[], int numOfTrains);
int mostPopularTrain(struct Train listOfTrains[], int numOfTrains);
void displayAllTrains(struct Train listOfTrains[], int numOfTrains);

int main(){
    struct Train listOfTrains[100];
    int numOfTrains = 0;
    int choice;

    while (1){
        printf("\n");
        printf("1. Add a train\n");
        printf("2. Most Popular Train\n");
        printf("3. List of the trains\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1){
            numOfTrains = addTrain(listOfTrains, numOfTrains);
        }
        else if (choice == 2){
            int index = mostPopularTrain(listOfTrains, numOfTrains);
            if (index != -1) {
                printf("Name of the Most Popular Train: %s\n", listOfTrains[index].name);
            } else {
                printf("No trains available.\n");
            }
        }
        else if (choice == 3) {
            displayAllTrains(listOfTrains, numOfTrains);
        }
        else if (choice == 4) {
            return 0;
        }
        else {
            printf("Invalid choice. Please try again.\n");
        }
    }
}

int addTrain(struct Train listOfTrains[], int numOfTrains){
    printf("Name of the train: ");
    scanf(" %[^\n]", listOfTrains[numOfTrains].name);

    printf("Total tickets: ");
    scanf("%d", &listOfTrains[numOfTrains].totalTickets);

    printf("Ratings: ");
    scanf("%f", &listOfTrains[numOfTrains].ratings);

    numOfTrains++;
    return numOfTrains;
}

int mostPopularTrain(struct Train listOfTrains[], int numOfTrains){
    if (numOfTrains == 0) {
        return -1;
    }

    int maxTicketsIndex = 0;
    for (int i = 1; i < numOfTrains; i++) {
        if (listOfTrains[i].totalTickets > listOfTrains[maxTicketsIndex].totalTickets) {
            maxTicketsIndex = i;
        }
    }
    return maxTicketsIndex;
}

void displayAllTrains(struct Train listOfTrains[], int numOfTrains){
    if (numOfTrains == 0) {
        printf("No trains available.\n");
        return;
    }

    for (int i = 0; i < numOfTrains; i++){
        printf("\n");
        printf("Name of the train: %s\n", listOfTrains[i].name);
        printf("Total tickets: %d\n", listOfTrains[i].totalTickets);
        printf("Ratings: %.1f\n", listOfTrains[i].ratings);
    }
}
