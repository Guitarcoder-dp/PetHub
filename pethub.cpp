#include <iostream>
#include <string.h>
#include <cstdio>
#include <cstdlib>

using namespace std;
class pet{
    public:
    string dogo="dog";
    string cato="cat";
    string birdo="bird";
    string fisho="fish";
    string rabbito="rabbit";
    string temp;

    int petWeight=0;
    int numDays=0;
    int dRate=0;
    int mRate=0;
    int ageofpet=0;
    int petforsale=0;


    };
class dog : public pet
{

    public:
        void getdog()
        {
            cout << "Available pet category \n" << endl;
    cout << "• dog\n" << endl;
    cout << "• cat\n" << endl;
    cout << "• bird\n" << endl;
    cout << "• fish\n" << endl;
    cout << "• rabbit\n" << endl;
            cout << "enter the category name\n" << endl;
            cin >> temp;
            if(temp==dogo)
        {

// Ask for weight of
        cout << "\nHow much does your pet weigh?: " << endl;
        cin >> petWeight;
// Check if weight is valid
        while(petWeight <= 0)
        {
// Display error
        cout << "Invalid weight, weight must be greater than zero." <<endl;
        cin >> petWeight;
        }
// Ask for days
        cout <<"How many days will your pet be staying?: " << endl;
        cin >> numDays;
// Check if days are valid
        while(numDays <= 0)
        {
// Display error
        cout << "Invalid input, days must be greater than zero." <<endl;
        cin >> numDays;
        }
        cout<<"what's the age of pet\n"<< endl;
//check the age is valid
        if(ageofpet<=0)
        {
//display error
        cout<<"invaild input,age must be greater than zero."<< endl;
        }
//Re-input
        else{
        cin>>ageofpet;
        }





//Change rate based on number of days and weight
    if (numDays <= 10)
    {
    if(petWeight < 10)
    {
    if(ageofpet < 5)
    {
    dRate = 12;
    }
    }
    else if(petWeight < 35)
    {
    dRate = 16;
    }
    else
    {
    dRate = 19;
    }
    }
    else
    {
    if(petWeight < 10)
    {
    dRate = 10;
    }
    else if(petWeight < 35)
    {
    dRate = 13;
    }
    else
    {
    dRate = 17;
    }
    }
        }


    cout << "Your daily rate is: "<<dRate<<endl;
    mRate = dRate * numDays;
    cout<<"Your total stay will cost: "<<mRate<<endl;

        }
    };
