#include "stdio.h"

typedef struct S_Word {

	char Lithuanian[100];
	char English[100];

} Word;

const int MaxWords = 10000;

void PrintList(Word wordArray[], int num) {
	printf("Word list:\n");
	int carIndex = 0;
	Word *w;
	for(carIndex = 0; carIndex < num; carIndex++) {
		w = &wordArray[carIndex];
		printf("Words:%d Lithuanian:%s English:%s\n------------\n",
				carIndex+1, w->Lithuanian, w->English);
	}
	printf("Total:%d Words\n\n",num);
}

int AddCar(Word *w) {
	printf("Enter Lithuanian And English: ");
	char input[100];
	fgets( input, 99, stdin);
	int ok = 0;

	int res = sscanf(input, "%s %s", w->Lithuanian, w->English);

	if(res == 2) {
		ok = 1;
		printf("Added:%s English:%s\n\n",w->Lithuanian,w->English);
	} else {
		printf("Sorry, error parsing input\n\n");
	}
	return ok;
}

int main() {

	Word allWords[MaxWords];
	int numWords = 0;

	char command[16];
	char input[16];

	while( fgets( input, 15, stdin) ) {

		sscanf(input,"%s",command);

		if ( strncmp(command, "quit", 4) == 0) {
			printf("\n\nBreaking...\n");
			break;
		} else if ( strncmp(command, "print", 5) == 0) {
			PrintList(allWords, numWords);
		} else if ( strncmp(command, "add", 3) == 0) {
			if(numWords < MaxWords) {
				numWords += AddCar( &allWords[numWords] );
			} else {
			    printf("Sorry List Is Full!!\n\n");
			}
		}
	}


	return 0;

}
