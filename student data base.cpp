#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
using namespace std;
int Add();
int List();
int Modify();
int Delete();
int Exit();

int main()
{
    

    char choice;
    
    while(1)
    {
        system("cls");

        cout << "\t\t====== STUDENT DATABASE MANAGEMENT SYSTEM ======";
        
        cout << "\n \t\t\t 1. Add    Records";
        cout << "\n \t\t\t 2. List   Records";
        cout << "\n \t\t\t 3. Modify Records";
        cout << "\n \t\t\t 4. Delete Records";
        cout << "\n \t\t\t 5. Exit   Program";
        cout << "\n\n";
        cout << "\t\t\t Select Your Choice : ";
        fflush(stdin);
		choice = getche();
        switch(choice)
        {
            case '1' : Add();
                       break;
            
            case '2' : List();
                       break;
            
            case '3' : Modify();
                       break;

            case '4': Delete();
                      break;

            case '5': Exit();
                      
        }
    }


    system("pause");
    return 0;
}
int Add() 
{
           char another;
           struct student
           {
             char first_name[50], last_name[50];
             char course[100];
             char another;
             int section;
           };

           struct student e;
             char xfirst_name[50], xlast_name[50];
             long int recsize;
             recsize = sizeof(e);

            
		    another ='Y';
            
                system("cls");
                cout << "Enter the Firt Name : \n";
                cin >> e.first_name;
                cout << "Enter the Last Name : \n";
                cin >> e.last_name;
                cout << "Enter the Course    : \n";
                cin >> e.course;
                cout << "Enter the Section   : \n";
                cin >> e.section;
                cout << "\n Add Another Record (Y/N) ";
                cin >> e.another;
				if(another == 'Y' || another == 'y')
                {
                	cout<<'case 1';
		    	}
            
};

int List()
{           
            struct student
    {
        char first_name[50], last_name[50];
        char course[100];
        int section;
    };

    struct student e;
    char xfirst_name[50], xlast_name[50];
    long int recsize;
    recsize = sizeof(e);
 
            system("cls");
		    cout << "=== View the Records in the Database ===";
            cout << "\n";
            while ((&e,recsize,1) == 1)
            {
                cout << "\n";
                cout <<"\n" << e.first_name << setw(10)  << e.last_name;
                cout << "\n";
                cout <<"\n" <<e.course <<  setw(8)  << e.section;
            }
            cout << "\n\n";
            system("pause");
            
};

int Modify()
{       
        char another;
        struct student
          {
            char first_name[50], last_name[50];
            char course[100];
            int section;
          };

        struct student e;
            char xfirst_name[50], xlast_name[50];
            long int recsize;
            recsize = sizeof(e);

			system("cls");
            another = 'Y';
            while (another == 'Y'|| another == 'y')
            {
                cout << "\n Enter the last name of the student : ";
                cin >> xlast_name;

                
                while ((&e,recsize,1) == 1)
                {
                    if (strcmp(e.last_name,xlast_name) == 0)
                    {
                        cout << "Enter new the Firt Name : ";
                        cin >> e.first_name;
                        cout << "Enter new the Last Name : ";
                        cin >> e.last_name;
                        cout << "Enter new the Course    : ";
                        cin >> e.course;
                        cout << "Enter new the Section   : ";
                        cin >> e.section;
                        
                        (&e,recsize,1);
                        break;
                    }
                    else
                        cout<<"record not found";
                }
                cout << "\n Modify Another Record (Y/N) ";
                another = getchar();
            }
};

int Delete()
{           char another;
            struct student
            {
              char first_name[50], last_name[50];
              char course[100];
              int section;
            };

            struct student e;
              char xfirst_name[50], xlast_name[50];
              long int recsize;
              recsize = sizeof(e);

			system("cls");
            another = 'Y';
            while (another == 'Y'|| another == 'y')
            {
                cout << "\n Enter the last name of the student to delete : ";
                cin >> xlast_name;

                
                while ( (&e, recsize,1) == 1)

                    if (strcmp(e.last_name,xlast_name) != 0)
                    {
                       (&e,recsize,1);
                    }
                remove("users.txt");
                rename("temp.dat","users.txt");


                cout << "\n Delete Another Record (Y/N) ";
                another = getchar();
            }

};

int Exit()
{
	            cout << "\n\n";
                cout << "\t\t     THANK YOU FOR USING THIS SOFTWARE";
                cout << "\n\n";
                exit(0);
}
