#include <iostream>
using namespace std;

struct CarSales
{
    char Brand[30];
    int Price;
    int Age;
    int Profit;
};

void SalesData(CarSales); // Function declaration

int main()
{
    CarSales CarSalesData;

    cout << "Brand: ";
    cin.get(CarSalesData.Brand,30);

    cout << "Price: ";
    cin >> CarSalesData.Price;

    cout << "Age: ";
    cin >> CarSalesData.Age;

    cout << "Profit: ";
    cin >> CarSalesData.Profit;

    //Function call with structure variable as an argument
    SalesData(CarSalesData);

    return 0;
}

void SalesData(CarSales Data)
{
    cout << "\nDisplaying Information." << endl;
    cout << "Brand: " << Data.Brand << endl;
    cout << "Price: " << Data.Price << endl;
    cout << "Age: " << Data.Age << endl;
    cout << "Profit: " << Data.Profit << endl;
}


