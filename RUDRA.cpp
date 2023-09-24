//      ONLINE RE-PAIRING SERVICES 
// in which we can get the info of labour which are near me 
#include<iostream>
using namespace std;
// New Project

// DONE  

// Finally done To get And Display an information of Labour

#include<iostream>                      // Done Final Working Superb
#include<stdio.h>
#include<string.h>
using namespace std;

class La_bour                            // class Labour
{ 
    public:
    int i,option;
     int Choic_e;
     int Choic_e1;
     int count;
     int opt;
    struct 
    {
        string ID[100];
        string Name[500];
        string add[500];
        int phone_number[100];
        int Rate[100];

    }S[50]; 
    // Fill Function has Started
    void Fill_data()
    {
        cout<<"\n Enter the Detals: ";
        do      
         {
        cout<<"\n 1. Name of the Labour  ";
        cout<<"\n 2. Address of the Labour  ";
        cout<<"\n 3. ID of the Labour  ";
        cout<<"\n 4. Phone Number of the Labour  ";
        cout<<"\n 5. Rate of the Labour";

        cout<<"\n 6. Back ";

        cout<<"\n  Enter your Choice :: ";
        cin>>Choic_e;
        switch (Choic_e)
        {
        case 1:
            cout<<"\n ";
            cout<<"\n  You Have Entered For Filling the NAME of the Labour       :: ";
            cout<<"\n Enter the amount of Member which you want to store deatils :: ";
            cin>>count;
            cout<<"\n  #1.NOTE ::  *Do not used space ,You can use (_) in Between Name and Surname * ";

            for (int i = 0; i < count; i++)
          {
           printf("\n Enter  Name  ::");
           // cout<<"\n Enter the Name ::";
           scanf("%s",S[i].Name);
           //cin>>S[i].Name;
          }
          cout<<"\n ";
            break;


            case 2:
            cout<<"\n ";
            cout<<"\n  You Have Entered For Filling the ADDRESS of the Labour        :: ";
            cout<<"\n Enter the amount of Member which you want to store deatils :: ";
            cin>>count;
            cout<<"\n  #1.NOTE ::  *Do not used space ,You can use (_) in Between Name and Surname * ";
            for (int i = 0; i < count; i++)
          {
           printf("\n Enter Address  :: ");
           scanf("%s",S[i].add);
          }
          cout<<"\n ";
            break;

            case 3:
            cout<<"\n ";
            cout<<"\n  You Have Entered For Filling the ID of the Labour       :: ";
            cout<<"\n Enter the amount of Member which you want to store deatils :: ";
            cin>>count;
            for (int i = 0; i < count; i++)
          {
           printf("\n Enter ID      ::  ");
           scanf("%s",S[i].ID);
          }
          cout<<"\n ";
            break;

          case 4:
            cout<<"\n ";
            cout<<"\n  You Have Entered For Filling the PHONE NUMBER of the Labour         :: ";
            cout<<"\n Enter the amount of Member which you want to store deatils :: ";
            cin>>count;
            for (int i = 0; i < count; i++)
          {
           printf("\n Enter Phone Number   ::  ");
           scanf("%s",S[i].phone_number);
          }
          cout<<"\n";
            break;

              case 5:
            cout<<"\n";
            cout<<"\n  You Have Entered For Filling the RATE of the Labour       :: ";
            cout<<"\n Enter the amount of Member which you want to store deatils :: ";
            cin>>count;
            for (int i = 0; i < count; i++)
          {
           printf("\n Enter Rate   ::   ");
           scanf("%s",S[i].Rate);
          }
            break;

        
        default:
            break;
        }    
        } while (Choic_e<6);                    
    }                                       // Fill function has Completed
        // Done Here 

