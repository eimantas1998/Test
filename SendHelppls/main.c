#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct S_dictonary {

	char *Lithuanian[100];
	char *English[100];
	struct S_dictonary *next;

} word;

void PrintList(word *start) {
	word *currentWord = start;
	int count = 0;

	while(currentWord != NULL) {
		count++;
		printf("Number:%d Lithuanian:%s English:%s\n",
            count,
			currentWord->Lithuanian,
			currentWord->English);
		currentWord = currentWord->next;
	}
	printf("Total words:%d\n",count);
}

word *AddWord(word *previous) {

	printf("Enter Lithuanian And English: ");
	char input[100];
	fgets( input, 99, stdin);

	word *newWord = malloc(sizeof(word));
	sscanf(input, "%s %s", newWord->Lithuanian, newWord->English);
	printf("Lithuanian:%s English:%s\n\n",newWord->Lithuanian,newWord->English);
	newWord->next = NULL;
	if(previous != NULL) {
		previous->next = newWord;
	}
	return newWord;
}

void CleanUp(word *start) {

	word *freeMe = start;
	word *holdMe = NULL;
	while(freeMe != NULL) {
		holdMe = freeMe->next;
		printf("Free Lithuanian:%s English:%s\n",
			freeMe->Lithuanian,
			freeMe->English);
		free(freeMe);
		freeMe = holdMe;
	}
}

void deletenode(struct S_dictonary* head, int key)
{
    struct S_dictonary * p,*q;
    p=q=head;
    int i=0;
    for(i=1;i<key-1;i++)
    {
       p=p->next;
    }
    q=p->next;
    p->next=q->next;
    free(q);
}

int main() {

	char command[16];
	char input[16];
	word *start = NULL;
	word *newest = NULL;
	int x;
	printf("Welcome to my dictonary thing!!!\n");
	printf("----------------------------------\n");
	printf("To add new words just write add\n");
	printf("To look what u have just write print\n");
	printf("To sort words you already have write sort\n");
	printf("To quit simply write quit\n");

	while( fgets( input, 15, stdin) ) {

		sscanf(input,"%s",command);

		if ( strncmp(command, "quit", 4) == 0) {
			printf("\n\nBreaking...\n");
			break;
		}
		else if ( strncmp(command, "print", 5) == 0) {
			PrintList(start);
		}
		 else if ( strncmp(command, "sort", 4) == 0) {

		}

		 else if ( strncmp(command, "add", 3) == 0)
			{if(start == NULL) {
				start = AddWord(NULL);
				newest = start;
			} else {
				newest = AddWord(newest);
			}
		}
	}

	CleanUp(start);

	return 0;
}

