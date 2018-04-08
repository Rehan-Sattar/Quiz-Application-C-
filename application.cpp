/*
/////////////QUIZE APPLICATION OF LEARN WITH RS////////////////
Developed by	: Rehan Sattar ( CT-065 ) 
Database 		: Filing and local storage
Language	 	: C++ language
Time 			: 4 hourse of continues coding

*/
#include<iostream>
#include<string.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

///////////////////////////// Main Class of QUIZE /////////////////////////

class Quiz
{
    private:
        int htmlcounter,pythoncounter,jscounter,csscounter,clCounter,r,w;
        char name[20],Email[20];

    public:
        Quiz(char n[], char e[])
        {
            strcpy(name,n);
            strcpy(Email,e);
            htmlcounter     = 0;
            pythoncounter   = 0;
            csscounter      = 0;
            clCounter       = 0;
            jscounter       = 0;
            r=0,w=0;

            ofstream fout("Accounts.txt", ios::app);
            fout<<name<<endl;
            fout<<Email<<endl<<endl;
            fout.close();

        }
        
/////////////// Function Declaration /////////////////// 
        void html();
        void css();
        void javascrip();
        void python();
        void c_language();
        void showResult(int );

////////////// Report Card Generater //////////////////
        void showReport(int res, int right_, int wrong_ ) {
        system("cls");
        cout<<"\t\t\t=========================\n\t\t\t\tRESULT\n\t\t\t=========================";
        cout<<"\n\n\n\t\t\tNAME: "<<name<<"\n\t\t\tEMAIL: "<<Email<<"\n\n\t\t\tRESULT: \n\n";
        cout<<"\t\t\tTOTAL MARKS: 15\n\t\t\tRight Answers: "<<right_<<"\n\t\t\tWrong Answers: "<<wrong_;
        cout<<"\n\t\t\tOBTAINED MARKS: "<<res;

        int avg = (res*100)/15;
        if ( avg >= 50 && avg < 60) {
            cout<<"\n\n\t\t\tGrade: PASSED"<<endl;
            cout<<"\n\t\t\tPercentage: "<<avg;
        }else if ( avg >= 60 && avg < 70) {
            cout<<"\n\n\t\t\tGrade: B"<<endl;
            cout<<"\n\t\t\tPercentage: "<<avg;
        }else if ( avg >= 70 && avg < 80) {
            cout<<"\n\n\t\t\tGrade: A"<<endl;
            cout<<"\n\t\t\tPercentage: "<<avg;
        }if ( avg >= 80) {
            cout<<"\n\n\t\t\tGrade: A+"<<endl;
            cout<<"\n\t\t\tPercentage: "<<avg;
        }else
            cout<<"\n\nFAILED!!!";

        ofstream fout("results.txt" , ios::app);
        fout<<name<<endl<<Email<<"\nRight answer: "<<r<<"\nWrong answer: "<<w<<"\nAverage: "<<avg<<"\nMarks: "<<res<<endl<<endl;
        fout.close();
        }
}; //END of Classs Quize{ } 

////////////////////// Definition of Function() Started /////////////////////////

///////////////////////////////// HTML Started /////////////////////////////////

void Quiz::html()
{
int op[5];
char ch;
system("cls");
cout<<"\n\n\n\n\n\t\t\t\t\t=============================\n\t\t\t\t\t\tHTML5 QUIZ \n\t\t\t\t\t=============================";
cout<<"\n\n\t\t\t\t\t*RULES\n\n\t\t\t\t\t--> Quiz contain 5 question(Demo).\n\t\t\t\t\t--> Each question carry 3 marks.\n\n\t\t\t\t\t* START (Y/N):  ";
cin>>ch;
if ( ch == 'Y' || ch == 'y')
{
system("cls");
cout<<"1.What does HTML stand for?\n\n1-Hyperlinks and Text Markup Language\n2-Hyper Text Markup Language\n3-Home Tool Markup Language\n\n";
cout<<"ANSWER HERE : ";
fflush(stdin);
cin>>op[0];
if (op[0] == 2)
{
    htmlcounter= htmlcounter+3;
    r++;
}else
    w++;

system("cls");
cout<<"2.Which of the following browser supports HTML5 in its latest version?\n\n";
cout<<"1-Apple safari\n2-Google chrome\n3-Both\n4-None of above\n\n";
cout<<"ANSWER HERE : ";
fflush(stdin);
cin>>op[1];
if (op[1] == 3)
{
    htmlcounter= htmlcounter+3;
    r++;
}else
    w++;


system("cls");
cout<<"3. Choose the correct HTML element for the largest heading:\n1-<h1> \n2-<h6>\n3-<heading>\n4-<head>\n\n";
cout<<"ANSWER HERE : ";
fflush(stdin);
cin>>op[2];
 if (op[2] == 1)
{
    htmlcounter= htmlcounter+3;
    r++;
}else
    w++;

system("cls");
cout<<"4. What is the correct HTML element for inserting a line break?\n\n1-<lb>\n2-<break>\n3-<br>";
cin>>op[3];
cout<<"ANSWER HERE : ";
fflush(stdin);
if (op[3] == 3)
{
    htmlcounter= htmlcounter+3;
    r++;
}else
    w++;


system("cls");
cout<<"5.Choose the correct HTML element to define important text\n\n1-<b>\n2-<important>\n3-<strong>\n4-<i>\n";
cout<<"ANSWER HERE : ";
fflush(stdin);
cin>>op[4];
if (op[4] == 3)
{
    htmlcounter= htmlcounter+3;
    r++;
}else
    w++;

}
showReport(htmlcounter,r,w);
}


