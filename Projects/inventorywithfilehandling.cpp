#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

const int totalProducts = 100;
int count = 4;

string productName[totalProducts];
float productPrice[totalProducts];
int productQty[totalProducts];

void addProducts();
void viewProduct();
void searchProduct();
void updateProduct();
void deleteProduct();
void adminMenu();

int billNo = 0;
int billCount = 0;
string billName[100];
int billQty[100];
float billPrice[100];
float billTotal[100];

float discount = 0;
float discountAmount = 0;
float finalTotal = 0;

string salesCustomer[100];
string salesPayment[100];
float salesTotal[100];
int salesCount = 0;

string customerName;
string customerNo;
string paymentType;

void staffMenu();

// -------------------------------------------------------
// FILE HANDLING FUNCTION 1: saveProducts()
// HOW: Opens products.txt with ofstream in TRUNCATE mode (ios::trunc).
//      This clears the file first so old/deleted products don't stay.
//      Then loops through all products and writes each one as a line:
//      "ProductName Price Quantity"
// WHY ofstream + trunc: fstream without a mode doesn't clear old content.
// -------------------------------------------------------
void saveProducts()
{
    ofstream fout("products.txt", ios::trunc);
    for (int i = 0; i < count; i++)
    {
        if (productName[i] != "")
            fout << productName[i] << " " << productPrice[i] << " " << productQty[i] << "\n";
    }
    fout.close();
}

// -------------------------------------------------------
// FILE HANDLING FUNCTION 2: loadProducts()
// HOW: Opens products.txt with ifstream (read-only).
//      Uses >> operator to read word-by-word into the arrays.
//      Keeps reading until end of file (EOF).
//      count tracks how many products were loaded.
// -------------------------------------------------------
void loadProducts()
{
    ifstream fin("products.txt");
    if (!fin.is_open()) return;
    count = 0;
    while (fin >> productName[count] >> productPrice[count] >> productQty[count])
        count++;
    fin.close();
}

// -------------------------------------------------------
// FILE HANDLING FUNCTION 3: saveSales()
// HOW: Opens sales.txt with ofstream in TRUNCATE mode.
//      Writes each sale as: "CustomerName PaymentType Total"
//      Truncate mode ensures the file is rewritten fresh each time.
// -------------------------------------------------------
void saveSales()
{
    ofstream fout("sales.txt", ios::trunc);
    for (int i = 0; i < salesCount; i++)
        fout << salesCustomer[i] << " " << salesPayment[i] << " " << salesTotal[i] << "\n";
    fout.close();
}

// -------------------------------------------------------
// FILE HANDLING FUNCTION 4: loadSales()
// HOW: Opens sales.txt with ifstream.
//      Reads each line into salesCustomer, salesPayment, salesTotal arrays.
//      salesCount tracks how many sales records exist.
// -------------------------------------------------------
void loadSales()
{
    ifstream fin("sales.txt");
    if (!fin.is_open()) return;
    salesCount = 0;
    while (fin >> salesCustomer[salesCount] >> salesPayment[salesCount] >> salesTotal[salesCount])
        salesCount++;
    fin.close();
}

// -------------------------------------------------------
// FILE HANDLING FUNCTION 5: saveBillNo()
// HOW: Opens billno.txt with ofstream and writes the current billNo integer.
//      Called every time a receipt is printed so the number persists.
// -------------------------------------------------------
void saveBillNo()
{
    ofstream fout("billno.txt");
    fout << billNo;
    fout.close();
}

// -------------------------------------------------------
// FILE HANDLING FUNCTION 6: loadBillNo()  <-- NEW (was missing before)
// HOW: Opens billno.txt with ifstream and reads the saved billNo back.
//      Called once at program startup so bill numbering continues
//      from where it left off instead of resetting to 0 every run.
// -------------------------------------------------------
void loadBillNo()
{
    ifstream fin("billno.txt");
    if (!fin.is_open()) return;  // file doesn't exist yet on first run, that's fine
    fin >> billNo;
    fin.close();
}