    void Display_data()
    {

        do      
         {
        cout<<"\n 1. Name of the Labour  ";
        cout<<"\n 2. Address of the Labour  ";
        cout<<"\n 3. ID of the Labour  ";
        cout<<"\n 4. Phone Number of the Labour  ";
        cout<<"\n 5. Rate of the Labour";

        cout<<"\n 6. Back ";

        cout<<"\n  Enter your Choice :: ";
        cin>>Choic_e;
        switch (Choic_e)
        {
        case 1:
            cout<<"\n ";
            cout<<"\n  You Have Entered For Displaying  the NAME of the Labour       :: ";
            cout<<"\n Enter the amount of Member which you want to store deatils :: ";
            cin>>count;

            for (int i = 0; i < count; i++)
          {
           printf("\n Name is  :: %s",S[i].Name);
           //std::cout<<S[i].Name;
          }
          cout<<"\n ";
            break;


            case 2:
            cout<<"\n ";
            cout<<"\n  You Have Entered For Displaying  the ADDRESS of the Labour        :: ";
            cout<<"\n Enter the amount of Member which you want to store deatils :: ";
            cin>>count;
            for (int i = 0; i < count; i++)
          {
           printf("\n Address is :: %s",S[i].add);
          }
          cout<<"\n ";
            break;

            case 3:
            cout<<"\n ";
            cout<<"\n  You Have Entered For Displaying  the ID of the Labour       :: ";
            cout<<"\n Enter the amount of Member which you want to store deatils :: ";
            cin>>count;
            for (int i = 0; i < count; i++)
          {
           printf("\n ID is :: %s",S[i].ID);
          }
          cout<<"\n ";
            break;

          case 4:
            cout<<"\n ";
            cout<<"\n  You Have Entered For Displaying  the PHONE NUMBER of the Labour         :: ";
            cout<<"\n Enter the amount of Member which you want to store deatils :: ";
            cin>>count;
            for (int i = 0; i < count; i++)
          {
           printf("\n Phone Number is  :: %s",S[i].phone_number);
          }
          cout<<"\n";
            break;

              case 5:
            cout<<"\n";
            cout<<"\n  You Have Entered For Displaying  the RATE of the Labour       :: ";
            cout<<"\n Enter the amount of Member which you want to store deatils :: ";
            cin>>count;
            for (int i = 0; i < count; i++)
          {
           printf("\n Rate is  :: %s",S[i].Rate);
          }
            break;
        default:
            break;
        }    
        } while (Choic_e<6);  
                                            // Display function has completed 
    }

    void GetInfo_11()

    {
        do
        {
        cout<<"\n Getting Details  of the Labour :: ";
        cout<<"\n So we have 5 labour for that work ";
            cout<<"\n  Name Of the Labours         ::    ";
            cout<<"\n 1.Sunny Patil  ";
            cout<<"\n 2.Shyam Sharma ";
            cout<<"\n 3.Kunal Verma  ";
            cout<<"\n 4.Parth Patil  ";
            cout<<"\n 5.Shubham Deshmukh ";
            cout<<"\n 6. Back .....................";
            cout<<"\n ";
            cout<<"\n ";
            cout<<"\n Enter the type of Information which you want :: ";
        cin>>opt; 
        cout<<"\n ";
        
        switch (opt)
        {
            case 1:
            cout<<"\n 1. Name Of the Labour         ::  Sunny Patil";
            cout<<"\n 2. Phone Number of the Labour ::  8755412356 "; 
            cout<<"\n 3. Rate of the Labour         ::  850 rs ";
            cout<<"\n ";
            break;

            case 2:
            cout<<"\n 1. Name Of the Labour         ::  Shyam Sharma";
            cout<<"\n 2. Phone Number of the Labour ::  87451263892 "; 
            cout<<"\n 3. Rate of the Labour         ::  840 rs ";
            cout<<"\n ";
            break;


            case 3:
            cout<<"\n 1. Name Of the Labour         ::  Kunal Verma ";
            cout<<"\n 2. Phone Number of the Labour ::  87221345689"; 
            cout<<"\n 3. Rate of the Labour         ::  825 rs ";
            cout<<"\n ";
            break;

            case 4:
            cout<<"\n 1. Name Of the Labour         ::  Parth Patil ";
            cout<<"\n 2. Phone Number of the Labour ::  98567423216 "; 
            cout<<"\n 3. Rate of the Labour         ::  800 rs ";
            cout<<"\n ";
            break;

            case 5:
            cout<<"\n 1. Name Of the Labour         ::  Shubham Deshmukh ";
            cout<<"\n 2. Phone Number of the Labour ::  9898412356 "; 
            cout<<"\n 3. Rate of the Labour         ::  750 rs ";
            cout<<"\n ";
            break;

        default:
            break;
        }       
        } while (opt<6);
        
    }  // Orignal set of Labour set 1 is completed 


void GetInfo_22()
    {
        do
        {
        cout<<"\n Getting Details  of the Labour :: ";
        cout<<"\n So we have 5 labour for that work ";
            cout<<"\n  Name Of the Labours         ::    ";
            cout<<"\n 1.Suresh Patil    ";
            cout<<"\n 2.Shyam Shaha     ";
            cout<<"\n 3.Kunal Sokanke   ";
            cout<<"\n 4.Om Mane         ";
            cout<<"\n 5.Lakhan Deshmukh ";
            cout<<"\n 6. Back .....................";
            cout<<"\n ";
            cout<<"\n ";
            cout<<"\n Enter the type of Information which you want :: ";
        cin>>opt; 
        cout<<"\n ";
        
        switch (opt)
        {
            case 1:
            cout<<"\n 1. Name Of the Labour         ::  Suresh Patil";
            cout<<"\n 2. Phone Number of the Labour ::  8755254352 "; 
            cout<<"\n 3. Rate of the Labour         ::  900 rs ";
            cout<<"\n ";
            break;

            case 2:
            cout<<"\n 1. Name Of the Labour         ::  Shyam Shaha";
            cout<<"\n 2. Phone Number of the Labour ::  8788886389 "; 
            cout<<"\n 3. Rate of the Labour         ::  880 rs ";
            cout<<"\n ";
            break;


            case 3:
            cout<<"\n 1. Name Of the Labour         ::  Kunal Sokanke ";
            cout<<"\n 2. Phone Number of the Labour ::  8722134689"; 
            cout<<"\n 3. Rate of the Labour         ::  875 rs ";
            cout<<"\n ";
            break;

            case 4:
            cout<<"\n 1. Name Of the Labour         ::  Om Mane ";
            cout<<"\n 2. Phone Number of the Labour ::  9967423216 "; 
            cout<<"\n 3. Rate of the Labour         ::  800 rs ";
            cout<<"\n ";
            break;

            case 5:
            cout<<"\n 1. Name Of the Labour         ::  Lakhan Deshmukh ";
            cout<<"\n 2. Phone Number of the Labour ::  6525485120 "; 
            cout<<"\n 3. Rate of the Labour         ::  650 rs ";
            cout<<"\n ";
            break;

        
        default:
            break;
        }       

        } while (opt<6);
        
    }    // Orignal set of Labour set 2 is completed

