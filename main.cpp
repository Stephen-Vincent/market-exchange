#include <iostream>
#include <string>
#include <vector>

enum class OrderBookType
{
    bid,
    ask
};

class OrderBookEntry
{
public:
    OrderBookEntry(double _price,
                   double _amount,
                   std::string _timestamp,
                   std::string _product,
                   OrderBookType _orderType)
        : price(_price),
          amount(_amount),
          timestamp(_timestamp),
          product(_product),
          orderType(_orderType)

    {
    }

    double price;
    double amount;
    std::string timestamp;
    std::string product;
    OrderBookType orderType;
};

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

void printHelp()
{
    std::cout << "Help - your aim is to make money. Analyse the markets and make bids and offers." << std::endl;
}

void printMarketStats()
{
    std::cout << "Market looks good." << std::endl;
}

void enterAsk()
{
    std::cout << "Make an offer - Enter the amount" << std::endl;
}

void enterBid()
{
    std::cout << "Make a bid - Enter the amount" << std::endl;
}

void printWallet()
{
    std::cout << "Your wallet is empty" << std::endl;
}

void gotoNextTimeframe()
{
    std::cout << "Going to next timeframe" << std::endl;
}

void processUserOption(int userOption)
{
    if (userOption == 0) // bad input
    {
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    }
    if (userOption == 1) // help
    {
        printHelp();
    }
    if (userOption == 2) // Print Exchange Stats
    {
        printMarketStats();
    }
    if (userOption == 3) // Make an offer.
    {
        enterAsk();
    }
    if (userOption == 4) // Make a bid.
    {
        enterBid();
    }
    if (userOption == 5) // Print Wallet
    {
        printWallet();
    }
    if (userOption == 6) // Continue
    {
        gotoNextTimeframe();
    }
}

int main()
{
    // while (true)
    // {
    //     printMenu();
    //     int userOption = getUserOption();
    //     processUserOption(userOption);
    // }

    // std::vector<double> prices;
    // std::vector<double> amounts;
    // std::vector<std::string> products;
    // std::vector<std::string> timestamps;
    // std::vector<OrderBookType> orderTypes;

    // prices.push_back(0.021873);
    // amounts.push_back(1);
    // products.push_back("ETH/BTC");
    // timestamps.push_back("2020/03/17 17:01:24.884492");
    // orderTypes.push_back(OrderBookType::bid);

    // std::cout << "prices: " << prices[0] << std::endl;
    // std::cout << "amounts: " << amounts[0] << std::endl;
    // std::cout << "products: " << products[0] << std::endl;
    // std::cout << "timestamps: " << timestamps[0] << std::endl;
    // std::cout << "orderTypes: " << orderTypes[0] << std::endl;

    // return 0;

    OrderBookEntry order1{1000,
                          1,
                          "2020/03/17 17:01:24.884492",
                          "ETH/BTC",
                          OrderBookType::bid};

    std::cout << "The price is " << order1.price << std::endl;
}
