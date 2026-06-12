#include <stdio.h>
#include <string.h>
int main()
{
    //MAD LIBS GAME
    char noun[50];
    char verb[50];
    char adjective[50];
    char adverb[50];

    printf("Enter a Noun (Human or Animal): ");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1] = '\0';

    printf("Enter a Verb: ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1] = '\0';

    printf("Enter a Adjective: ");
    fgets(adjective,sizeof(adjective),stdin);
    adjective[strlen(adjective)-1] = '\0';

    printf("Enter a Adverb: ");
    fgets(adverb,sizeof(adverb),stdin);
    adverb[strlen(adverb)-1] ='\0';

    printf("\n");
    printf("Lets Move into the Story...");
    printf("\nOne day, a %s %s decided to %s %s in the park.",adjective,noun,verb,adverb);
    printf("\nEveryone laughed and had a great time!");
    return 0;

    /* The Story is...
       One day, a funny dog decided to dance quickly in the park.
       Everyone laughed and had a great time!
    */

}