    void GetInfo_33()
    {
        do
        {
        cout<<"\n Getting Details  of the Labour :: ";
        cout<<"\n So we have 5 labour for that work ";
            cout<<"\n  Name Of the Labours         ::    ";
            cout<<"\n 1.Lokesh Lochne";
            cout<<"\n 2.Priyam Pyare ";
            cout<<"\n 3.Kunal Ingle  ";
            cout<<"\n 4.Swayam Patil ";
            cout<<"\n 5.Lakhan Deshmukh ";
            cout<<"\n 6. Back .....................";
            cout<<"\n ";
            cout<<"\n ";
            cout<<"\n Enter the type of Information which you want :: ";
        cin>>opt; 
        cout<<"\n ";
        
        switch (opt)
        {
            case 1:
            cout<<"\n 1. Name Of the Labour         ::  Lokesh Lochne";
            cout<<"\n 2. Phone Number of the Labour ::  8755254352 "; 
            cout<<"\n 3. Rate of the Labour         ::  900 rs ";
            cout<<"\n ";
            break;

            case 2:
            cout<<"\n 1. Name Of the Labour         ::  Priyam Pyare";
            cout<<"\n 2. Phone Number of the Labour ::  877776389 "; 
            cout<<"\n 3. Rate of the Labour         ::  880 rs ";
            cout<<"\n ";
            break;


            case 3:
            cout<<"\n 1. Name Of the Labour         ::  Kunal Ingle ";
            cout<<"\n 2. Phone Number of the Labour ::  8722134689"; 
            cout<<"\n 3. Rate of the Labour         ::  875 rs ";
            cout<<"\n ";
            break;

            case 4:
            cout<<"\n 1. Name Of the Labour         ::  Swayam Patil ";
            cout<<"\n 2. Phone Number of the Labour ::  9967466616 "; 
            cout<<"\n 3. Rate of the Labour         ::  850 rs ";
            cout<<"\n ";
            break;

            case 5:
            cout<<"\n 1. Name Of the Labour         ::  Lakhan Deshmukh ";
            cout<<"\n 2. Phone Number of the Labour ::  9856231444 "; 
            cout<<"\n 3. Rate of the Labour         ::  650 rs ";
            cout<<"\n ";
            break;
        default:
            break;
        }       
        } while (opt<6);  
    }     // Orignal set of Labour set 3 is completed


void GetInfo_44()
    {
        do
        {
        cout<<"\n Getting Details  of the Labour :: ";
        cout<<"\n So we have 5 labour for that work ";
            cout<<"\n  Name Of the Labours         ::    ";
            cout<<"\n 1.Atmaram Shelke    ";
            cout<<"\n 2.Shivshankar Nagre ";
            cout<<"\n 3.Avinash Amte      ";
            cout<<"\n 4.Pratik Narkhede   ";
            cout<<"\n 5.Shrinivas Sawant  ";
            cout<<"\n 6. Back .....................";
            cout<<"\n ";
            cout<<"\n ";
            cout<<"\n Enter the type of Information which you want :: ";
        cin>>opt; 
        cout<<"\n ";
        
        switch (opt)
        {
            case 1:
            cout<<"\n 1. Name Of the Labour         ::  Atmaram Shelke";
            cout<<"\n 2. Phone Number of the Labour ::  9985741263 "; 
            cout<<"\n 3. Rate of the Labour         ::  910 rs ";
            cout<<"\n ";
            break;

            case 2:
            cout<<"\n 1. Name Of the Labour         ::  Shivshankar Nagre ";
            cout<<"\n 2. Phone Number of the Labour ::  8766528542 "; 
            cout<<"\n 3. Rate of the Labour         ::  850 rs ";
            cout<<"\n ";
            break;


            case 3:
            cout<<"\n 1. Name Of the Labour         ::  Avinash Amte ";
            cout<<"\n 2. Phone Number of the Labour ::  7057196580"; 
            cout<<"\n 3. Rate of the Labour         ::  800 rs ";
            cout<<"\n ";
            break;

            case 4:
            cout<<"\n 1. Name Of the Labour         ::  Pratik Narkhede ";
            cout<<"\n 2. Phone Number of the Labour ::  7054128963 "; 
            cout<<"\n 3. Rate of the Labour         ::  750 rs ";
            cout<<"\n ";
            break;

            case 5:
            cout<<"\n 1. Name Of the Labour         ::  Shrinivas Sawant  ";
            cout<<"\n 2. Phone Number of the Labour ::  9922145263 "; 
            cout<<"\n 3. Rate of the Labour         ::  600 rs ";
            cout<<"\n ";
            break;
        default:
            break;
        }       
        } while (opt<6);  
    }               // Orignal set of Labour set 4 is completed