///////////////// CSS QUIZE STARTED ///////////////////////////

void Quiz::css()
{
int op[5];
char ch;
system("cls");
cout<<"\n\n\n\n\n\t\t\t\t\t=============================\n\t\t\t\t\t\tCSS QUIZ \n\t\t\t\t\t==================================";
cout<<"\n\n\t\t\t\t\t*RULES\n\n\t\t\t\t\t--> Quiz contain 5 question(Demo).\n\t\t\t\t\t--> Each question carry 3 marks.\n\n\t\t\t\t\t* START (Y/N):  ";
cin>>ch;
if ( ch == 'Y' || ch == 'y')
{
system("cls");
cout<<"1.CSS stands for? \n\n1-Cascading style Sheet\n2-Cast styling sheet\n3-Cyber security sheet\n\n";
cout<<"ANSWER HERE: ";
cin>>op[0];
if ( op[0] == 1)
{
    csscounter = csscounter+3;
    r++;
}
else
    w++;

system("cls");
cout<<"2.Which of the following is a component of CSS style rule?\n\n";
cout<<"\n1 - Selector\n2 - Property\n3 - Value\n4 - All of the above.\n\n";
cout<<"ANSWER HERE: ";
fflush(stdin);
cin>>op[1];
if ( op[1] == 4)
{
    csscounter = csscounter+3;
    r++;
}
else
    w++;

system("cls");
cout<<"3.Which of the following property of a anchor element signifies an element on which the user is currently clicking?\n\n";
cout<<"1 - :link\n2 - :visited\n3 - :hover\n4 - :active\n\n";
fflush(stdin);
cout<<"ANSWER HERE: ";
cin>>op[2];
if ( op[2] == 4)
{
    csscounter = csscounter+3;
    r++;
}
else
    w++;

system("cls");
cout<<"4. Which of the following property is used to set the color of a text?\n\n";
cout<<"1 - color\n2 - direction\n3 - letter-spacing\n4 - word-spacing\n\n";
fflush(stdin);
cout<<"ANSWER HERE: ";
cin>>op[3];
if ( op[3] == 1 )
{
    csscounter = csscounter+3;
    r++;
}
else
    w++;


system("cls");
cout<<"Which of the following property specifies the left padding of an element?\n\n";
cout<<"1 - padding-bottom\n2 - padding-top\n3 - padding-left\n4- padding-right\n\n";
cout<<"ANSWER HERE: ";
fflush(stdin);
cin>>op[4];
if ( op[4] == 3)
{
    csscounter = csscounter+3;
    r++;
}
else
    w++;
}
showReport(csscounter,r,w);
}



////////////////// JAVA SCRIPT STARTED /////////////////////////////////

