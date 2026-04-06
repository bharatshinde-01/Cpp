#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>   // ye rehne do

void main(int argc, char *argv[])
{
    clrscr();

    if(argc < 2) {
        cout << "Please provide numbers as arguments.";
        getch();
        return;
    }

    ofstream f1("Positive.txt");
    ofstream f2("Negative.txt");

    int num;

    for(int i = 1; i < argc; i++)
    {
        num = atoi(argv[i]);   // yaha error aata hai normally

        if(num >= 0)
            f1 << num << " ";
        else
            f2 << num << " ";
    }

    f1.close();
    f2.close();

    cout << "Data written successfully!";
    getch();
}

creat files txt 
posit
neg