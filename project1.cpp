#include <iostream>
using namespace std;

const double TAX_RATE = 0.15; 
using string = std::string;

int main() {
    string product;
    int p_category;
    int init_p;
    int sold;
    double price_per;

    cout << "Enter the product name: ";
    cin >> product;
    cout << "Enter the product category (1-5): ";
    cin >> p_category;
    cout << "Enter the initial stock quantity: ";
    cin >> init_p;
    cout << "Enter the price per unit: ";
    cin >> price_per;
    cout << "Enter the number of products sold: ";
    cin >> sold;

    if (p_category < 1 || p_category > 5) {
        cout << "Invalid category! Please enter a number between 1 and 5.\n";
        return 1; // Exit with an error code
    }

    cout << "\nCategory: ";
    switch (p_category) {
        case 1: cout << "Electronics"; break;
        case 2: cout << "Groceries"; break;
        case 3: cout << "Clothing"; break;
        case 4: cout << "Stationery"; break;
        case 5: cout << "Miscellaneous"; break;
    }
    double sales = price_per * sold;
    auto copy_totalSales=sales;
    double tax_amount = sales * TAX_RATE;
    double final_amount = sales + tax_amount;
    decltype(init_p) new_inventory = init_p - sold;
    init_p -= sold;
    cout << "\nInventory Status: ";
    cout << (init_p < 10 ? "Low Inventory" : "Sufficient Inventory");

    cout << "\n\n--- Receipt ---\n";
    cout << "Product Name: " << product << endl;
    cout << "Units Sold: " << sold << endl;
    cout << "Price per Unit: $" << price_per << endl;
    cout << "Total Sales: $" << sales << endl;
    cout << "Tax (15%): $" << tax_amount << endl;
    cout << "Final Amount: $" << final_amount << endl;
    cout << "Remaining Stock: " << init_p << " units\n";

    return 0;
}