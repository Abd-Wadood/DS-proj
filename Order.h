#ifndef ORDER_H
#define ORDER_H
#include <fstream>
#include <windows.h>

#include <string>
using namespace std;

struct ItemNode
{
    int itemID;
    ItemNode* next;

    ItemNode(int id) : itemID(id), next(nullptr) {}
};

class Order
{
public:
    int id;
    double total_sale_price;
    double total_cost_price;
    ItemNode* items; // Linked list head for items
    string customer_username;
    string customer_address;
    string customer_phone;
    string customer_email;
    string order_status;
    string order_type;
    string order_date;

    // Constructor
    Order();

    // Destructor to free linked list memory
    ~Order();

    // Method to add an item
    void addItem(int itemID);

    // Method to display items
    void displayItems();
};

#endif // ORDER_H