class cat : public pet
{
    public:
        void getcat()
        {
            cout << "Available pet category \n" << endl;
    cout << "• dog\n" << endl;
    cout << "• cat\n" << endl;
    cout << "• bird\n" << endl;
    cout << "• fish\n" << endl;
    cout << "• rabbit\n" << endl;
            cout << "enter the category name\n" << endl;
            cin >> temp;
           if(temp==cato)
        {

// Ask for weight of
    cout << "\nHow much does your pet weigh?: " << endl;
    cin >> petWeight;
// Check if weight is valid
    while(petWeight <= 0)
    {
// Display error
    cout << "Invalid weight, weight must be greater than zero." <<endl;
// Re-input
    cin >> petWeight;
    }
// Ask for days
    cout <<"How many days will your pet be staying?: " << endl;
    cin >> numDays;
// Check if days are valid
    while(numDays <= 0)
    {
// Display error
    cout << "Invalid input, days must be greater than zero." <<endl;
// Re-input
    cin >> numDays;
    }
    cout<<"what's the age of pet\n"<< endl;
    cin>>ageofpet;
//check the age is valid
    while(ageofpet<=0)
    {
//display error
    cout<<"invaild input,age must be greater than zero."<< endl;

//Re-input
    cin>>ageofpet;
    }





//Change rate based on number of days and weight
    if (numDays <= 10)
    {
    if(petWeight < 10)
    {
    if(ageofpet < 5)
    {
    dRate = 10;
    }
    }
    else if(petWeight < 35)
    {
    dRate = 13;
    }
    else
    {
    dRate = 15;
    }
    }
    else
    {
    if(petWeight < 10)
    {
    dRate = 10;
    }
    else if(petWeight < 35)
    {
    dRate = 10;
    }
    else
    {
    dRate = 16;
    }
    }
        }


    cout << "Your daily rate is: "<<dRate<<endl;
    mRate = dRate * numDays;
    cout<<"Your total stay will cost: "<<mRate<<endl;
        }
};
class bird : public pet
{
    public:
        void getbird()
        {
            cout << "Available pet category \n" << endl;
    cout << "• dog\n" << endl;
    cout << "• cat\n" << endl;
    cout << "• bird\n" << endl;
    cout << "• fish\n" << endl;
    cout << "• rabbit\n" << endl;
         cout << "enter the category name\n" << endl;
            cin >> temp;
          if(temp==birdo)
        {

        cout<<"WE DONT DAY CARE BIRDS\n";

        }
        }
};
class fish : public pet
{
    public:
        void getfish()
        {
            cout << "Available pet category \n" << endl;
    cout << "• dog\n" << endl;
    cout << "• cat\n" << endl;
    cout << "• bird\n" << endl;
    cout << "• fish\n" << endl;
    cout << "• rabbit\n" << endl;
        cout << "enter the category name\n" << endl;
            cin >> temp;
        if(temp==fisho)
        {

        cout<<"WE DONT DAY CARE FISH\n";

        }
        }
};
class rabbit : public pet
{
    public:
        void getrabbit()
        {
            cout << "Available pet category \n" << endl;
    cout << "• dog\n" << endl;
    cout << "• cat\n" << endl;
    cout << "• bird\n" << endl;
    cout << "• fish\n" << endl;
    cout << "• rabbit\n" << endl;
            cout << "enter the category name\n" << endl;
            cin >> temp;
          if(temp==rabbito)
        {

// Ask for weight of
    cout << "\nHow much does your pet weigh?: " << endl;
    cin >> petWeight;
// Check if weight is valid
    while(petWeight <= 0)
    {
// Display error
    cout << "Invalid weight, weight must be greater than zero." <<endl;
    // Re-input
        cin >> petWeight;
    }
// Ask for days
    cout <<"How many days will your pet be staying?: " << endl;
    cin >> numDays;
// Check if days are valid
    while(numDays <= 0)
    {
    // Display error
        cout << "Invalid input, days must be greater than zero." <<endl;
// Re-input
    cin >> numDays;
    }
    cout<<"what's the age of pet\n"<< endl;
        cin>>ageofpet;
//check the age is valid
    while (ageofpet<=0)
    {
    //display error
        cout<<"invaild input,age must be greater than zero."<< endl;
//Re-input
    cin>>ageofpet;
    }





//Change rate based on number of days and weight
    if (numDays <= 10)
    {
    if(petWeight < 10)
    {
    if(ageofpet < 5)
    {
    dRate = 10;
    }
    }
    else if(petWeight < 35)
    {
    dRate = 14;
    }
    else
    {
    dRate = 12;
    }
    }
    else
    {
    if(petWeight < 10)
    {
    dRate = 12;
    }
    else if(petWeight < 35)
    {
    dRate = 15;
    }
    else
    {
    dRate = 16;
    }
    }
        }


    cout << "Your daily rate is: "<<dRate<<endl;
    mRate = dRate * numDays;
    cout<<"Your total stay will cost: "<<mRate<<endl;

        }
};