void addProduct()
{
    string name;
    float price;
    int qty;

    cout << "Enter the product name: ";
    cin >> name;
    cout << "Enter the price: ";
    cin >> price;
    cout << "Enter the quantity: ";
    cin >> qty;

    productName[count] = name;
    productPrice[count] = price;
    productQty[count] = qty;
    count = count + 1;
    saveProducts();  // FILE HANDLING: save after every add
    cout << "Product Added Successfully " << endl;
    cout << "Press any key to continue " << endl;
    getch();
}

void viewProduct()
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (productPrice[j] > productPrice[j + 1])
            {
                float tempPrice = productPrice[j];
                productPrice[j] = productPrice[j + 1];
                productPrice[j + 1] = tempPrice;

                string tempName = productName[j];
                productName[j] = productName[j + 1];
                productName[j + 1] = tempName;

                int tempQty = productQty[j];
                productQty[j] = productQty[j + 1];
                productQty[j + 1] = tempQty;
            }
        }
    }
    cout << "Name\tPrice\tQuantity" << endl;
    for (int i = 0; i < count; i++)
    {
        if (productName[i] != "")
            cout << productName[i] << "\t" << productPrice[i] << "\t" << productQty[i] << endl;
    }
    getch();
}

void searchProduct()
{
    string name;
    cout << "Enter product name to search: ";
    cin >> name;

    bool found = false;
    int foundindex = -1;

    for (int i = 0; i < count; i++)
    {
        if (productName[i] == name)
        {
            found = true;
            foundindex = i;
            break;
        }
    }
    if (found)
    {
        cout << "Name\tPrice\tQuantity" << endl;
        cout << productName[foundindex] << "\t" << productPrice[foundindex] << "\t" << productQty[foundindex] << endl;
    }
    else
    {
        cout << "Product not found: " << name << endl;
    }
    getch();
}

void updateProduct()
{
    string name;
    cout << "Enter product name to update: ";
    cin >> name;

    bool found = false;
    int foundindex = -1;

    for (int i = 0; i < count; i++)
    {
        if (productName[i] == name)
        {
            foundindex = i;
            found = true;
        }
    }
    if (found == true)
    {
        cout << "----- Old Record -----" << endl;
        cout << "Name\tPrice\tQuantity" << endl;
        cout << productName[foundindex] << "\t" << productPrice[foundindex] << "\t" << productQty[foundindex] << endl;

        float price;
        cout << "Enter new price: ";
        cin >> price;

        int quantity;
        cout << "Enter new quantity: ";
        cin >> quantity;

        productPrice[foundindex] = price;
        productQty[foundindex] = quantity;
        saveProducts();  // FILE HANDLING: save after update
        cout << "Product Updated Successfully" << endl;
    }
    else
    {
        cout << "Record not found!" << endl;
    }
    getch();
}

void deleteProduct()
{
    string name;
    cout << "Enter product name to delete: ";
    cin >> name;

    bool found = false;
    int foundindex = -1;  // BUG FIX: was hardcoded to 1 before
    for (int i = 0; i < count; i++)
    {
        if (productName[i] == name)
        {
            foundindex = i;
            found = true;
        }
    }
    if (found == true)
    {
        productName[foundindex] = "";
        productPrice[foundindex] = 0;
        productQty[foundindex] = 0;
        saveProducts();  // FILE HANDLING: save after delete
        cout << "Product Deleted Successfully" << endl;
    }
    else
    {
        cout << "Product not found" << endl;
    }
    getch();
}

