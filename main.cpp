#include <iostream>
#include <string>


namespace Custom
{
struct Char
{
    char character;

    // If you do not want to implicitly convert, use this
    char repr()
    {
        return this->character;
    }
    // implicitly converts to char
    operator char () const
    {
        return this->character;
    }
    //constructor
    Char(char character)
    {
        this->character = character;
    }
};
}

using namespace Custom;

// all english lowercase letters
const Char a = 'a';
const Char b = 'b';
const Char c = 'c';
const Char d = 'd';
const Char e = 'e';
const Char f = 'f';
const Char g = 'g';
const Char h = 'h';
const Char i = 'i';
const Char j = 'j';
const Char k = 'k';
const Char l = 'l';
const Char m = 'm';
const Char n = 'n';
const Char o = 'o';
const Char p = 'p';
const Char q = 'q';
const Char r = 'r';
const Char s = 's';
const Char t = 't';
const Char u = 'u';
const Char v = 'v';
const Char w = 'w';
const Char x = 'x';
const Char y = 'y';
const Char z = 'z';

// all english uppercase letters
const Char A = 'A';
const Char B = 'B';
const Char C = 'C';
const Char D = 'D';
const Char E = 'E';
const Char F = 'F';
const Char G = 'G';
const Char H = 'H';
const Char I = 'I';
const Char J = 'J';
const Char K = 'K';
const Char L = 'L';
const Char M = 'M';
const Char N = 'N';
const Char O = 'O';
const Char P = 'P';
const Char Q = 'Q';
const Char R = 'R';
const Char S = 'S';
const Char T = 'T';
const Char U = 'U';
const Char V = 'V';
const Char W = 'W';
const Char X = 'X';
const Char Y = 'Y';
const Char Z = 'Z';


// all numbers
const Char one = '1';
const Char two = '2';
const Char three = '3';
const Char four = '4';
const Char five = '5';
const Char six = '6';
const Char seven = '7';
const Char eight = '8';
const Char nine = '9';
const Char zero = '0';

// spacing
const Char space = ' ';
const Char endline = '\n';


class longHelloWorld
{
private:
    int nums[12] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    Char letters[12] = {H, e, l, l, o, space, W, o, r, l, d, endline};

    // sorts nums[] by using a bubble sort
    void sort()
    {
        int temp;
        int index = 0;
        int pos = 0;
        int num;

        for (num=0; num<=12; num++)
        {
            pos += 1;
            index = pos;
            while (index > 0)
            {
                if (this->nums[index] < this->nums[index-1])
                {
                    temp = this->nums[index];
                    this->nums[index] = this->nums[index-1];
                    this->nums[index-1] = temp;
                }
                index -= 1;
            }
        }
    }

public:
    void print()
    {
        sort();
        for (int i : this->nums)
        {
            std::cout << this->letters[i];
        }
    }
};


int main()
{
    longHelloWorld test;
    test.print();
    //std::cout << H << e << l << l << o << space << W << o << r << l << d << '\n';
    return 0;
}