    void GetInfo_55()
    {
        do
        {
        cout<<"\n Getting Details  of the Labour :: ";
        cout<<"\n So we have 5 labour for that work ";
            cout<<"\n  Name Of the Labours         ::    ";
            cout<<"\n 1.Tejas Wanare    ";
            cout<<"\n 2.Abhishek Jadhav ";
            cout<<"\n 3.Avinash Khadse  ";
            cout<<"\n 4.Pratik Shinde   ";
            cout<<"\n 5.Atharv Aarakh   ";
            cout<<"\n 6. Back .....................";
            cout<<"\n ";
            cout<<"\n ";
            cout<<"\n Enter the type of Information which you want :: ";
        cin>>opt; 
        cout<<"\n ";
        
        switch (opt)
        {
            case 1:
            cout<<"\n 1. Name Of the Labour         ::  Tejas Wanare ";
            cout<<"\n 2. Phone Number of the Labour ::  7775741263 "; 
            cout<<"\n 3. Rate of the Labour         ::  1000 rs ";
            cout<<"\n ";
            break;

            case 2:
            cout<<"\n 1. Name Of the Labour         ::  Abhishek Jadhav ";
            cout<<"\n 2. Phone Number of the Labour ::  9899528542 "; 
            cout<<"\n 3. Rate of the Labour         ::  980 rs ";
            cout<<"\n ";
            break;


            case 3:
            cout<<"\n 1. Name Of the Labour         ::  Avinash Khadse  ";
            cout<<"\n 2. Phone Number of the Labour ::  8057196580"; 
            cout<<"\n 3. Rate of the Labour         ::  950 rs ";
            cout<<"\n ";
            break;

            case 4:
            cout<<"\n 1. Name Of the Labour         ::  Pratik Shinde ";
            cout<<"\n 2. Phone Number of the Labour ::  8596128963 "; 
            cout<<"\n 3. Rate of the Labour         ::  800 rs ";
            cout<<"\n ";
            break;

            case 5:
            cout<<"\n 1. Name Of the Labour         ::  Atharv Aarakh ";
            cout<<"\n 2. Phone Number of the Labour ::  8845145263 "; 
            cout<<"\n 3. Rate of the Labour         ::  750 rs ";
            cout<<"\n ";
            break;
        default:
            break;
        }       
        } while (opt<6);  
    }                // Orignal set of Labour set 5 is completed