void salesReport()
{
    loadProducts();
    cout << "\n-----------SALES REPORT ----------\n";

    float totalSales = 0;

    if (salesCount == 0)
    {
        cout << "No sales yet.\n";
    }
    else
    {
        for (int i = 0; i < salesCount - 1; i++)
        {
            for (int j = 0; j < salesCount - i - 1; j++)  // BUG FIX: j was starting at 1
            {
                if (salesTotal[j] < salesTotal[j + 1])
                {
                    float tempTotal = salesTotal[j];
                    salesTotal[j] = salesTotal[j + 1];
                    salesTotal[j + 1] = tempTotal;

                    string tempCustomer = salesCustomer[j];
                    salesCustomer[j] = salesCustomer[j + 1];
                    salesCustomer[j + 1] = tempCustomer;

                    string tempPayment = salesPayment[j];
                    salesPayment[j] = salesPayment[j + 1];
                    salesPayment[j + 1] = tempPayment;
                }
            }
        }
        for (int i = 0; i < salesCount; i++)
        {
            cout << "Bill " << i + 1
                 << " Customer: " << salesCustomer[i]
                 << " Payment: " << salesPayment[i]
                 << " Total: " << salesTotal[i] << endl;
            totalSales += salesTotal[i];
        }

        cout << "----------------------------------\n";
        cout << "TOTAL SALES: " << totalSales << endl;
    }
    cout << "---------------------------------\n";
}

void createBill()
{
    billCount = 0;
    discount = 0;
    discountAmount = 0;
    finalTotal = 0;

    cout << "Enter Customer Name: ";
    cin >> customerName;
    cout << "Enter Customer Mobile No: ";
    cin >> customerNo;
    cout << "Enter Payment Type: ";
    cin >> paymentType;
    cout << "New bill Created Successfully!\n";
}

void addItemToBill()
{
    char choice = 'y';
    while (choice == 'y' || choice == 'Y')
    {
        string name;
        int qty;
        bool found = false;
        cout << "Enter product name: ";
        cin >> name;
        for (int i = 0; i < count; i++)
        {
            if (productName[i] == name)
            {
                found = true;
                cout << "Enter the quantity: ";
                cin >> qty;
                if (qty <= productQty[i])
                {
                    billName[billCount] = productName[i];
                    billQty[billCount] = qty;
                    billPrice[billCount] = productPrice[i];
                    billTotal[billCount] = qty * productPrice[i];
                    billCount++;
                    productQty[i] -= qty;
                    saveProducts();  // FILE HANDLING: stock updated, save immediately
                    cout << "Product Added Successfully!" << endl;
                }
                else
                {
                    cout << "Not enough stock" << endl;
                }
            }
        }
        if (!found)
            cout << "Product not found" << endl;
        cout << "Add another product? (y/n): ";
        cin >> choice;
    }
}

void removeItemToBill()
{
    string name;
    bool found = false;
    cout << "Enter the product name to remove from bill: ";
    cin >> name;
    for (int i = 0; i < billCount; i++)
    {
        if (billName[i] == name)
        {
            found = true;
            for (int j = 0; j < count; j++)
            {
                if (productName[j] == name)
                    productQty[j] += billQty[i];
            }
            saveProducts();  // FILE HANDLING: stock restored, save immediately
            for (int k = i; k < billCount - 1; k++)
            {
                billName[k] = billName[k + 1];
                billQty[k] = billQty[k + 1];
                billPrice[k] = billPrice[k + 1];
                billTotal[k] = billTotal[k + 1];
            }
            billCount--;
            cout << "Product removed from bill successfully!\n";
            break;
        }
    }
    if (!found)
        cout << "Product not found in bill" << endl;
}

void addDiscount()
{
    char choice;
    float total = 0;

    cout << "Apply discount? (y/n): ";
    cin >> choice;

    for (int i = 0; i < billCount; i++)
        total += billTotal[i];

    if (choice == 'y' || choice == 'Y')
    {
        cout << "Enter Discount %: ";
        cin >> discount;

        discountAmount = (total * discount) / 100;
        finalTotal = total - discountAmount;

        cout << "Discount Applied: " << discount << "%\n";
        cout << "Discount Amount: " << discountAmount << endl;
        cout << "Final Total: " << finalTotal << endl;
    }
    else
    {
        finalTotal = total;
        discountAmount = 0;
        cout << "No Discount Applied.\n";
        cout << "Final Total: " << finalTotal << endl;
    }
}

