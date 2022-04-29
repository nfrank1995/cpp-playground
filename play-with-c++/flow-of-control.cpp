#include <iostream>
#include <string>

void playingWithWhile()
{
    // int sum = 0, val = 50;

    // while(val <= 100)
    // {
    //     sum += val;
    //     ++val;
    // }

    // std::cout << "Sum of 50 to 100 inclusive is "
    //     << sum << std::endl;

    int sum = 0, from = 0, to = 0;

    std::cout << "Print the numbers from:" << std::endl;
    std::cin >> from;
    std::cout << "to:" << std::endl;
    std::cin >> to;


    std::cout << "The numbers from " << from << " to " << to << " are:" << std::endl;

    while(from <= to)
    {
        std::cout << from << std::endl;
        ++from;
    }

    std::cout << std::endl;


    // int val = 10;
    // std::cout << "The numbers from 10 to 1:" << std::endl;

    // while(val >= 0)
    // {
    //     std::cout << val << ", ";
    //     --val;
    // }


    // std::cout << std::endl;
}


void playingWithFor()
{
    // int sum = 0;
    // for (int i = -100; i <= 100; ++i)
    // {
    //     sum += i;
    // }

    // std::cout << "Sum from -100 to 100: " << sum << std::endl;

     int sum = 0;

    for(int i = 50; i <= 100; ++i)
        sum += i;
    

    std::cout << "Sum of 50 to 100 inclusive is "
        << sum << std::endl;
    
}


void unknownNumberOfInputs()
{
    std::cout << "Enter numbers to be added:" << std::endl;
    int val = 0, sum = 0;

    // while breaks when the istream will be invalid (error occurs or eof is received)
    while(std::cin >> val)
        sum += val;
    
    std::cout << "Sum of entered numbers: " << sum << std::endl;
}


void playingWithIf()
{
    int currVal = 0, val = 0;
    if(std::cin >> currVal)
    {
        int cnt = 1;

        while(std::cin >> val)
        {
            if (val == currVal)
                ++cnt;
            else
            {
                std::cout << currVal << " occurs "
                    << cnt << " times." << std::endl;
                    currVal = val;
                    cnt = 1;
            }
        }

        std::cout << currVal << " occurs "
            << cnt << " times." << std::endl;
    }
}

void printBanner(std::string title){

    std::cout 
    << "//////////////////////////////////////////////////////////////" 
    << std::endl
    << title
    << std::endl
    << "//////////////////////////////////////////////////////////////" 
    << std::endl;
}

int main()
{
    printBanner("START");

    // playingWithWhile();
    // playingWithFor();
    // unknownNumberOfInputs();
    playingWithIf();

    printBanner("END");
    return 0;
}

