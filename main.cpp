#include <iostream>
#include "Order.h"

using namespace std;

int main()
{
    Order myOrder;

    // Get user input for the order details
    cout << "Enter Order ID: ";
    cin >> myOrder.id;

    cout << "Enter Total Sale Price: ";
    cin >> myOrder.total_sale_price;

    cout << "Enter Total Cost Price: ";
    cin >> myOrder.total_cost_price;

    cin.ignore(); // Clear the input buffer

    cout << "Enter Customer Username: ";
    getline(cin, myOrder.customer_username);

    cout << "Enter Customer Address: ";
    getline(cin, myOrder.customer_address);

    cout << "Enter Customer Phone: ";
    getline(cin, myOrder.customer_phone);

    cout << "Enter Customer Email: ";
    getline(cin, myOrder.customer_email);

    cout << "Enter Order Status: ";
    getline(cin, myOrder.order_status);

    cout << "Enter Order Type: ";
    getline(cin, myOrder.order_type);

    cout << "Enter Order Date: ";
    getline(cin, myOrder.order_date);

    // Add items to the order
    cout << "Enter item IDs (enter -1 to stop):" << endl;
    while (true)
    {
        int itemID;
        cin >> itemID;
        if (itemID == -1)
            break;
        myOrder.addItem(itemID);
    }

    // Display order details
    cout << "\nOrder Details:" << endl;
    cout << "ID: " << myOrder.id << endl;
    cout << "Total Sale Price: $" << myOrder.total_sale_price << endl;
    cout << "Total Cost Price: $" << myOrder.total_cost_price << endl;
    cout << "Customer Username: " << myOrder.customer_username << endl;
    cout << "Customer Address: " << myOrder.customer_address << endl;
    cout << "Customer Phone: " << myOrder.customer_phone << endl;
    cout << "Customer Email: " << myOrder.customer_email << endl;
    cout << "Order Status: " << myOrder.order_status << endl;
    cout << "Order Type: " << myOrder.order_type << endl;
    cout << "Order Date: " << myOrder.order_date << endl;

    // Display items
    cout << "Items in the Order:" << endl;
    myOrder.displayItems();

    return 0;
}