// -------------------------------------------------------
// FILE HANDLING FUNCTION 7: saveReceipt()
// HOW: Opens receipts.txt with ofstream in APPEND mode (ios::app).
//      APPEND means it adds to the end of the file instead of
//      overwriting it — so every receipt is kept, one after another.
//      Writes the exact same layout as what's printed on screen.
// WHY append: if we used trunc, each new receipt would erase the old ones.
// -------------------------------------------------------
void saveReceipt(int currentBillNo, float currentFinalTotal, float currentDiscountAmount)
{
    ofstream fout("receipts.txt", ios::app);  // ios::app = append, never overwrites
    fout << "\n------------------------------------\n";
    fout << "           SHOP RECEIPT\n";
    fout << "-------------------------------------\n";
    fout << " Bill No: " << currentBillNo << "\n";
    fout << "Customer Name : " << customerName << "\n";
    fout << "Mobile Number : " << customerNo << "\n";
    fout << "Payment Type  : " << paymentType << "\n";
    fout << "-------------------------------------\n";
    fout << "ITEM\tQTY\tPRICE\tTOTAL\n";
    fout << "-------------------------------------\n";

    for (int i = 0; i < billCount; i++)
    {
        fout << billName[i] << "\t"
             << billQty[i] << "\t"
             << billPrice[i] << "\t"
             << billTotal[i] << "\n";
    }

    fout << "-------------------------------------\n";
    fout << "DISCOUNT: " << currentDiscountAmount << "\n";
    fout << "FINAL TOTAL: " << currentFinalTotal << "\n";

    if (paymentType == "cash" || paymentType == "Cash")
        fout << "Payment Mode: Cash Received\n";
    else if (paymentType == "bank" || paymentType == "Bank")
        fout << "Payment Mode: Bank Transfer\n";
    else
        fout << "Payment Mode: Credit\n";

    fout << "-------------------------------------\n";
    fout << "        THANK YOU VISIT AGAIN\n";
    fout << "-------------------------------------\n";
    fout.close();
}

void printReciept()
{
    float total = 0;
    for (int i = 0; i < billCount; i++)
        total += billTotal[i];

    if (finalTotal == 0)
    {
        finalTotal = total;
        discountAmount = 0;
    }

    cout << "\n------------------------------------\n";
    cout << "           SHOP RECEIPT\n";
    cout << "-------------------------------------\n";
    cout << " Bill No: " << billNo << endl;
    billNo++;
    saveBillNo();  // FILE HANDLING: save incremented bill number so it doesn't reset
    cout << "Customer Name : " << customerName << endl;
    cout << "Mobile Number : " << customerNo << endl;
    cout << "Payment Type  : " << paymentType << endl;
    cout << "-------------------------------------\n";
    cout << "ITEM\tQTY\tPRICE\tTOTAL\n";
    cout << "-------------------------------------\n";

    for (int i = 0; i < billCount; i++)
    {
        cout << billName[i] << "\t"
             << billQty[i] << "\t"
             << billPrice[i] << "\t"
             << billTotal[i] << endl;
    }

    cout << "-------------------------------------\n";
    cout << "DISCOUNT: " << discountAmount << endl;
    cout << "FINAL TOTAL: " << finalTotal << endl;

    if (paymentType == "cash" || paymentType == "Cash")
        cout << "Payment Mode: Cash Received\n";
    else if (paymentType == "bank" || paymentType == "Bank")
        cout << "Payment Mode: Bank Transfer\n";
    else
        cout << "Payment Mode: Credit\n";

    cout << "-------------------------------------\n";
    cout << "        THANK YOU VISIT AGAIN\n";
    cout << "-------------------------------------\n";
    saveReceipt(billNo - 1, finalTotal, discountAmount);  // FILE HANDLING: save receipt to file
    cout << "Receipt saved to receipts.txt\n";

    salesCustomer[salesCount] = customerName;
    salesPayment[salesCount] = paymentType;
    salesTotal[salesCount] = finalTotal;
    salesCount++;
    saveSales();  // FILE HANDLING: save new sale record to file

    billCount = 0;
    discount = 0;
    discountAmount = 0;
    finalTotal = 0;
}