    void GetInfo_66()
    {
        do
        {
        cout<<"\n Getting Details  of the Labour :: ";
        cout<<"\n So we have 5 labour for that work ";
            cout<<"\n  Name Of the Labours         ::    ";
            cout<<"\n 1.Manav Singh     ";
            cout<<"\n 2.Abhishek Gadhve ";
            cout<<"\n 3.Shrikant Kapre  ";
            cout<<"\n 4.Shivam Tumbe    ";
            cout<<"\n 5.Mahesh Ingle    ";
            cout<<"\n 6. Back .....................";
            cout<<"\n ";
            cout<<"\n ";
            cout<<"\n Enter the type of Information which you want :: ";
        cin>>opt; 
        cout<<"\n ";
        
        switch (opt)
        {
            case 1:
            cout<<"\n 1. Name Of the Labour         ::  Manav Singh  ";
            cout<<"\n 2. Phone Number of the Labour ::  9889741263 "; 
            cout<<"\n 3. Rate of the Labour         ::  1050 rs ";
            cout<<"\n ";
            break;

            case 2:
            cout<<"\n 1. Name Of the Labour         ::  Abhishek Gadhve";
            cout<<"\n 2. Phone Number of the Labour ::  7070528542 "; 
            cout<<"\n 3. Rate of the Labour         ::  1000 rs ";
            cout<<"\n ";
            break;

            case 3:
            cout<<"\n 1. Name Of the Labour         ::  Shrikant Kapre  ";
            cout<<"\n 2. Phone Number of the Labour ::  8888196580"; 
            cout<<"\n 3. Rate of the Labour         ::  950 rs ";
            cout<<"\n ";
            break;

            case 4:
            cout<<"\n 1. Name Of the Labour         :: Shivam Tumbe ";
            cout<<"\n 2. Phone Number of the Labour ::  9999128963 "; 
            cout<<"\n 3. Rate of the Labour         ::  800 rs ";
            cout<<"\n ";
            break;

            case 5:
            cout<<"\n 1. Name Of the Labour         ::  Mahesh Ingle  ";
            cout<<"\n 2. Phone Number of the Labour ::  9988145263 "; 
            cout<<"\n 3. Rate of the Labour         ::  750 rs ";
            cout<<"\n ";
            break;
        default:
            break;
        }       
        } while (opt<6);  
    }               // Orignal set of Labour set 6 is completed

    void GetInfo_77()
    {
        do
        {
        cout<<"\n Getting Details  of the Labour :: ";
        cout<<"\n So we have 5 labour for that work ";
            cout<<"\n  Name Of the Labours         ::    ";
            cout<<"\n 1.Shantaram Makde  ";
            cout<<"\n 2.Sonu Kolhe       ";
            cout<<"\n 3.Shrikant Patil   ";
            cout<<"\n 4.Aavi Bihade      ";
            cout<<"\n 5.Soham Pahurkar   ";
            cout<<"\n 6. Back .....................";
            cout<<"\n ";
            cout<<"\n ";
            cout<<"\n Enter the type of Information which you want :: ";
        cin>>opt; 
        cout<<"\n ";
        
        switch (opt)
        {
            case 1:
            cout<<"\n 1. Name Of the Labour         ::  Shantaram Makde  ";
            cout<<"\n 2. Phone Number of the Labour ::  9889741263 "; 
            cout<<"\n 3. Rate of the Labour         ::  1050 rs ";
            cout<<"\n ";
            break;

            case 2:
            cout<<"\n 1. Name Of the Labour         ::  Sonu Kolhe";
            cout<<"\n 2. Phone Number of the Labour ::  7070528542 "; 
            cout<<"\n 3. Rate of the Labour         ::  1020 rs ";
            cout<<"\n ";
            break;

            case 3:
            cout<<"\n 1. Name Of the Labour         ::  Shrikant Patil  ";
            cout<<"\n 2. Phone Number of the Labour ::  9999196580"; 
            cout<<"\n 3. Rate of the Labour         ::  980 rs ";
            cout<<"\n ";
            break;

            case 4:
            cout<<"\n 1. Name Of the Labour         ::  Aavi Bihade ";
            cout<<"\n 2. Phone Number of the Labour ::  7777128963 "; 
            cout<<"\n 3. Rate of the Labour         ::  820 rs ";
            cout<<"\n ";
            break;

            case 5:
            cout<<"\n 1. Name Of the Labour         ::  Soham Pahurkar ";
            cout<<"\n 2. Phone Number of the Labour ::  9307520664 "; 
            cout<<"\n 3. Rate of the Labour         ::  780rs ";
            cout<<"\n ";
            break;
        default:
            break;
        }       
        } while (opt<6);  
    }                                           // Orignal set of Labour set 7 is completed

