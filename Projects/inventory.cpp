#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int totalProducts = 1000; // fixed size inventory system
    int count = 4;            // current products

    // Product database
    string productName[totalProducts] = {"hf", "airbuds", "charger", "mp3s"};
    float productPrice[totalProducts] = {350, 450, 400, 250};
    int productQty[totalProducts] = {90, 100, 90, 100};

    // bill arrays
    int billNo = 0;
    int billCount = 0;
    string billName[100];
    int billQty[100];
    float billPrice[100];
    float billTotal[100];

    // discount variables
    float discount = 0;
    float discountAmount = 0;
    float finalTotal = 0;

    // sales array
    string salesCustomer[100];
    string salesPayment[100];
    float salesTotal[100];
    int salesCount = 0;

    while (true)
    {
        system("cls");
        cout << "-----------------------------------------------------------" << endl; // header
        cout << "----------INVENTORY AND BILLING MANAGEMENT SYSTEM----------" << endl;
        cout << "-----------------------------------------------------------" << endl;

        cout << "1. Admin Login " << endl; // main menu
        cout << "2. Staff Login (billing counter)" << endl;
        cout << "3. Exit " << endl;
        cout << endl;

        string useroption;
        cout << "Enter Option(1-3): ";
        cin >> useroption;
        cout << "\n You have selected option: " << useroption << endl;

        if (useroption == "1") // admin login
        {

            int counttemp = 0;
            for (int attempt = 1; attempt <= 3; attempt++)
            {
                system("cls");
                cout << "Admin Login : Attempt  " << attempt << " of 3 " << endl
                     << endl;

                string username;
                cout << "Enter Username ";
                cin >> username;
                string password;
                cout << "Enter Password ";
                cin >> password;

                if (username == "admin" && password == "1234")
                {
                    cout << "Login successfully ";
                    while (true)
                    {
                        system("cls");
                        cout << "-----ADMIN MENU-----" << endl;
                        cout << "1. Add product " << endl;
                        cout << "2. View all products " << endl;
                        cout << "3. Search product   " << endl;
                        cout << "4. Update product" << endl;
                        cout << "5. Delete product " << endl;
                        cout << "6. View sales report" << endl;
                        cout << "7. Logout" << endl;
                        cout << "--------------------" << endl;

                        string adminoption;
                        cout << "Enter  Option: ";
                        cin >> adminoption;

                        if (adminoption == "1")
                        {
                            // add product
                            string name;
                            float price;
                            int qty;

                            cout << "Enter the product name: ";
                            cin >> name;

                            cout << "Enter the price";
                            cin >> price;

                            cout << "Enter the quantity ";
                            cin >> qty;

                            productName[count] = name;
                            productPrice[count] = price;
                            productQty[count] = qty;
                            count = count + 1;
                            cout << "Product Added Successfully " << endl;
                            cout << "Press any key to continue " << endl;
                            getch();
                        }

                        else if (adminoption == "2") // view products
                        {
                            // sorting by price:
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
                                {

                                    cout << productName[i] << "\t" << productPrice[i] << "\t" << productQty[i] << endl;
                                }
                            }
                            getch();
                        }

                        else if (adminoption == "3")
                        {
                            // search product
                            string name;
                            cout << "Enter product name to search ";
                            cin >> name;

                            bool found = false;
                            int foundindex = -1;

                            for (int i = 0; i < count; i = i + 1)
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
                                cout << "Product  not found!" << name << endl;
                            }
                            getch();
                        }

                        else if (adminoption == "4") // update the product
                        {

                            string name;
                            cout << "Enter product name to update ";
                            cin >> name;

                            bool found = false;
                            int foundindex = -1;

                            for (int i = 0; i < count; i = i + 1)
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
                                cout << "Enter new  price";
                                cin >> price;

                                int quantity;
                                cout << "Enter new quantity ";
                                cin >> quantity;

                                productPrice[foundindex] = price;
                                productQty[foundindex] = quantity;
                                cout << " Product Updated Successfully" << endl;
                            }
                            else
                            {
                                cout << "Record not found! " << endl;
                            }
                            getch();
                        }

                        else if (adminoption == "5")
                        {
                            // delete product
                            string name;
                            cout << "Enter product name to delete  ";
                            cin >> name;

                            bool found = false;
                            int foundindex = 1;
                            for (int i = 0; i < count; i = i + 1)
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
                                cout << " Product  Deleted Successfully " << endl;
                            }
                            else
                            {
                                cout << " Product not found" << endl;
                            }
                            getch();
                        }

                        else if (adminoption == "6") // sales report
                        {
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
                                    for (int j = 1; j < salesCount - i - 1; j++)
                                    {
                                        if (salesTotal[j] < salesTotal[j + 1])
                                        {
                                            float tempTotal = salesTotal[j];
                                            salesTotal[j] = salesTotal[j + 1];
                                            salesTotal[j + 1] = tempTotal;

                                            // swap customer
                                            string tempCustomer = salesCustomer[j];
                                            salesCustomer[j] = salesCustomer[j + 1];
                                            salesCustomer[j + 1] = tempCustomer;

                                            // swap payment
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

                        else if (adminoption == "7")
                        {

                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected" << endl;
                        }
                        cout << "Press any key to continue...";
                        getch();
                    }
                    cout << "Press any key to continue...";
                    getch();
                    break;
                }
                else
                {
                    cout << "Invalid  credentials! " << endl;
                }
                getch();
            }
        }

        else if (useroption == "2") // staff panel
        {
            string customerName;
            string customerNo;
            string paymentType;
            while (true)
            {
                system("cls");
                cout << "------ STAFF PANEL ------" << endl;
                cout << "1. Create new bill" << endl;
                cout << "2. Add item to bill" << endl;
                cout << "3. Remove item from bill" << endl;
                cout << "4. Add discount" << endl;
                cout << "5. Print reciept " << endl;
                cout << "6. Logout" << endl;

                string staffoption;
                cout << "Enter Option: ";
                cin >> staffoption;

                if (staffoption == "1") // create new bill
                {
                    billCount = 0;
                    discount = 0;
                    discountAmount = 0;
                    finalTotal = 0;

                    cout << "Enter Customer Name ";
                    cin >> customerName;
                    cout << "Enter Customr Mobile No ";
                    cin >> customerNo;
                    cout << "Enter Payment Type";
                    cin >> paymentType;
                    cout << "New bill Created Successfully! \n";
                }

                else if (staffoption == "2") // Add item to bill
                {
                    char choice = 'y';
                    while (choice == 'y' || choice == 'Y')

                    {
                        string name;
                        int qty;
                        bool found = false;
                        cout << "Enter product name";
                        cin >> name;
                        for (int i = 0; i < count; i++)
                        {
                            if (productName[i] == name)
                            {
                                found = true;
                                cout << "Enter the quantity";
                                cin >> qty;
                                if (qty <= productQty[i])
                                {
                                    billName[billCount] = productName[i];
                                    billQty[billCount] = qty;
                                    billPrice[billCount] = productPrice[i];
                                    billTotal[billCount] = qty * productPrice[i];
                                    billCount++;
                                    productQty[i] -= qty;
                                    cout << "Products Added Successfully!" << endl;
                                }
                                else
                                {
                                    cout << "Not enough stock" << endl;
                                }
                            }
                        }
                        if (!found)
                        {
                            cout << "Product not found";
                        }
                        cout << "Add another products ? (y/n)";
                        cin >> choice;
                    }
                }

                else if (staffoption == "3") // remove product from bill
                {
                    string name;
                    char confirm;
                    bool found = false;
                    cout << " Enter the product name  to remove from bill: ";
                    cin >> name;
                    for (int i = 0; i < billCount; i++)
                    {
                        if (billName[i] == name)
                        {
                            found = true;
                            for (int j = 0; j < count; j++)
                            {
                                if (productName[j] == name)
                                {
                                    productQty[j] += billQty[i];
                                }
                            }
                            for (int k = i; k < billCount - 1; k++)
                            {
                                billName[k] = billName[k + 1];
                                billQty[k] = billQty[k + 1];
                                billPrice[k] = billPrice[k + 1];
                                billTotal[k] = billTotal[k + 1];
                            }

                            billCount--;

                            cout << "Products removed from bill successfully!\n";
                            break;
                        }
                    }
                    if (!found)
                    {
                        cout << "Product not found in bill";
                    }
                }

                else if (staffoption == "4") // apply discount
                {

                    char choice;
                    float total = 0;

                    cout << "Apply dicount? (y/n)";
                    cin >> choice;

                    for (int i = 0; i < billCount; i++)
                    {
                        total += billTotal[i];
                    }
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

                else if (staffoption == "5") // print reciept
                {
                    float total = 0;
                    for (int i = 0; i < billCount; i++)
                    {
                        total += billTotal[i];
                    }
                    if (finalTotal == 0)
                    {
                        finalTotal = total;
                        discountAmount = 0;
                    }
                    cout << "\n------------------------------------\n";
                    cout << "           SHOP RECEIPT\n";
                    cout << "-------------------------------------\n";

                    cout << " bill No: " << billNo << endl;
                    billNo++;
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
                    {
                        cout << "Payment Mode: Cash Received\n";
                    }
                    else if (paymentType == "bank" || paymentType == "Bank")
                    {
                        cout << "Payment Mode: Bank Transfer\n";
                    }
                    else
                    {
                        cout << "Payment Mode: Credit\n";
                    }

                    cout << "-------------------------------------\n";
                    cout << "        THANK YOU VISIT AGAIN\n";
                    cout << "-------------------------------------\n";
                    salesCustomer[salesCount] = customerName;
                    salesPayment[salesCount] = paymentType;
                    salesTotal[salesCount] = finalTotal;
                    salesCount++;

                    billCount = 0;
                    discount = 0;
                    discountAmount = 0;
                    finalTotal = 0;
                }

                else if (staffoption == "6")
                {
                    break;
                }
                else
                {
                    cout << "Wrong option selected" << endl;
                }
                cout << "Press any key to continue" << endl;
                getch();
            }
        }
        else if (useroption == "3")
        // exit
        {
            break;
        }
        else
        {
            cout << " You have selected wrong option ";
            getch();
        }
        cout << "Thanks for using this software ";
    }
}