void adminLogin()
{
    for (int attempt = 1; attempt <= 3; attempt++)
    {
        system("cls");
        cout << "Admin Login: Attempt " << attempt << " of 3" << endl << endl;

        string username;
        cout << "Enter Username: ";
        cin >> username;
        string password;
        cout << "Enter Password: ";
        cin >> password;

        if (username == "admin" && password == "1234")
        {
            cout << "Login successfully\n";
            adminMenu();
            cout << "Press any key to continue...";
            getch();
            break;
        }
        else
        {
            cout << "Invalid credentials!" << endl;
        }
        getch();
    }
}

void adminMenu()
{
    while (true)
    {
        system("cls");
        cout << "-----ADMIN MENU-----" << endl;
        cout << "1. Add product" << endl;
        cout << "2. View all products" << endl;
        cout << "3. Search product" << endl;
        cout << "4. Update product" << endl;
        cout << "5. Delete product" << endl;
        cout << "6. View sales report" << endl;
        cout << "7. Logout" << endl;
        cout << "--------------------" << endl;

        string adminoption;
        cout << "Enter Option: ";
        cin >> adminoption;

        if (adminoption == "1")
            addProduct();
        else if (adminoption == "2")
            viewProduct();
        else if (adminoption == "3")
            searchProduct();
        else if (adminoption == "4")
            updateProduct();
        else if (adminoption == "5")
            deleteProduct();
        else if (adminoption == "6")
            salesReport();
        else if (adminoption == "7")
            break;
        else
            cout << "Wrong option selected" << endl;

        cout << "Press any key to continue...";
        getch();
    }
}

void staffMenu()
{
    while (true)
    {
        system("cls");
        cout << "------ STAFF PANEL ------" << endl;
        cout << "1. Create new bill" << endl;
        cout << "2. Add item to bill" << endl;
        cout << "3. Remove item from bill" << endl;
        cout << "4. Add discount" << endl;
        cout << "5. Print receipt" << endl;
        cout << "6. Logout" << endl;

        string staffoption;
        cout << "Enter Option: ";
        cin >> staffoption;

        if (staffoption == "1")
            createBill();
        else if (staffoption == "2")
            addItemToBill();
        else if (staffoption == "3")
            removeItemToBill();
        else if (staffoption == "4")
            addDiscount();
        else if (staffoption == "5")
            printReciept();
        else if (staffoption == "6")
            break;
        else
            cout << "Wrong option selected" << endl;

        cout << "Press any key to continue" << endl;
        getch();
    }
}

main()
{
    // FILE HANDLING: load all saved data at startup
    loadProducts();  // reads products.txt into arrays
    loadSales();     // reads sales.txt into arrays
    loadBillNo();    // reads billno.txt so bill numbers continue from last session

    while (true)
    {
        system("cls");
        cout << "-----------------------------------------------------------" << endl;
        cout << "----------INVENTORY AND BILLING MANAGEMENT SYSTEM----------" << endl;
        cout << "-----------------------------------------------------------" << endl;

        cout << "1. Admin Login" << endl;
        cout << "2. Staff Login (billing counter)" << endl;
        cout << "3. Exit" << endl;
        cout << endl;

        string useroption;
        cout << "Enter Option(1-3): ";
        cin >> useroption;
        cout << "\nYou have selected option: " << useroption << endl;

        if (useroption == "1")
        {
            adminLogin();
            adminMenu();
        }
        else if (useroption == "2")
        {
            staffMenu();
        }
        else if (useroption == "3")
        {
            cout << "Thanks for using this software";
            break;
        }
        else
        {
            cout << "You have selected wrong option";
            getch();
        }
    }
}
