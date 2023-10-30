#include <iostream>

void printMenu()
{
    // 1 print help
    std::cout << "1. Print help " << std::endl;
    // 2 print exchange stats
    std::cout << "2. Print Exchange Stats " << std::endl;
    // 3 make an offer
    std::cout << "3. Make an offer " << std::endl;
    // 4 make a bid
    std::cout << "4. Make a bid " << std::endl;
    // 5 print wallet
    std::cout << "5. Print Wallet " << std::endl;
    // 6 continue
    std::cout << "6. Continue " << std::endl;

    std::cout << "=================" << std::endl;
}

int getUserOption()
{
    int userOption;
    std::cout << "Type in 1-6 " << std::endl;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

void processUserOption(int userOption)
{
    if (userOption == 0) // bad input
    {
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    }
    if (userOption == 1) // help
    {
        std::cout << "Help - your aim is to make money. Analyse the markets and make bids and offers." << std::endl;
    }
    if (userOption == 2) // Print Exchange Stats
    {
        std::cout << "Market looks good." << std::endl;
    }
    if (userOption == 3) // Make an offer.
    {
        std::cout << "Make an offer - Enter the amount" << std::endl;
    }
    if (userOption == 4) // Make a bid.
    {
        std::cout << "Make a bid - Enter the amount" << std::endl;
    }
    if (userOption == 5) // Print Wallet
    {
        std::cout << "Your wallet is empty" << std::endl;
    }
    if (userOption == 6) // Continue
    {
        std::cout << "Going to next timeframe" << std::endl;
    }
}

int main()
{
    while (true)
    {
        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
    }

    return 0;
}