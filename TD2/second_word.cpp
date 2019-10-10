#include<iostream>
#include <cstdlib>
bool isPunctuation(char character);
bool findSecondWord(std::string input_str, std::string &second);

bool isPunctuation(char character)
{
    if (character == '.') return true;
    if (character == '!' ) return true;
    if (character == '?' ) return true;
    if (character == ',') return true;
    if (character == ';' ) return true;
    if (character == ':' ) return true;
    if (character == ' ' ) return true;
    return false;
}

bool findSecondWord(std::string input_str, std::string &second)
{
    second = "";
    bool snd = false;//tell us of there is a second word
    for (int i=0;i<input_str.length();i++)//we read the string
    {
        if (snd && isPunctuation(input_str[i]) ) return  snd;
        //is we there is a second word and we find a punctiation
        // the word is over so we return
        if (isPunctuation(input_str[i]))
        {
            //if we find a punctiation we increase i until we
            //find a char
            while(isPunctuation(input_str[i]))
            {
                i++;
            }
            snd = true;
        }
        //if we now know there is a second word we
        //start adding the chars
        if(snd)
        {
            second = second + input_str[i];
        }
     }
return snd;
}

bool findSecondWordHamming(std::string &input_str,int &h)
{
    int w = 1;//which word are we on

    for (int i=0;i<input_str.length();i++)//we read the string
    {
        if (w!=2)//if we are not in a second word
        {
            //if we find punct we just skip it
            if (isPunctuation(input_str[i]))
            {
                i++;
                h++;
                if(!isPunctuation(input_str[i])) w++;
                i--;
                //if after increasing we find a char is a new word
            }
            else //if its not punct we are in a word
            {
                char r = ((rand() % (122 - 97)) + 97);
                if (r==input_str[i])
                {
                    h++;
                }
                input_str[i] = r;//radom word
            }
        }
        else
        {
         if(!isPunctuation(input_str[i])) i++;
         if(isPunctuation(input_str[i]))w++;
        }

     }
    if (w<2) return false;
    return true;
}


int main()
{
    std::cout<<"Input a string"<<std::endl;
    std::string input_str;
    std::getline(std::cin,input_str);
    int h =0;
    if (findSecondWordHamming(input_str,h))
    {
        std::cout<< input_str <<" ("<< h <<")"<< std::endl;
    }
    else
    {
       std::cout<<"There is no second word"<<std::endl;
    }

    return 0;
}
