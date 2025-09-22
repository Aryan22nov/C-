#include <iostream>
using namespace std;

int main() {
    // Question: Calculate Profit or Loss on selling 25 bananas
    double costPricePerDozen, sellingPricePerDozen;
    double costPrice25, sellingPrice25, profitOrLoss;

    // Input cost price and selling price per dozen
    cout << "Enter cost price per dozen bananas: ";
    cin >> costPricePerDozen;

    cout << "Enter selling price per dozen bananas: ";
    cin >> sellingPricePerDozen;

    // Calculate cost price and selling price for 25 bananas
    costPrice25 = (costPricePerDozen / 12) * 25;
    sellingPrice25 = (sellingPricePerDozen / 12) * 25;

    // Calculate profit or loss
    profitOrLoss = sellingPrice25 - costPrice25;

    // Output the result
    if (profitOrLoss > 0)
        cout << "Profit earned: " << profitOrLoss << endl;
    else if (profitOrLoss < 0)
        cout << "Loss incurred: " << -profitOrLoss << endl;
    else
        cout << "No profit, no loss." << endl;

    return 0;
}
