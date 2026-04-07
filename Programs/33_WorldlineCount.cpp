#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>

void main()
{
    ifstream fin("data.txt");   // file open

    char ch;
    int chars=0, words=0, lines=0, spaces=0;

    char word[20], temp[20];
    int i=0, count=0;

    cout<<"Enter word to search: ";
    cin>>word;

    while(fin.get(ch))   // read char by char
    {
        chars++;

        if(ch==' ')
            spaces++;

        if(ch=='\n')
            lines++;

        if(ch==' ' || ch=='\n')
            words++;

        // word check
        if(ch!=' ' && ch!='\n')
        {
            temp[i++] = ch;
        }
        else
        {
            temp[i] = '\0';
            if(strcmp(temp,word)==0)
                count++;
            i=0;
        }
    }

    cout<<"\nCharacters = "<<chars;
    cout<<"\nWords = "<<words;
    cout<<"\nLines = "<<lines;
    cout<<"\nSpaces = "<<spaces;
    cout<<"\nOccurrences of word = "<<count;

    fin.close();

    getch();
}