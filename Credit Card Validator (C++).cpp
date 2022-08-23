#include<iostream>
using namespace std;

int main()
{
    int a,i,j,k,total;
    int sum1 = 0;
    int sum2 = 0;


    //Registers the number of digits in the credit card.

    cout << "Enter the number of digits on your credit card:";
    cin >> a;
    cout << endl << endl;

    int cardNumber[a];


    //Takes the credit card number in the order from left to right.

    cout << "Enter your credit card number in the order from left to right" <<endl;
    for (j=1;j<=a;j++)
    {
        cout << j << ":";
        cin >> cardNumber[j];
    }

    //Application of Luhn Algorithm.

    for(i=(a-1);i>0;i=i-2)
    {
        cardNumber[i] = cardNumber[i]*2;
        if(cardNumber[i]>9)
        {
            cardNumber[i]=cardNumber[i]-9;
            sum1 = sum1 + cardNumber[i];
        }
        else
        {
            sum1 = sum1 + cardNumber[i];
        }
    }

    for (k=a;k>0;k=k-2)
    {
        sum2 = sum2 + cardNumber[k];
    }

    total = sum1 + sum2;

    if(total%10==0)
    {
        cout <<"\n" <<"The entered credit card number is Valid." <<endl;
    }
    else
    {
        cout <<"\n" <<"The entered credit card number is Invalid." <<endl;
    }


    return 0;
}
