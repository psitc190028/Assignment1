#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string name, code;
    double item_a, item_b, item_c, cost, total_cost, payment, change, balance, vat, printer, phone, table,answer;

    cout<< "       SYG TRADING ENTERPRISE       " <<endl;
    cout<< "       ======================       " <<endl;
    cout<< "====================================" <<endl;
    cout<< "Please enter your name" <<endl;
    getline(cin, name);
    cout<< "Please enter your unique id" <<endl;
    getline(cin, code);

    cout<< "The available items for sale with their respective prices are as follows" <<endl;
    cout<< "Printer =$150" <<endl;
    cout<< "Phone =$100" <<endl;
    cout<< "Table =$85" <<endl<< endl;

    cout<< "If you want to buy a printer please input the quantity you want" <<endl;
    cout<< "If you do not want to buy a printer please enter 0 " <<endl;
    cin>> item_a;
    cout<< "" <<endl;

    cout<< "If you want to buy a phone please input the quantity you want" <<endl;
    cout<< "If you do not want to buy a phone please enter 0 " <<endl;
    cin>> item_b;
    cout<< "" <<endl;

    cout<< "If you want to buy a table please input the quantity you want" <<endl;
    cout<< "If you do not want to buy a table please enter 0 " <<endl;
    cin>> item_c;
    cout<< "" <<endl;

    printer=150;
    phone=100;
    table=85;
    vat=0.12;
    cost=((printer*item_a)+(phone*item_b)+(table*item_c));
    total_cost=((vat*cost)+cost);

    cout<< "Your total cost(vat included) =$";
    cout<< total_cost <<endl;
    cout<< "How much do you have on you to purchase the goods?" <<endl;
    cin>> payment;

    if(payment==total_cost)
        {
        cout<< "" <<endl;
        cout<< "Thank you for your payment" <<endl;
        }
    else if (payment>total_cost)
        {
        cout<< "" <<endl;
        cout<< "Thank you for your payment" <<endl;
        cout<< "Your change will appear in you receipt" <<endl;
        }
    else
        {
        cout<< "" <<endl;
        cout<< "Your money is less than the required amount you are supposed to pay" <<endl;
        cout<< "Do you wish to continue with the transaction?" <<endl;
        cout<< "Please note that continuing with this transaction will result in a balance "<<endl;
         do{
            cout<< "Please enter '1' for Yes and '2' for No" <<endl;
            cin>> answer;
            if (answer==1)
                {
                cout<< "" <<endl;
                cout<< "Thank you for your payment" <<endl;
                cout<< "Balance you are supposed to make to SYG ENTERPRISE will appear in your receipt" <<endl;
                }
            else if (answer==2)
                {
                cout<< "" <<endl;
                cout<< "Thank you for visiting us" <<endl;
                cout<< "We will be expecting your next visit" <<endl;
                return 0;
                }
            else
                {
                cout<< "" <<endl;
                cout<< "invalid response" <<endl;
                cout<< "Please check your answer and re enter" <<endl;
                cout<< "" <<endl;
                }
          }
        while ((answer != 1)&& ( answer != 2));
        }

        cout<< "" <<endl<< endl;
        cout<< "       SYG TRADING ENTERPRISE       " <<endl;
        cout<< "       ======================       " <<endl;
        cout<< "            YOUR RECEIPT            " <<endl;
        cout<< "            ============            " <<endl;
        cout<< "====================================" <<endl;
        cout<< "   Name            :"<<  name <<endl;
        cout<< "   Unique id       :"<< code <<endl;
        cout<< "   Items Purchased :" <<endl;
        cout<< "   Printer         = "<< item_a << " = $" << printer*item_a <<endl;
        cout<< "   Phone           = "<< item_b << " = $" << phone*item_b <<endl;
        cout<< "   Table           = "<< item_c << " = $" << table*item_c <<endl;
        cout<< "   Your cost       = $"<< cost <<endl;
        cout<< "   Vat             = " << vat <<endl;
        cout<< "   Vat Amount      = $"<< total_cost-cost <<endl;
        cout<< "   Your total cost = $" << total_cost <<endl;
        cout<< "   Total Payment   = $" << payment <<endl;

        change=(payment-total_cost);
        balance=(total_cost-payment);

        if(payment==total_cost)
            {
        cout<< "Thank you for shopping with SYG Enterprise" <<endl;
        cout<< "==========================================" <<endl;
            }
        else if(payment>total_cost)
            {
        cout<< "   Your change     =$" << change <<endl;
        cout<< "Thank you for shopping with SYG Enterprise" <<endl;
        cout<< "==========================================" <<endl;
            }
        else
            {
        cout<< "Balance to be made to SYG ENTERPRISE = $";
        cout<< balance <<endl;
        cout<< "Thank you for shopping with SYG Enterprise" <<endl;
        cout<< "==========================================" <<endl;
            }


}
