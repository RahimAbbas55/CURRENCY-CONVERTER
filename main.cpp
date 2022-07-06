#include<iostream>
using namespace std;
struct converter
{
    float pak_rs;
    int choice,ag;
    char op;
    double result;
};
int main()
{
    converter r;
    cout<<"\t\t\t\t\tENTER (Y) OR (y) TO PROCEED TO CURRENCY CONVERTER: ";
    cin>>r.op;
    while(r.op=='Y' || r.op=='y')
    {
        cout<<"\t\t\t\t\t------------------------------\n";
        cout<<"\t\t\t\t\t------------------------------\n";
        cout<<"\t\t\t\t\t------------------------------\n";
        cout<<"\t\t\t\t\tWELCOME TO CURRENCY CONVERTER.\n";
        cout<<"\t\t\t\t\t------------------------------\n";
        cout<<"\t\t\t\t\t------------------------------\n";
        cout<<"\t\t\t\t\t------------------------------\n";
        cout<<"\n\n\n";
        cout<<"\t\t\tTHE CONVERTER CONVERTS FROM PAKISTANI RUPEES TO THE GIVEN CURRENCY.\n";
        cout<<"\t\t\tENTER (1) TO CONVERT TO UNITED KINGDOM POUNDS(GBP).\n";
        cout<<"\t\t\tENTER (2) TO CONVERT TO UNITED STATES DOLLAR (USD).\n";
        cout<<"\t\t\tENTER (3) TO CONVERT TO DUBAI RIYAL.\n";
        cout<<"\t\t\tENTER (4) TO CONVERT TO EUROS.\n";
        cout<<"\t\t\tENTER (5) TO CONVERT TO KUWATI DINAR.\n";
        cout<<"\t\t\tENTER (6) TO CONVERT TO JAPENESE YEN.\n";
        cout<<"\t\t\tENTER YOUR CHOICE: ";
        cin>>r.choice;cout<<'\n';
       

        switch(r.choice)
        {
            case 1:
            {
                cout<<"\t\t\tENTER AMOUNT OF PAKISTANI RUPEE: ";
                cin>>r.pak_rs;cout<<'\n';
                if(r.pak_rs>0 )
                {
                    r.result=r.pak_rs / (251.33);
                    cout<<"\t\t\tYOUR AMOUNT IS: "<<r.result<<" POUNDS.\n";
                }
                else
                {
                   cout<<"\t\t\tCURRENCY CAN NOT BE NEGATIVE.\n\n";
                }
                break;
            }
            case 2:
            {
                cout<<"\t\t\tENTER AMOUNT OF PAKISTANI RUPEE: ";
                cin>>r.pak_rs;cout<<'\n';
                if(r.pak_rs>0)
                {
                    r.result=r.pak_rs / (198.66);
                    cout<<"\t\t\tYOUR AMOUNT IS: "<<r.result<<" DOLLARS.\n";
                }
                else
                {
                   cout<<"\t\t\tCURRENCY CAN NOT BE NEGATIVE.\n\n";
                }
                break;
            }
            case 3:
            {
                cout<<"\t\t\tENTER AMOUNT OF PAKISTANI RUPEE: ";
                cin>>r.pak_rs;cout<<'\n';
                if(r.pak_rs>0)
                {
                    r.result=r.pak_rs / (52.97);
                    cout<<"\t\t\tYOUR AMOUNT IS: "<<r.result<<" RIYAL.\n";
                }
                else
                {
                   cout<<"\t\t\tCURRENCY CAN NOT BE NEGATIVE.\n\n";
                }
                break;
            }
            case 4:
            {
                cout<<"\t\t\tENTER AMOUNT OF PAKISTANI RUPEE: ";
                cin>>r.pak_rs;cout<<'\n';
                if(r.pak_rs>0)
                {
                    r.result=r.pak_rs / (214.23);
                    cout<<"\t\t\tYOUR AMOUNT IS: "<<r.result<<" EUROS.\n";
                }
                else
                {
                   cout<<"\t\t\tCURRENCY CAN NOT BE NEGATIVE.\n\n";
                }
                break;
            }
            case 5:
            {
                cout<<"\t\t\tENTER AMOUNT OF PAKISTANI RUPEE: ";
                cin>>r.pak_rs;cout<<'\n';
                if(r.pak_rs>0)
                {
                    r.result=r.pak_rs / (649.61);
                    cout<<"\t\t\tYOUR AMOUNT IS: "<<r.result<<" DINAR.\n";
                }
                else
                {
                   cout<<"\t\t\tCURRENCY CAN NOT BE NEGATIVE.\n\n";
                }
                break;
            }
            case 6:
            {
                cout<<"\t\t\tENTER AMOUNT OF PAKISTANI RUPEE: ";
                cin>>r.pak_rs;cout<<'\n';
                if(r.pak_rs>0)
                {
                    r.result=r.pak_rs / (1.56);
                    cout<<"\t\t\tYOUR AMOUNT IS: "<<r.result<<" YEN.\n";
                }
                else
                {
                   cout<<"\t\t\tCURRENCY CAN NOT BE NEGATIVE.\n\n";
                }
                break;
            }
            default:
            {
                cout<<"\t\t\tINVALID INPUT.\n";
                break;
            }
        }
        cout<<"\t\t\tDO YOU WWANT TO CHECK ANOTHER TIME?\n\n";
        cout<<"\t\t\tENTER (1) FOR YES AND (0) FOR NO.\n\n";
        cin>>r.ag;cout<<'\n';
        if(r.ag==1)
        {
            cout<<"\t\t\t\t\tWELCOME AGAIN: \n";
        }
        if(r.ag==0)
        {
            cout<<"\t\t\tTHANKS FOR USING ME.TILL WE MEET NEXT TIME.\n\n";
            break;
        }
    }
    return 0;
}