class offerdetails
{
    public:
        void getdetails()
        {
          cout<<"\nWE HAVE A EXCLUSIVE COLLECTIONS OF PETS AND ACCESORIES\n";
    cout<<"FOR DOGS : ";
    cout<<"\nCOLLOUR BELT : 40% OFF\n";
    cout<<"\nPEDIGREE     : 30% OFF\n";
    cout<<"\nWALKING BELST: 50% OFF\n";

    cout<<"\n------------------------------------------------------------\n";
    cout<<"\n------------------------------------------------------------\n";

    cout<<"FOR CATS :\n";
    cout<<"\nNECK BELT      : 30% OFF\n";
    cout<<"\nCAT FOOD       : 40% OFF\n";
    cout<<"\nCAT DRESSES    : 50% OFF\n";
    cout<<"\nOTHER ACCESORIES ARE ALSO AVAILABLE\n";

    cout<<"\n------------------------------------------------------------\n";

    cout<<"\n\nFOR BIRD :\n";
    cout<<"BIRD FOOD       : 45% OFF\n";

    cout<<"\n------------------------------------------------------------\n";

    cout<<"\n\nFOR FISH :\n";
    cout<<"FISH FOOD       : 45% OFF\n";

    cout<<"\n------------------------------------------------------------\n";

    cout<<"\n\nFOR RABBIT :\n";
    cout<<"NECK BELT      : 30% OFF\n";
    cout<<"RABBIT FOOD       : 45% OFF\n";

    cout<<"\n------------------------------------------------------------\n\n";

    cout<<"\n------------------------------------------------------------\n";
    cout<<"\nOTHER ACCESORIES ARE ALSO AVAILABLE\n";
    cout<<"\n------------------------------------------------------------\n";
        }

};


class payment
{
    int op;
    public:
    void getpayment()
    {
        cout<<"Do you want to know payment details\n";
        cout<<"Press 1 if YES"<<endl;
        cout<<"Press 2 if NO"<<endl;
        cin>>op;
        if(op==1)
        {
            cout<<"\nMode of Payments Avaible\n";
            cout<<"\nYou can pay via Paytm,Phonepay,Debit card,Google pay,Credit card,Master card\n\n";
        }
        else{
            cout<<"BYE....bye ! Hope to see you soon"<<endl;
        }
    }
};

class dogvariety
{
    public:
        void getdogvariety()
        {
            cout<<"List of Dogs and their Prices"<<endl;
            cout<<"1.Pomeranian..................7000"<<endl;
            cout<<"2.Dalmatian...................25000"<<endl;
            cout<<"3.Pug.........................21000"<<endl;
            cout<<"4.Beagle......................18000"<<endl;
            cout<<"5.Pitbull.....................50000"<<endl;
            cout<<"6.Akita Inu...................200000"<<endl;
            cout<<"7.Labrador....................7000"<<endl;
            cout<<"8.Rottweiler..................13000"<<endl;
            cout<<"9.German shepherd.............17000"<<endl;
            cout<<"10.Samoyed....................600000"<<endl;
        }


};

class birdvariety
{
    public:
        void getbirdvariety()
        {
            cout<<"List of Birds and their Prices"<<endl;
            cout<<"1.Love birds..................300"<<endl;
            cout<<"2.Yellow Alley................200"<<endl;
            cout<<"3.Pitaar box..................600"<<endl;
            cout<<"4.Cosy Tosy...................300"<<endl;
            cout<<"5.Finches.....................900"<<endl;
            cout<<"6.Parakeet....................200"<<endl;
            cout<<"7.Cokatiel....................1000"<<endl;
            cout<<"8.Doves.......................450"<<endl;
            cout<<"9.Pionus......................700"<<endl;
            cout<<"10.Samoyed....................800"<<endl;
        }


};


class catvariety
{
    public:
        void getcatvariety()
        {
            cout<<"List of Cats and their Prices"<<endl;
            cout<<"1.Ashera......................17000"<<endl;
            cout<<"2.Peterbald...................50000"<<endl;
            cout<<"3.Savannah....................81000"<<endl;
            cout<<"4.Bengal......................14000"<<endl;
            cout<<"5.Persian.....................21000"<<endl;
            cout<<"6.Sphynx......................8000"<<endl;
            cout<<"7.California Spangled.........20000"<<endl;
            cout<<"8.Maine Coon..................7000"<<endl;
            cout<<"9.Egyptian Mau................4000"<<endl;
            cout<<"10.Russian Blue...............8000"<<endl;
        }


};

