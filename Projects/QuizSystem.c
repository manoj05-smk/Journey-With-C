#include <stdio.h>
#include <string.h>
#include <ctype.h>
typedef char string[10][150];

int main()
{
    // *** QUIZ System ***
    printf("-----------------------------------\n");
    printf(" Welcome to the ---> TECH QUIZ <---\n");
    printf("-----------------------------------\n");
    string quiz={"Which company developed the C programming language?",
                 "Who is known as the Father of the Computer?",
                 "Which programming language is primarily used for Android app development?",
                 "What does CPU stand for?",
                 "Which protocol is mainly used to browse websites?",
                 "Which data structure works on the LIFO principle?",
                 "What does AI stand for?",
                 "Which of the following is a cloud computing platform?",
                 "Which company developed the Linux operating system?",
                 "Which database language is used to manage relational databases?"};
    
    string options={{"A. Microsoft\nB. Apple\nC. Bell Labs\nD. IBM"},
                    {"A. Alan Turing\nB. Charles Babbage\nC. Bill Gates\nD. Tim Berners-Lee"},
                    {"A. Python\nB. Java\nC. PHP\nD. Swift"},
                    {"A. Central Process Unit\nB. Computer Processing Unit\nC. Central Processing Unit\nD. Central Programming Unit"},
                    {"A. FTP\nB. HTTP\nC. SMTP\nD. SSH"},
                    {"A. Queue\nB. Linked List\nC. Stack\nD. Tree"},
                    {"A. Automatic Intelligence\nB. Artificial Intelligence\nC. Advanced Internet\nD. Automated Interface"},
                    {"A. AWS\nB. Photoshop\nC. VLC\nD. Notepad++"},
                    {"A. Microsoft\nB. Google\nC. Apple\nD. Linus Torvalds."},
                    {"A. HTML\nB. CSS\nC. SQL\nD. XML"} 
                   };        
    char answers[]={'C','B','B','C','B','C','B','A','D','C'};

    int correct=0;
    int marks=0;
    int count=sizeof(quiz)/sizeof(quiz[0]);
    char choice='\0';
    printf("Note: For Each Correct Answers Yow will Get => **2 Marks** \n\n");
    printf("Let's Start the Quiz...\n\n");
    for(int i=0;i<count;i++)
    {
        printf("Question %d:\n",i+1);
        printf("%s\n",quiz[i]);
        printf("%s\n",options[i]);
        do
        {
            printf("\nEnter Your Choice: ");
            scanf(" %c",&choice);
            choice = toupper(choice);
        } while (choice != 'A' && choice != 'B' &&
                 choice != 'C' && choice != 'D');

        if(choice == answers[i])
        {
            printf("CORRECT..!\n");
            correct ++;
            marks += 2;
        }
        else
        {
            printf("WRONG..!\n");
            printf("Correct Answer is Option %c...\n",answers[i]);
        }
        printf("---------------------------------------------------------------------------\n");
    }

    printf("=========================\n");
    printf("||      Score Card     ||\n");
    printf("=========================\n");
    printf("| Total Questions: %-3d  |\n",count);
    printf("| Correct: %-3d          |\n",correct);
    printf("| Wrong: %-3d            |\n",(count-correct));
    printf("=========================\n");
    printf("--> Your Marks: %d / %d \n",marks,(count*2));
    printf("--> Percentage: %2.2f \n",((float)marks / (count*2) *100) );
    printf("=========================\n");

    return 0;
}