void Quiz::javascrip()
{
int op[5];
char ch;
system("cls");
cout<<"\n\n\n\n\n\t\t\t\t\t=============================\n\t\t\t\t\t\tJAVASCRIPT QUIZ \n\t\t\t\t\t=============================";
cout<<"\n\n\t\t\t\t\t*RULES\n\n\t\t\t\t\t--> Quiz contain 5 question(Demo).\n\t\t\t\t\t--> Each question carry 3 marks.\n\n\t\t\t\t\t* START (Y/N):  ";
cin>>ch;
if ( ch == 'Y' || ch == 'y')
{
system("cls");

cout<<"1.Can you assign a anonymous function to a variable?";
cout<<"\n\n1-True\n2-False\n\n";
cout<<"ANSWER HERE: ";
fflush(stdin);
cin>>op[0];

if( op [0] == 1)
{
    jscounter = jscounter+3;
    r++;
}
else
    w++;

system("cls");

cout<<"2.Which built-in method adds one or more elements to the end of an array and returns the new length of the array?\n\n";
cout<<"1 - last()\n2 - put()\n3 - push()\n4 - None of the above.\n\n";
cout<<"ANSWER HERE: ";
fflush(stdin);
cin>>op[1];

if( op [1] == 3)
{
    jscounter = jscounter+3;
    r++;
}
else
    w++;

system("cls");
cout<<"3.Which of the following function of Number object returns a string value version of the current number?\n\n";
cout<<"1 - toString()\n2 - toFixed()\n3 - toLocaleString()\n4 - toPrecision()";
cout<<"ANSWER HERE: ";
fflush(stdin);
cin>>op[2];

if( op [2] == 1)
{
    jscounter = jscounter+3;
    r++;
}
else
    w++;



system("cls");

cout<<"4.Which of the following function of Array object adds one or more elements to the end of an array and returns the new length of the array?\n\n";
cout<<"1 - pop()\n2 - push()\n3 - join()\n4 - map()\n\n";
fflush(stdin);
cout<<"ANSWER HERE: ";
cin>>op[3];

if( op [3] == 2)
{
    jscounter = jscounter+3;
    r++;
}
else
    w++;


system("cls");
cout<<"5.Which built-in method sorts the elements of an array?\n\n";
cout<<"1 - changeOrder(order)\n2 - order()\n3 - sort()\n4 - None of the above.\n\n";
cout<<"ANSWER HERE: ";
cin>>op[4];

if( op [4] == 3)
{
    jscounter = jscounter+3;
    r++;
}
else
    w++;

}

showReport(jscounter,r,w);
}


/////////////////// PYTHON STARTED /////////////////////////

void Quiz::python()
{
int op[5];
char ch;
system("cls");
cout<<"\n\n\n\n\n\t\t\t\t\t=============================\n\t\t\t\t\tPYTHON QUIZ \n\t\t\t\t\t==================================";
cout<<"\n\n\t\t\t\t\t*RULES\n\n\t\t\t\t\t--> Quiz contain 5 question(Demo).\n\t\t\t\t\t--> Each question carry 3 marks.\n\n\t\t\t\t\t* START (Y/N):  ";
cin>>ch ;
if ( ch == 'Y' || ch == 'y')
{
system("cls");
cout<<"1-Which of the following statements is true?\n\n";
cout<<"1-Python is a high level programming language.\n2-Python is an interpreted language.\n";
cout<<"3-Python is an object-oriented language.\n4-All of the above.\n\n";
cout<<"Answer: ";
fflush(stdin);
cin>>op[0];
if ( op[0] == 4)
{
    pythoncounter=pythoncounter+3;
    r++;
}
else
    w++;
system("cls");
cout<<"2-What is used to define a block of code (body of loop, function etc.) in Python?\n\n";
cout<<"1-Curly brackets\n2-Parenthesis\n3-Indentation\n4-Quotation\n\n";
cout<<"Answer: ";
fflush(stdin);
cin>>op[1];
if ( op[1] == 3)
{
    pythoncounter=pythoncounter+3;
    r++;
}
else
    w++;
system("cls");
cout<<"3-Which of the following is correct?\n\n";
cout<<"1-Comments are for programmers for better understanding of the program.\n";
cout<<"2-Python Interpreter ignores comment.\n";
cout<<"3-You can write multi-line comments in Python using triple quotes, either ''' or ""\" "<<endl;
cout<<"4-All of the above\n\n";
cout<<"Answer: ";
fflush(stdin);
cin>>op[2];
if ( op[2] == 4)
{
    pythoncounter=pythoncounter+3;
    r++;
}
else
    w++;
system("cls");
cout<<"4-Which of the following is correct?\n\n";
cout<<"1-Variable name can start with an underscore.\n";
cout<<"2-Variable name can start with a digit.\n";
cout<<"3-Keywords cannot be used as a variable name.\n";
cout<<"4-Variable name can have symbols like: @, #, $ etc.\n\n";
cout<<"Answer: ";
fflush(stdin);
cin>>op[3];
if ( op[3] == 3)
{
    pythoncounter=pythoncounter+3;
    r++;
}
else
    w++;
system("cls");
cout<<"5-In the following code, n is a/an _______? \n n == '5'\n";
cout<<"1-integer\n2-String\n3-tuple\n4-operator\n\n";
cout<<"Answer: ";
fflush(stdin);
cin>>op[4];
if ( op[4] == 2)
{
    pythoncounter=pythoncounter+3;
    r++;
}
else
    w++;
}
showReport(pythoncounter,r,w);
}

/////////////////////////// C-Language Started /////////////////////////

