# Vending-Machine-Simulation
This project is a simple simulation of a vending machine that allows users to purchase different types of juice and manage a stack of items. The project is implemented in C++ and consists of several classes that work together to handle the vending machine operations, cash register, and stack management.


## Table of Contents

- [Project Structure](#project-structure)
- [Usage](#usage)
- [Classes and Methods](#classes-and-methods)

## Project Structure

The project consists of the following files:

- `CashRegister.cpp` & `CashRegister.h`: Handles the operations of the cash register, including initializing the cash balance and accepting payments.
- `DispenserType.cpp` & `DispenserType.h`: Manages the items in the vending machine, including their cost and quantity.
- `Menu.cpp` & `Menu.h`: Provides a user interface for interacting with the vending machine, including options for purchasing items and managing a stack.
- `Stack.cpp` & `Stack.h`: Implements a simple stack data structure for storing and managing items.
- `StackNode.cpp` & `StackNode.h`: Defines a node in the stack, including methods for setting and getting data.
- `VendingMachine.cpp` & `VendingMachine.h`: Coordinates the vending machine's functionality, including selling products and interacting with the cash register and dispenser.

## Usage

After running the program, you will be presented with a main menu where you can choose between a shop menu and a stack menu. The shop menu allows you to purchase different types of juices (orange, carrot, and pomegranate), while the stack menu allows you to manage a stack of items.

### Main Menu

- **Shop Menu:** 
  - Orange juice
  - Carrot juice
  - Pomegranate juice
  - Exit Shop Menu

- **Stack Menu:**
  - Push a value
  - Pull a value
  - View the first value
  - Check if the stack is empty
  - Exit Stack Menu

- **Exit:** Ends the program.

## Classes and Methods

### CashRegister Class

- **Constructor:**
  - `CashRegister()`: Initializes cash balance to 0.
  - `CashRegister(int money)`: Initializes cash balance to the specified amount.

- **Methods:**
  - `getCurrentBalance()`: Returns the current cash balance.
  - `acceptAmount(int a)`: Adds the specified amount to the cash balance.

### DispenserType Class

- **Constructor:**
  - `DispenserType()`: Initializes the number of items and cost to 0.
  - `DispenserType(int number_of_item, int cost_of_item)`: Initializes the number of items and cost to the specified values.

- **Methods:**
  - `getNoOfItems()`: Returns the number of items available.
  - `getCost()`: Returns the cost of the item.
  - `makeSale()`: Decreases the number of items by one.

### Menu Class

- **Methods:**
  - `mainMenu()`: Displays the main menu and handles user input.
  - `shopMenu()`: Displays the shop menu and handles juice purchases.
  - `stackMenu()`: Displays the stack menu and handles stack operations.

### Stack Class

- **Constructor:**
  - `Stack()`: Initializes the stack.

- **Methods:**
  - `isEmpty()`: Checks if the stack is empty.
  - `push(StackNode node)`: Pushes a node onto the stack.
  - `pop()`: Removes the top node from the stack and returns its value.
  - `peek()`: Returns the value of the top node without removing it.

### StackNode Class

- **Constructor:**
  - `StackNode(int data)`: Initializes the node with the given data.

- **Methods:**
  - `getData()`: Returns the data stored in the node.
  - `getNext()`: Returns a pointer to the next node.
  - `setNext(StackNode* next)`: Sets the next node in the stack.

### VendingMachine Class

- **Constructor:**
  - `vendingmachine()`: Initializes the vending machine with predefined items and costs.

- **Methods:**
  - `sellproduct(char fruit)`: Handles the sale of a product based on the specified fruit type.