    void GetInfo_88()
    {
        do
        {
        cout<<"\n Getting Details  of the Labour ::      ";
        cout<<"\n So we have 5 labour for that work      ";
            cout<<"\n  Name Of the Labours         ::    ";
            cout<<"\n 1.Laximan Makne   ";
            cout<<"\n 2.Sonu Kolhe      ";
            cout<<"\n 3.Arihant Patil   ";
            cout<<"\n 4.Sunil Sontakke  ";
            cout<<"\n 5.Vinit Kasture   ";
            cout<<"\n 6. Back .....................";
            cout<<"\n ";
            cout<<"\n ";
            cout<<"\n Enter the type of Information which you want :: ";
        cin>>opt; 
        cout<<"\n ";
        
        switch (opt)
        {
            case 1:
            cout<<"\n 1. Name Of the Labour         ::  Laximan Makne  ";
            cout<<"\n 2. Phone Number of the Labour ::  8988774512 "; 
            cout<<"\n 3. Rate of the Labour         ::  1100 rs ";
            cout<<"\n ";
            break;

            case 2:
            cout<<"\n 1. Name Of the Labour         ::  Sonu Kolhe";
            cout<<"\n 2. Phone Number of the Labour ::  7070528542 "; 
            cout<<"\n 3. Rate of the Labour         ::  1020 rs ";
            cout<<"\n ";
            break;

            case 3:
            cout<<"\n 1. Name Of the Labour         ::  Arihant Patil ";
            cout<<"\n 2. Phone Number of the Labour ::  9999198899 "; 
            cout<<"\n 3. Rate of the Labour         ::  980 rs ";
            cout<<"\n ";
            break;

            case 4:
            cout<<"\n 1. Name Of the Labour         ::  Sunil Sontakke";
            cout<<"\n 2. Phone Number of the Labour ::  7676765656 "; 
            cout<<"\n 3. Rate of the Labour         ::  880 rs ";
            cout<<"\n ";
            break;

            case 5:
            cout<<"\n 1. Name Of the Labour         ::  Vinit Kasture  ";
            cout<<"\n 2. Phone Number of the Labour ::  9307580795 "; 
            cout<<"\n 3. Rate of the Labour         ::  800rs ";
            cout<<"\n ";
            break;
        default:
            break;
        }       
        } while (opt<6);  
    }                                            // Orignal set of Labour set 8 is completed


void Simultaneus()
{
    int ty;
    int mod;
    do
           {
            
           cout<<"\n We Have Total 5 Types of Repairing Labor ";
           cout<<"\n  1. Electrician       ";
           cout<<"\n  2. Filter Repairing  ";
           cout<<"\n  3. Bor Repairing     ";
           cout<<"\n  4. Plumber           ";
           cout<<"\n  5. Key Repairing     ";
           cout<<"\n  6. Painter Services  ";
           cout<<"\n  7. Cleaner           ";
           cout<<"\n  8. Civil Services    ";
           cout<<"\n  9. Gardner           ";
           cout<<"\n 10. Gas Repairing     ";
           cout<<"\n 11. Lift Services     ";
           cout<<"\n 12. Cook              ";
           cout<<"\n 13. Catering Services ";
           cout<<"\n 14. Back              ";
           cout<<"\n";
           cout<<"\n";
           cout<<"\n Choose which type  of labor WHich you want   ::   ";
           cin>>ty;
           cout<<"\n";

           switch (ty)
           {
           case 1:
           
           do
           {
            
            cout<<"\n For Electrician we have following groups....";
           cout<<"\n  1. Group 1 ";
           cout<<"\n  2. Group 2 ";
           cout<<"\n  3. Back   ";


           cout<<"\n We have 2 Groups   ::                        ";
           cin>>mod;
           switch (mod)
           {
           case 1:
           GetInfo_11();
            break;

            case 2:
            GetInfo_22();
            break;
           
           default:
            break;
           }
           } while (mod<3);
           
           break;

           case 2:
           cout<<"\n For Filter Repairing we have following ...     ";
           GetInfo_33();
           break;

           case 3:
           cout<<"\n For Bor Repairing we have following ...        ";
           GetInfo_55();
           break;

           case 4:
           cout<<"\n For Plumber we have following ...              ";
           GetInfo_77();
           break;

            case 5:
           cout<<"\n For Key Repairing we have following ...         ";
           GetInfo_66();
           break;

            case 6:
           cout<<"\n For Painter Services we have following ....     ";
           GetInfo_22();
           break;

            case 7:
           cout<<"\n For Cleaner we have following ......            ";
           GetInfo_88();
           break;

            case 8:
           cout<<"\n For Civil Services we have following ...        ";
           GetInfo_77();
           break;

            case 9:
           cout<<"\n For Gardner we have following ....              ";
           GetInfo_44();
           break;

            case 10:
            do
            {
                    cout<<"\n For Gas Repairing Services  we have following... ";
                    cout<<"\n 1. Repairing Services    ";
                    cout<<"\n 2. Installation Services ";
                    cout<<"\n 3. Back  ";
                    cout<<"\n Enter your choice    ::  ";
                    cin>>mod;

           switch (mod)
           {
                case 1:
                    GetInfo_55();
                break;
           
                case 2:
                    GetInfo_88();
                break;

            default:
            break;
           } 
            } while (mod<3);
           break;

            case 11:
           cout<<"\n For Lift Services we have following.....         ";
           GetInfo_55();
           break;

           case 12:
           cout<<"\n For Cook we have following......                 ";
           GetInfo_11();
           break;

          case 13:
           cout<<"\n For Catering Services we have following.......... ";
           GetInfo_33();
           break;
       
           default:
            break;
           }

           } while (ty<14);
}
    // Final 
    void Final()
    {
        do
        {
            cout<<"\n   Welcome...";
            cout<<"\n To the Labour INFORMATION and DEATILS ";
            cout<<"\n 1. Fill the Data   ";
            cout<<"\n 2. Display the Data   ( Which you Fill ) ";
            cout<<"\n 3. Display the Orignal Data ";
            cout<<"\n 4. Back.          ";
            cout<<"\n Enter your Option ";
            cin>>option;
            switch (option)
            {
                case 1:
                cout<<"\n You have Choose the option for Filling the Data :: ";
                Fill_data();
                cout<<"\n";
                break;

                case 2:
                cout<<"\n You have Choose the option for Displaying the Data :: ";
                Display_data();
                cout<<"\n";
                break;

                case 3:
                cout<<"\n You have Choose the option for Displaying the  Orignal Data Which you Already Have  :: ";
                Simultaneus();

                break;
            
            default:
                break;
            }
        } while (option<4);
        
    }
    // Final Function has completed
};