void Quiz::c_language()
{
int op[5];
char ch;
system("cls");
cout<<"\n\n\n\n\n\t\t\t\t\t=============================\n\t\t\t\t\t\tC LANGUAGE QUIZ \n\t\t\t\t\t=============================";
cout<<"\n\n\t\t\t\t\t*RULES\n\n\t\t\t\t\t--> Quiz contain 5 question(Demo).\n\t\t\t\t\t--> Each question carry 3 marks.\n\n\t\t\t\t\t* START (Y/N):  ";
cin>>ch ;
if ( ch == 'Y' || ch == 'y')
{


system("cls");
cout<<"For the below definition what is the data type of 'PI'?\n\n";
cout<<"1 - Its float\n";
cout<<"2 - Double\n";
cout<<"3 - There is no type associated with PI, as it's just a text substitution\n";
cout<<"4 - Syntax error, semi colon is missing with the definition of PI\n";
cout<<"ANSWER: ";
cin>>op[0];
if( op[0] == 3)
{
    clCounter = clCounter+3;
    r++;
}
else
    w++;

system("cls");
cout<<"2.What is the output of the following program?\n\n";
cout<<"#include<stdio.h>\nmain()\n\n{\n\tint i = 1;\n\n\twhile( i++ <= 5) \n\t { printf(\"\"%d\",i++); }  \n}";
cout<<"1 - 2 3 5 \n2 - 2 4\n3 - 2 4 6\n4 - 2\n\n";
cout<<"ANSWER: ";
cin>>op[1];
if( op[1] == 3)
{
    clCounter = clCounter+3;
    r++;
}
else
    w++;



system("cls");
cout<<"What is the only function all C programs must contain?\n\n";
cout<<"1 - start()\n2 - system() \n3 - main() \n4 - program()\n\n";
cout<<"ANSWER: ";
fflush(stdin);
cin>>op[2];
if( op[2] == 3)
{
    clCounter = clCounter+3;
    r++;
}
else
    w++;



system("cls");
cout<<" Which of the following is a correct comment?\n\n";
cout<<"1- */ Comments */\n2 - **comments**\n3 - /*comments*\n4 - #comment\n\n";
cout<<"ANSWER: ";
fflush(stdin);
cin>>op[3];
if( op[3] == 3)
{
    clCounter = clCounter+3;
    r++;
}
else
    w++;



system("cls");
cout<<" Which of the following is not a correct variable type?\n\n";
cout<<"1 - float\n2 - real\n3 - int\n4 - double\n\n";
cout<<"ANSWER: ";
fflush(stdin);
cin>>op[4];
if( op[4] == 2)
{
    clCounter = clCounter+3;
    r++;
}
else
    w++;

}
showReport(clCounter,r,w);
}


///////////////////////// main() funciton and user inter face of application ////////////////////

int main()
{

    system("COLOR B");
    int op;

    char Name[50],Email[50];

    cout<<"\t\t\t=============================================\n";
    cout<<"\t\t\t\t\tQuiz sing in \n\t\t\t=============================================";
    cout<<"\n\n\t\t\t\t--> Enter your name: " ;  cin.getline(Name,50);
    cout<<"\n\n\t\t\t\t--> Enter your Email: " ;  cin.getline(Email,50);
    if( strcmp(Name,"rehan") == 0 && strcmp(Email,"1234") ==0 )
    {
        system("cls");
        cout<<"ADMIN AREA\n\n";
        cout<<"RECORD HISTORY : \n\n";
        char ch;
        ifstream fin("Accounts.txt");
        ch = fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch=fin.get();
        }

        fin.close();

        getch();
        main();
    }
     Quiz q(Name,Email);
while(1)
{

    system("cls");
    cout<<"\t\t\t======================================\n\t\t\t\tWELCOM TO LEARN WITH RS\n\t\t\t======================================";
    cout<<"\n\n\t\t\t1-HTML Quiz\n\n\t\t\t2-CSS3 Quiz\n\n\t\t\t3-JavaScript Quiz\n\n\t\t\t4-Python Quiz\n\n\t\t\t5-C language Quiz\n\n\t\t\t6-Exit\n\n\t\t\tyour option here: ";
    fflush(stdin);
    cin>>op;

    switch(op)
    {

    case 1:
        q.html();
        getch();
        break;
    case 2:
        q.css();
        getch();
        break;
    case 3:
        q.javascrip();
        getch();
        break;
    case 4:
        q.python();
        getch();
        break;
    case 5:
        q.c_language();
        getch();
        break;
    case 6:
        exit(0);
    }
}

}

/////////////////////////// The end :D ////////////////////////////
