#include <iostream>

bool isPalindrome(std::string &str);
bool isPalindromeAux(std::string &str, int start, int end);

// is the entire string str a palindrome?
bool isPalindrome(std::string &str)
{
    return isPalindromeAux(str,0,str.length());
}
// is the substring of str between [start, end] a palindrome?
bool isPalindromeAux(std::string &str, int start, int end)
{
    if (start >= end) return true;
    if (str[start]!=str[end-1]) return false;
    start++;
    end--;
    return isPalindromeAux(str,start, end);
}

int main()
{
    std::cout<<"Please enter a word"<<std::endl;
    std::string str;
    std::cin>> str;
    if (isPalindrome(str)){
        std::cout<<"The word is a Palindrome :)"<<std::endl;
    }
    else {
        std::cout<<"The word is not a Palindrome ;("<<std::endl;
    }
    return 0;
}