//  COMPLETED  




class Place :public  La_bour                                                // class 2nd  Place 
{ 
    public:
 int pincode;
 unsigned char add[50];
 unsigned char place[50];




 void Display_Pune()                //Displaying the Locations or Areas in Pune 
 {
    int lo;
    int ty;
    do
    {
        cout<<"\n  Following Areas of Pune are as follows .. ";
        cout<<"\n ";
        cout<<"\n  1. Shivajinagar ";
        cout<<"\n  2. Katraj       ";
        cout<<"\n  3. Kothrud      ";
        cout<<"\n  4. Nighdi       ";
        cout<<"\n  5. Pimpri       ";
        cout<<"\n  6. Chakan       ";
        cout<<"\n  7. Wagholi      ";
        cout<<"\n  8. Viman Nagar  ";
        cout<<"\n  9. Kharadi      ";
        cout<<"\n 10. Bhosri       ";
        cout<<"\n 11. Back         ";
        cout<<"\n ";
        cout<<"\n ";
        cout<<"\n        Enter in which Area you want to get     ::   ";
        cin>>lo;

        switch (lo)
        {
        case 1:
           cout<<"\n   *....WELAOME TO SHIVAJINAGAR....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 2:
           cout<<"\n   *....WELAOME TO KATRAJ....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 3:
           cout<<"\n   *....WELAOME TO KOTHRUD....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 4:
           cout<<"\n   *....WELAOME TO NIGHDI....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 5:
           cout<<"\n   *....WELAOME TO PIMPRI....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 6:
           cout<<"\n   *....WELAOME TO CHAKAN....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 7:
           cout<<"\n   *....WELAOME TO WAGHOLI....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 8:
           cout<<"\n   *....WELAOME TO VIMAN NAGAR....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 9:
           cout<<"\n   *....WELAOME TO KHARADI....* ";
           cout<<"\n ";
           Final(); 
        break;

         case 10:
           cout<<"\n   *....WELAOME TO BHOSRI....* ";
           cout<<"\n ";
           Final(); 
        break;

        
        default:
            break;
        }
       

    } while (lo<11);
    
 }

void Display_Mumbai()                //Displaying the Locations or Areas in Mumbai 
 {
    int lo;
    int ty;
    do
    {
        cout<<"\n  Following Areas of Pune are as follows .. ";
        cout<<"\n ";
        cout<<"\n  1. Thane             ";
        cout<<"\n  2. Kalyan            ";
        cout<<"\n  3. Kurla             ";
        cout<<"\n  4. Bandra            ";
        cout<<"\n  5. Navi Mumbai       ";
        cout<<"\n  6. Borivali          ";
        cout<<"\n  7. Dombwali          ";
        cout<<"\n  8. Juhu              ";
        cout<<"\n  9. Andheri           ";
        cout<<"\n 10. Goregaon          ";
        cout<<"\n 11. Parel             ";
        cout<<"\n 12. Ghatkopar         ";
        cout<<"\n 13. Powai             ";
        cout<<"\n 14. South Mumbai      ";
        cout<<"\n 15. Chembur           ";
        cout<<"\n 16. Back              ";
        cout<<"\n ";
        cout<<"\n        Enter in which Area you want to get     ::   ";
        cin>>lo;

        switch (lo)
        {
        case 1:
           cout<<"\n   *....WELAOME TO THANE....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 2:
           cout<<"\n   *....WELAOME TO KALYAN....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 3:
           cout<<"\n   *....WELAOME TO KURLA....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 4:
           cout<<"\n   *....WELAOME TO BANDRA....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 5:
           cout<<"\n   *....WELAOME TO NAVI-MUMBAI....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 6:
           cout<<"\n   *....WELAOME TO BORIVALI....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 7:
           cout<<"\n   *....WELAOME TO JUHU....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 8:
           cout<<"\n   *....WELAOME TO VIMAN NAGAR....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 9:
           cout<<"\n   *....WELAOME TO ANDHERI....* ";
           cout<<"\n ";
           Final(); 
        break;

         case 10:
           cout<<"\n   *....WELAOME TO GOREGAON....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 11:
           cout<<"\n   *....WELAOME TO PAREL....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 12:
           cout<<"\n   *....WELAOME TO GHATKOPAR....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 13:
           cout<<"\n   *....WELAOME TO POWAI....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 14:
           cout<<"\n   *....WELAOME TO SOUTH-MUMBAI....* ";
           cout<<"\n ";
           Final(); 
        break;

        case 15:
           cout<<"\n   *....WELAOME TO CHEMBUR....* ";
           cout<<"\n ";
           Final(); 
        break;

        
        
        default:
            break;
        }
       

    } while (lo<16);
    
 
 }
};
// Classes Completed 

// Main Function Starts ....
int main ()
{
    int opt;
    Place P;

    do
    {
    cout<<"\n  **..WELCOME TO ONLINE RE-PAIRING SERVICES..** ";
    cout<<"\n 1. PUNE   ";
    cout<<"\n 2. MUMBAI ";
    cout<<"\n 3. Back   ";
    cout<<"\n ";
    cout<<"\n  ENTER YOUR OPTION ::  ";
    cin>>opt;
    switch (opt)
    {
        case 1:
           P.Display_Pune();
        break;

        case 2:
           P.Display_Mumbai();
        break;
    
        default:
        break;
    }

    } while (opt<3);

    return 0;
}
// Main Function Completed