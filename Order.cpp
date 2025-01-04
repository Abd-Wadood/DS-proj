#include "Order.h"
#include <iostream>
using namespace std;

// Constructor
Order::Order()
    : id(0), total_sale_price(0.0), total_cost_price(0.0), items(nullptr),
      customer_username("Guest"), customer_address("Guest"),
      customer_phone("Guest"), customer_email("Guest"),
      order_status("Nill"), order_type("Unknown"), order_date("Nill") {}

// Destructor
Order::~Order()
{
    ItemNode* current = items;
    while (current)
    {
        ItemNode* temp = current;
        current = current->next;
        delete temp;
    }
}

// Add an item to the linked list
void Order::addItem(int itemID)
{
    ItemNode* newNode = new ItemNode(itemID);
    if (!items)
    {
        items = newNode;
    }
    else
    {
        ItemNode* current = items;
        while (current->next)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Display items in the linked list
void Order::displayItems()
{
    ItemNode* current = items;
    if (!current)
    {
        cout << "No items in the order." << endl;
        return;
    }
    while (current)
    {
        cout << "Item ID: " << current->itemID << endl;
        current = current->next;
    }
}
