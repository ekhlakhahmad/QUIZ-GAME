#include<iostream>
using namespace std;
 int main(){
    int finalResult = 0;
    char playAgian;
    int playQuiz(void);
    play:
    finalResult = playQuiz();
    cout<<"Your score is "<<finalResult<<endl;

    if(finalResult >= 10){
        cout<<"You are Pass"<<endl<<endl;
    }
    else{
        cout<<"You are Fail"<<endl<<endl;
    }
    cout<<"Do you want to PlayAgain Quiz y or n "<<endl;
    cin>>playAgian;
    if(playAgian == 'y' || playAgian == 'Y'){
        goto play;
    }
    else{
        cout<<"***********************************"<<endl;
        cout<<"* ! Thank You For Play the Quiz ! *"<<endl;
        cout<<"***********************************"<<endl;
    }

}

int playQuiz(){
    char c;
    char option;
    string name;
    int score = 0;
    playInsideFunction:

    cout<<" \t\t *********************************************"<<endl;
    cout<<" \t\t ****\t Developed By : EKHLAKH AHMAD \t  ****"<<endl;
    cout<<" \t\t *********************************************"<<endl<<endl;
    cout<<"\t\t\t";

    cout<<"Please Enter your Name : ";
    cin>>name;
    cout<<"\n \t \t \t W E L C O M E "<<name<<endl<<endl;

    cout<<"  =====================================================================  "<<endl;
    cout<<" || ________                      QUIZ GAME                   ________ || "<<endl<<endl;
    cout<<" || __________          PLEASE FOLLOW TO INSTRUCTION        __________ || "<<endl<<endl;
    cout<<" || ____________       TOTAL TWENTY (20) MCQ QUESTION     ____________ || "<<endl<<endl;
    cout<<" || ______________         EACH QUESTION 1 MARKS        ______________ || "<<endl<<endl;
    cout<<" || ________________          NO NEGATIVE MARK        ________________ || "<<endl<<endl;
    cout<<" || __________________                              __________________ || "<<endl;
    cout<<"  ===================================================================== "<<endl<<endl;
    cout<<" ***************** PRESS S TO START THE QUIZ GAME  ******************   "<<endl<<endl;

    cin>>c;
    if(c == 's' || c == 'S'){
        cout<<"Q1. Who is known as the father of Computer"<<endl;
        cout<<"(a) Dennis Ritchie \t (b) Bill Gates \t (c) Charles Babbage \t (d) Chennai \t"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;
        
        if(option == 'c' || option == 'C'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q2. What is the brain of a Computer system called"<<endl;
        cout<<"(a) RAM \t (b) CPU \t (c) GPU \t (d) None \t"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'b' || option == 'B'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q3. What is known as temporary memory or volatile memory?"<<endl;
        cout<<"(a) SSD \t (b) HDD \t (c) RAM \t (d) ROM \t"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'c' || option == 'C'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q4. Which of the following is the smallest unit of memory?"<<endl;
        cout<<"(a) Byte \t (b) Bit \t (c) Nibble \t (d) KB \t"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'b' || option == 'B'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q5. Which of the following in not an input device"<<endl;
        cout<<"(a) Microphone \t (b) Mouse \t (c) Keyboard \t (d) Speakers"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'd' || option == 'D'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q6. Which of the following in not an output device"<<endl;
        cout<<"(a) Speakers \t (b) Monitor \t (c) Printer \t (d) Scanner"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'd' || option == 'D'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q7. A megabyte, also known as a MB, contains:"<<endl;
        cout<<"(a) 1024 Kilobytes \t (b) 1000 kilobytes \t (c) 1024 bytes \t (d) 512 bytes"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'a' || option == 'A'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q8. The main system board of the computer is called "<<endl;
        cout<<"(a) Processor \t (b) Motherboard \t (c) Microchip \t (d) None of these"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'b' || option == 'B'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q9. MS-Word is an example of ________________"<<endl;
        cout<<"(a) An operating System \t (b) A processing device \t (c) Application software \t (d) An input device"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'c' || option == 'C'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q10. Shortcut key of print the page ____________"<<endl;
        cout<<"(a) CTRL + P \t (b) CTRL + R \t (c) CTRL + S \t (d) ALT + P"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'a' || option == 'A'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q11. C++ uses which approach? "<<endl;
        cout<<"(a) right-left \t (b) top-down \t (c) left-right \t (d) buttom-up"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'd' || option == 'D'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q12. Which of the following data type is supported in C++ but not in C"<<endl;
        cout<<"(a) int \t (b) bool \t (c) double \t (d) flaot"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'b' || option == 'B'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q13. Identify the correct syntax for declaring arrays in C++"<<endl;
        cout<<"(a) array arr[10] \t (b) array {10} \t (c) int arr[10] \t (d) int arr"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'c' || option == 'C'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q14. Which of the following is 'address of operator' "<<endl;
        cout<<"(a) * \t (b) & \t (c) [] \t (d) &&"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'b' || option == 'B'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q15. Identify the scope resolution operator."<<endl;
        cout<<"(a) : \t (b) :: \t (c) ? \t (d) ->"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'b' || option == 'B'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q16. Choose the correct default return value of function"<<endl;
        cout<<"(a) int \t (b) void \t (c) char \t (d) float"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'a' || option == 'A'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q17. Identify the logical AND operator "<<endl;
        cout<<"(a) || \t (b) && \t (c) & \t (d) !"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'b' || option == 'B'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q18. Choose the correct subcript operator"<<endl;
        cout<<"(a) [] \t (b) {} \t (c) * \t (d) ()"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'a' || option == 'A'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q19. How much bytes of memory does void occupy?"<<endl;
        cout<<"(a) 1 \t (b) 2 \t (c) 0 \t (d) 4"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'c' || option == 'C'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

        cout<<"Q20. Which of the following is not a type of inheritance?"<<endl;
        cout<<"(a) Multiple \t (b) Multilevel \t (c) Heirarchical \t (d) Distributed"<<endl;
        cout<<"Enter your select Answer : ";
        cin>>option;
        cout<<endl;

        if(option == 'd' || option == 'D'){
            score = score + 1;
        }
        else{
            score = score + 0;
        }

    }
    else{
        cout<<"You have entered wrong value, please enter correct option 'S' "<<endl;
        goto playInsideFunction;
    }

    return score;
}