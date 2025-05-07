#include <iostream>
using namespace std;

int main()
{
    float note;
    char letter;

    cout<<"enter ur note" <<endl;
    cin>>note;
    
    if (note <= 0 && note>100)
    {cout<<"enter the correct note" <<endl;
    return 1;}
    else{}

    if (note <68)
    {
    letter = 'f';
    cout<<"ur note is F" <<endl;
    }
    else if (note >=69 && note <70)
    {
    letter = 'e';
    cout<<"ur note is E" <<endl;
    }
    else if (note >=70 && note <80){
    letter = 'd';
    cout<<"ur note is D" <<endl;
    }
    else if (note >=80 && note<85){
    letter = 'c';
    cout<<"ur note is C" <<endl;
    }
    else if (note >=85 && note <90){
    letter = 'b';
    cout<<"ur note is B" <<endl;
    }
    else if(note >=90){
    letter = 'a';
    cout<<"ur note is A"<<endl;
    }
    else{}

    switch (letter)
    {
        case 'f':
        cout<<"you have to improve" <<endl;
        break;
        case 'e':
        cout<<"could be better" <<endl;
        break;
        case 'd':
        cout<<"alright"<<endl;
        break;
        case 'c':
        cout<<"keep it up"<<endl;
        break;
        case 'b':
        cout<<"excellent"<<endl;
        break;
        case 'a':
        cout<<"perfect"<<endl;
        break;
        return 0;
    }

    
    



} 