class fishvariety
{
    public:
        void getfishvariety()
        {
            cout<<"List of Dogs and their Prices"<<endl;
            cout<<"1.Dollar fish.................150"<<endl;
            cout<<"2.Betta fish..................500"<<endl;
            cout<<"3.Gupy fish...................700"<<endl;
            cout<<"4.Gold fish...................1000"<<endl;
            cout<<"5.Koi fish.....................800"<<endl;
            cout<<"6.Oscar fish...................2000"<<endl;
            cout<<"7.Cichild......................700"<<endl;
            cout<<"8.Angelfish....................900"<<endl;
            cout<<"9.Clown fish...................3000"<<endl;
            cout<<"10.Black ghost.................7500"<<endl;
        }


};

class rabbitvariety
{
    public:
        void getrabbitvariety()
        {
            cout<<"List of Rabbits and their Prices"<<endl;
            cout<<"1.Lion head rabbit............7000"<<endl;
            cout<<"2.Dutch rabbit................1500"<<endl;
            cout<<"3.Netherland Dwarf rabbit.....2100"<<endl;
            cout<<"4.Holland lop.................3000"<<endl;
            cout<<"5.Angora rabbit...............4000"<<endl;
            cout<<"6.English lop.................1000"<<endl;
            cout<<"7.Jersey wooly rabbit.........8000"<<endl;
            cout<<"8.American rabbit.............6000"<<endl;
            cout<<"9.Belgian Hare rabbit.........1700"<<endl;
            cout<<"10.Blance de Hotot............4000"<<endl;
        }


};
int main()
{
// Welcoming them to the page
    cout << "\n\tHello welcome to pet hub \n" << endl;


    while(1)
    {
        int option;
        printf("\t\tMENU\n\n1.TO KNOW THE LIST OF DOGS AND PRICES \n2. TO KNOW THE LIST OF CATS AND PRICES\n");
        printf("3.TO KNOW THE LIST OF BIRDS AND PRICES \n4. TO KNOW THE LIST OF FISH AND PRICES\n");
         printf("5.TO KNOW THE LIST OF RABBITS AND PRICES \n6. DOG 'DAY CARE' DETAILS\n");
         printf("7.CAT 'DAY CARE' DETAILS\n8. BIRDS 'DAY CARE' DETAILS\n");
         printf("9.FISH 'DAY CARE' DETAILS\n10. RABBITS 'DAY CARE' DETAILS\n");
         printf("11.OFFERS DETAILS\n12.PAYMENT DETAILS\n");
         printf("13.EXIT\n\n");
        printf("Enter your OPTION to explore our PETHUB\n\n ");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
                {
                    dogvariety d;
                    d.getdogvariety();
                    break;
                }
            case 2:
                {
                    catvariety c;
                    c.getcatvariety();
                    break;
                }
            case 3:
                {
                    birdvariety b;
                    b.getbirdvariety();
                    break;
                }
            case 4:
                    {
                    fishvariety f;
                    f.getfishvariety();
                    break;
                    }
            case 5:
                    {
                    rabbitvariety r;
                    r.getrabbitvariety();
                    break;
                    }
            case 6:
                    {
                    dog d1;
                    d1.getdog();
                    break;
                    }
            case 7:
                {
                    cat c1;
                    c1.getcat();
                    break;
                }
            case 8:
                    {
                    bird b1;
                    b1.getbird();
                    break;
                    }
            case 9:
                    {
                    fish f1;
                    f1.getfish();
                    break;
                    }
            case 10:
                    {
                    rabbit r1;
                    r1.getrabbit();
                    break;
                    }
            case 11:
                    {
                    offerdetails o;
                    o.getdetails();
                    break;
                    }
            case 12:
                    {
                    payment p;
                    p.getpayment();
                    break;
                    }
            case 13:
                {
                    printf("THANK YOU! HAVE A GOOD DAY\n");
                    exit(0);
                    break;
                }
            default:
                printf("Oh no! that wasn't a valid option");
                    break;
}

}
return 0;
}
