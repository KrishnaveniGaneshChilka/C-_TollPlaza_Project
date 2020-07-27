#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<fstream>
using namespace std; 
class toll
  {
    int amount;
     
    public:
    
      void disp(long);
      void times();
  };
int main()
   { 
      long count;
     toll t;
     t.disp(count);
     t.times();
    
      char source[20],des[20],ch1,chata;
     int ch;
     ofstream fout;
     
     //fout.open("mn.txt");
     //static long count;
     while(1)
     {
     cout<<"\n\n\t\tVehical\n\n\t\t1.Car/Jeep/van\n\t\t2.Bus/truck";
     cout<<"\nEnter Type of Vehical...";
     cin>>ch;
     switch(ch)
       {
          case 1:
            { char chara;
              count ++;
              
              cout<<"p. pune to Palus : ";
              cout<<"n. pune to Nagpur : ";
              cout<<"k. pune to Kolhapur : ";
              cout<<"\n\nEnter ch...";
              cin>>ch1;
            switch(ch1)
              {
                 case 'p':
                    cout<<"\nTrip type......";
                    cout<<"\n\nS.Single trip\nR.Return trip  (same day)\nO.Round trip  (More than 24 hrs)";
                    cout<<"\n\nEnter ch...";
                    cin>>chara;
                    switch(chara)
                         {
                             case 'S':
                             
                     
                           fout.open("mn.txt");
                             fout<<"From pune to palus. \n ";
                             fout<<"Their are 2 toll plazas \n ";
                             fout<<"1. KHEDSHIVAPUR \n ";
                             fout<<"2. SATARA \n ";
                   
                          
                            
                                      fout<<"For khedshivapur : \n";
                                      cout<<"Ampunt is : 100\n";
                                      

                               
                                      fout<<"For satara : \n";
                                      fout<<"Ampunt is : 80\n";
                                      
   
                              fout<<"\n\t TOTAL IS : 180";
                            fout.close();

                           cout<<"From pune to palus. \n ";
                           cout<<"Their are 2 toll plazas \n ";
                           cout<<"1. KEDSHIVAPUR \n ";
                           cout<<"2. SATARA \n ";
                   
                          
                            
                                      cout<<"For khedshivapur : \n";
                                      cout<<"Ampunt is : 100\n";
                                      

                               
                                      cout<<"For satara : \n";
                                      cout<<"Ampunt is : 80\n";

                                   cout<<"\n\t TOTAL IS : 180";
                 break;      
                 case 'R':  fout.open("mn.txt");
                           fout<<"From pune to palus. \n ";
                           fout<<"Their are 2 toll plazas \n ";
                           fout<<"1. KEDSHIVAPUR \n ";
                           fout<<"2. SATARA \n ";
                   
                          
                            
                                      fout<<"For khedshivapur : \n";
                                      fout<<"Ampunt is : 200\n";
                                      

                               
                                      fout<<"For satara : \n";
                                      fout<<"Ampunt is : 150\n";
                                      
                                    fout<<"\n\t TOTAL IS : 350";
                                    fout.close();
                           cout<<"From pune to palus. \n ";
                           cout<<"Their are 2 toll plazas \n ";
                           cout<<"1. KEDSHIVAPUR \n ";
                           cout<<"2. SATARA \n ";
                   
                          
                            
                                      cout<<"For khedshivapur : \n";
                                      cout<<"Ampunt is : 200\n";
                                      

                               
                                      cout<<"For satara : \n";
                                      cout<<"Ampunt is : 150\n";
                                      
                                    cout<<"\n\t TOTAL IS : 350";
     
                 break;  
                 case 'O':
                   fout.open("mn.txt");
                           fout<<"From pune to palus. \n ";
                           fout<<"Their are 2 toll plazas \n ";
                           fout<<"1. KEDSHIVAPUR \n ";
                           fout<<"2. SATARA \n ";
                   
                          
                            
                                      fout<<"For khedshivapur : \n";
                                      fout<<"Ampunt is : 300\n";
                                      

                               
                                      fout<<"For satara : \n";
                                      fout<<"Ampunt is : 250\n";
                                      
                                    fout<<"\n\t TOTAL IS : 550";
                                    fout.close();
                           cout<<"From pune to palus. \n ";
                           cout<<"Their are 2 toll plazas \n ";
                           cout<<"1. KEDSHIVAPUR \n ";
                           cout<<"2. SATARA \n ";
                   
                          
                            
                                      cout<<"For khedshivapur : \n";
                                      cout<<"Ampunt is : 300\n";
                                      

                               
                                      cout<<"For satara : \n";
                                      cout<<"Ampunt is : 250\n";
                                      
                                    cout<<"\n\t TOTAL IS : 550";
                 break;      
               
            }
         
          break;
          


         case 'n':
           
                    cout<<"\nTrip type......";
                    cout<<"\n\nS.Single trip\nR.Return trip  (same day)\nO.Round trip  (More than 24 hrs)";
                    cout<<"\n\nEnter ch...";
                    cin>>chara;
                    switch(chara)
                         {
                             case 'S':

                     fout.open("mn.txt");
                           fout<<"From pune to nagpur. \n ";
                           fout<<"Their are 5 toll plazas \n ";
                           fout<<"1. KEDGAON \n ";
                           fout<<"2. KOPRAGAON \n ";
                           fout<<"3. MALEGAON \n ";
                           fout<<"4. DUSARBEED \n ";
                           fout<<"5. SHEVATI \n ";
                           
                          
                            
                                      fout<<"For KEDGAON : \n";
                                      fout<<"Ampunt is : 100\n";
                                      

                               
                                      fout<<"For KOPRAGAON : \n";
                                      fout<<"Ampunt is : 180\n";
                                      

                                      fout<<"For MALEGAON : \n";
                                      fout<<"Ampunt is : 100\n";


                                      fout<<"For DUSARBEED : \n";
                                      fout<<"Ampunt is : 150\n";


                                      fout<<"For SHEVATI : \n";
                                      fout<<"Ampunt is : 280\n";
                               fout.close();
 
                             fout<<"\n\t TOTAL IS : 810";
                          cout<<"From pune to nagpur. \n ";
                           cout<<"Their are 5 toll plazas \n ";
                           cout<<"1. KEDGAON \n ";
                           cout<<"2. KOPRAGAON \n ";
                           cout<<"3. MALEGAON \n ";
                           cout<<"4. DUSARBEED \n ";
                           cout<<"5. SHEVATI \n ";
                          
                         
                            
                                      cout<<"For KEDGAON : \n";
                                      cout<<"Ampunt is : 100\n";
                                      

                               
                                      cout<<"For KOPRAGAON : \n";
                                      cout<<"Ampunt is : 180\n";
                                      

                                      cout<<"For MALEGAON : \n";
                                      cout<<"Ampunt is : 100\n";


                                      cout<<"For DUSARBEED : \n";
                                      cout<<"Ampunt is : 150\n";


                                      cout<<"For SHEVATI : \n";
                                      cout<<"Ampunt is : 280\n";
   
                             cout<<"\n\t TOTAL IS : 810";
                   

                  
                break;
                 case 'R':
                          fout.open("mn.txt");
                           fout<<"From pune to nagpur. \n ";
                           fout<<"Their are 5 toll plazas \n ";
                           fout<<"1. KEDGAON \n ";
                           fout<<"2. KOPRAGAON \n ";
                           fout<<"3. MALEGAON \n ";
                           fout<<"4. DUSARBEED \n ";
                           fout<<"5. SHEVATI \n ";
                           
                          
                            
                                      fout<<"For KEDGAON : \n";
                                      fout<<"Ampunt is : 200\n";
                                      

                               
                                      fout<<"For KOPRAGAON : \n";
                                      fout<<"Ampunt is : 300\n";
                                      

                                      fout<<"For MALEGAON : \n";
                                      fout<<"Ampunt is : 200\n";


                                      fout<<"For DUSARBEED : \n";
                                      fout<<"Ampunt is : 500\n";


                                      fout<<"For SHEVATI : \n";
                                      fout<<"Ampunt is : 1500\n";
                               fout.close();
                          
                    cout<<"From pune to nagpur. \n ";
                           cout<<"Their are 5 toll plazas \n ";
                           cout<<"1. KEDGAON \n ";
                           cout<<"2. KOPRAGAON \n ";
                           cout<<"3. MALEGAON \n ";
                           cout<<"4. DUSARBEED \n ";
                           cout<<"5. SHEVATI \n ";
                           
                          
                            
                                      cout<<"For KEDGAON : \n";
                                      cout<<"Ampunt is : 200\n";
                                      

                               
                                      cout<<"For KOPRAGAON : \n";
                                      cout<<"Ampunt is : 300\n";
                                      

                                      cout<<"For MALEGAON : \n";
                                      cout<<"Ampunt is : 200\n";


                                      cout<<"For DUSARBEED : \n";
                                      cout<<"Ampunt is : 300\n";


                                      cout<<"For SHEVATI : \n";
                                      cout<<"Ampunt is : 500\n";
   
                             cout<<"\n\t TOTAL IS : 1500";
   
                 break;  
                 case 'O':
                    fout.open("mn.txt");
                           fout<<"From pune to nagpur. \n ";
                           fout<<"Their are 5 toll plazas \n ";
                           fout<<"1. KEDGAON \n ";
                           fout<<"2. KOPRAGAON \n ";
                           fout<<"3. MALEGAON \n ";
                           fout<<"4. DUSARBEED \n ";
                           fout<<"5. SHEVATI \n ";
                           
                          
                            
                                      fout<<"For KEDGAON : \n";
                                      fout<<"Ampunt is : 250\n";
                                      

                               
                                      fout<<"For KOPRAGAON : \n";
                                      fout<<"Ampunt is : 350\n";
                                      

                                      fout<<"For MALEGAON : \n";
                                      fout<<"Ampunt is : 250\n";


                                      fout<<"For DUSARBEED : \n";
                                      fout<<"Ampunt is : 350\n";


                                      fout<<"For SHEVATI : \n";
                                      fout<<"Ampunt is : 1750\n";
                               fout.close();

                            cout<<"From pune to nagpur. \n ";
                           cout<<"Their are 5 toll plazas \n ";
                           cout<<"1. KEDGAON \n ";
                           cout<<"2. KOPRAGAON \n ";
                           cout<<"3. MALEGAON \n ";
                           cout<<"4. DUSARBEED \n ";
                           cout<<"5. SHEVATI \n ";
                           
                          
                            
                                      cout<<"For KEDGAON : \n";
                                      cout<<"Ampunt is : 250\n";
                                      

                               
                                      cout<<"For KOPRAGAON : \n";
                                      cout<<"Ampunt is : 350\n";
                                      

                                      cout<<"For MALEGAON : \n";
                                      cout<<"Ampunt is : 250\n";


                                      cout<<"For DUSARBEED : \n";
                                      cout<<"Ampunt is : 350\n";


                                      cout<<"For SHEVATI : \n";
                                      cout<<"Ampunt is : 550\n";
   
                             cout<<"\n\t TOTAL IS : 1750";
                 break;      
               
        }
         
          break;
        

              case 'k':
           
                    cout<<"\nTrip type......";
                    cout<<"\n\nS.Single trip\nR.Return trip  (same day)\nO.Round trip  (More than 24 hrs)";
                    cout<<"\n\nEnter ch...";
                    cin>>chara;
                    switch(chara)
                         {
                             case 'S':

                     fout.open("mn.txt");
                           fout<<"From pune to Kolhapur. \n ";
                           fout<<"Their are 5 toll plazas \n ";
                           fout<<"1. KEDSAHIVAPUR \n ";
                           fout<<"2. ANEWADI \n ";
                           fout<<"3. TASAWADE \n ";
                           fout<<"4. KINI \n ";
                           fout<<"5. SHEVATI \n ";
                         
                        
                          
                            
                                      fout<<"For KEDSAHIVAPUR : \n";
                                      fout<<"Ampunt is : 100\n";
                                      

                               
                                      fout<<"For ANEWADI : \n";
                                      fout<<"Ampunt is : 180\n";
                                      

                                      fout<<"For TASAWADE : \n";
                                      fout<<"Ampunt is : 100\n";


                                      fout<<"For KINI : \n";
                                      fout<<"Ampunt is : 150\n";


                                      fout<<"For SHEVATI : \n";
                                      fout<<"Ampunt is : 280\n";
   
                             fout<<"\n\t TOTAL IS : 810";
                          fout.close();

                   cout<<"From pune to Kolhapur. \n ";
                           cout<<"Their are 5 toll plazas \n ";
                           cout<<"1. KEDSAHIVAPUR \n ";
                           cout<<"2. ANEWADI \n ";
                           cout<<"3. TASAWADE \n ";
                           cout<<"4. KINI \n ";
                           cout<<"5. SHEVATI \n ";
                          
                           
                          
                            
                                      cout<<"For KEDSAHIVAPUR : \n";
                                      cout<<"Ampunt is : 100\n";
                                      

                               
                                      cout<<"For ANEWADI : \n";
                                      cout<<"Ampunt is : 180\n";
                                      

                                      cout<<"For TASAWADE : \n";
                                      cout<<"Ampunt is : 100\n";


                                      cout<<"For KINI : \n";
                                      cout<<"Ampunt is : 150\n";


                                      cout<<"For SHEVATI : \n";
                                      cout<<"Ampunt is : 280\n";
   
                             cout<<"\n\t TOTAL IS : 810";
                          

                  
                break;
                 case 'R':
                          fout.open("mn.txt");
                           fout<<"From pune to Kolhapur. \n ";
                           fout<<"Their are 5 toll plazas \n ";
                           fout<<"1. KEDSAHIVAPUR \n ";
                           fout<<"2. ANEWADI \n ";
                           fout<<"3. TASAWADE \n ";
                           fout<<"4. KINI \n ";
                           fout<<"5. SHEVATI \n ";
                         
                        
                          
                            
                                      fout<<"For KEDSAHIVAPUR : \n";
                                      fout<<"Ampunt is : 200\n";
                                      

                               
                                      fout<<"For ANEWADI : \n";
                                      fout<<"Ampunt is : 300\n";
                                      

                                      fout<<"For TASAWADE : \n";
                                      fout<<"Ampunt is : 200\n";


                                      fout<<"For KINI : \n";
                                      fout<<"Ampunt is : 300\n";


                                      fout<<"For SHEVATI : \n";
                                      fout<<"Ampunt is : 500\n";
   
                             fout<<"\n\t TOTAL IS : 1500";
                          fout.close();
                          
                    cout<<"From pune to Kolhapur. \n ";
                           cout<<"Their are 5 toll plazas \n ";
                           cout<<"1. KEDSAHIVAPUR \n ";
                           cout<<"2. ANEWADI \n ";
                           cout<<"3. TASAWADE \n ";
                           cout<<"4. KINI \n ";
                           cout<<"5. SHEVATI \n ";
                          
                           
                          
                            
                                      cout<<"For KEDSAHIVAPUR : \n";
                                      cout<<"Ampunt is : 200\n";
                                      

                               
                                      cout<<"For ANEWADI : \n";
                                      cout<<"Ampunt is : 300\n";
                                      

                                      cout<<"For TASAWADE : \n";
                                      cout<<"Ampunt is : 200\n";


                                      cout<<"For KINI: \n";
                                      cout<<"Ampunt is : 300\n";


                                      cout<<"For SHEVATI : \n";
                                      cout<<"Ampunt is : 500\n";
   
                             cout<<"\n\t TOTAL IS : 1500";
                          
   
                 break;  
                 case 'O':
                    fout.open("mn.txt");
                           fout<<"From pune to Kolhapur. \n ";
                           fout<<"Their are 5 toll plazas \n ";
                           fout<<"1. KEDSAHIVAPUR \n ";
                           fout<<"2. ANEWADI \n ";
                           fout<<"3. TASAWADE \n ";
                           fout<<"4. KINI \n ";
                           fout<<"5. SHEVATI \n ";
                         
                        
                          
                            
                                      fout<<"For KEDSAHIVAPUR : \n";
                                      fout<<"Ampunt is : 250\n";
                                      

                               
                                      fout<<"For ANEWADI : \n";
                                      fout<<"Ampunt is : 350\n";
                                      

                                      fout<<"For TASAWADE : \n";
                                      fout<<"Ampunt is : 250\n";


                                      fout<<"For KINI : \n";
                                      fout<<"Ampunt is : 350\n";


                                      fout<<"For SHEVATI : \n";
                                      fout<<"Ampunt is : 550\n";
   
                             fout<<"\n\t TOTAL IS : 1750";
                          fout.close();

                         cout<<"From pune to Kolhapur. \n ";
                           cout<<"Their are 5 toll plazas \n ";
                           cout<<"1. KEDSAHIVAPUR \n ";
                           cout<<"2. ANEWADI \n ";
                           cout<<"3. TASAWADE \n ";
                           cout<<"4. KINI \n ";
                           cout<<"5. SHEVATI \n ";
                          
                          
                            
                                      cout<<"For KEDSAHIVAPUR : \n";
                                      cout<<"Ampunt is : 250\n";
                                      

                               
                                      cout<<"For ANEWADI : \n";
                                      cout<<"Ampunt is : 350\n";
                                      

                                      cout<<"For TASAWADE : \n";
                                      cout<<"Ampunt is : 250\n";


                                      cout<<"For DUSARBEED : \n";
                                      cout<<"Ampunt is : 350\n";


                                      cout<<"For SHEVATI : \n";
                                      cout<<"Ampunt is : 550\n";
   
                             cout<<"\n\t TOTAL IS : 1750";
                 break;      
               }//end chara
         }
         }
          break;
        case 2:
            { char chara;
              count ++;
           
              cout<<"p. pune to Palus : ";
              cout<<"n. pune to Nagpur : ";
              cout<<"k. pune to Kolhapur : ";
              cout<<"\n\nEnter ch...";
              cin>>ch1;
            switch(ch1)
              {
                 case 'p':
                    cout<<"\nTrip type......";
                    cout<<"\n\nS.Single trip\nR.Return trip  (same day)\nO.Round trip  (More than 24 hrs)";
                    cout<<"\n\nEnter ch...";
                    cin>>chara;
                    switch(chara)
                         {
                             case 'S':
                             
                     
                           fout.open("mn.txt");
                             fout<<"From pune to palus. \n ";
                             fout<<"Their are 2 toll plazas \n ";
                             fout<<"1. KHEDSHIVAPUR \n ";
                             fout<<"2. SATARA \n ";
                   
                          
                            
                                      fout<<"For khedshivapur : \n";
                                      cout<<"Ampunt is : 100\n";
                                      

                               
                                      fout<<"For satara : \n";
                                      fout<<"Ampunt is : 80\n";
                                      
   
                              fout<<"\n\t TOTAL IS : 180";
                            fout.close();

                           cout<<"From pune to palus. \n ";
                           cout<<"Their are 2 toll plazas \n ";
                           cout<<"1. KEDSHIVAPUR \n ";
                           cout<<"2. SATARA \n ";
                   
                          
                            
                                      cout<<"For khedshivapur : \n";
                                      cout<<"Ampunt is : 100\n";
                                      

                               
                                      cout<<"For satara : \n";
                                      cout<<"Ampunt is : 80\n";

                                   cout<<"\n\t TOTAL IS : 180";
                 break;      
                 case 'R':  fout.open("mn.txt");
                           fout<<"From pune to palus. \n ";
                           fout<<"Their are 2 toll plazas \n ";
                           fout<<"1. KEDSHIVAPUR \n ";
                           fout<<"2. SATARA \n ";
                   
                          
                            
                                      fout<<"For khedshivapur : \n";
                                      fout<<"Ampunt is : 200\n";
                                      

                               
                                      fout<<"For satara : \n";
                                      fout<<"Ampunt is : 150\n";
                                      
                                    fout<<"\n\t TOTAL IS : 350";
                                    fout.close();
                           cout<<"From pune to palus. \n ";
                           cout<<"Their are 2 toll plazas \n ";
                           cout<<"1. KEDSHIVAPUR \n ";
                           cout<<"2. SATARA \n ";
                   
                          
                            
                                      cout<<"For khedshivapur : \n";
                                      cout<<"Ampunt is : 200\n";
                                      

                               
                                      cout<<"For satara : \n";
                                      cout<<"Ampunt is : 150\n";
                                      
                                    cout<<"\n\t TOTAL IS : 350";
     
                 break;  
                 case 'O':
                   fout.open("mn.txt");
                           fout<<"From pune to palus. \n ";
                           fout<<"Their are 2 toll plazas \n ";
                           fout<<"1. KEDSHIVAPUR \n ";
                           fout<<"2. SATARA \n ";
                   
                          
                            
                                      fout<<"For khedshivapur : \n";
                                      fout<<"Ampunt is : 300\n";
                                      

                               
                                      fout<<"For satara : \n";
                                      fout<<"Ampunt is : 250\n";
                                      
                                    fout<<"\n\t TOTAL IS : 550";
                                    fout.close();
                           cout<<"From pune to palus. \n ";
                           cout<<"Their are 2 toll plazas \n ";
                           cout<<"1. KEDSHIVAPUR \n ";
                           cout<<"2. SATARA \n ";
                   
                          
                            
                                      cout<<"For khedshivapur : \n";
                                      cout<<"Ampunt is : 300\n";
                                      

                               
                                      cout<<"For satara : \n";
                                      cout<<"Ampunt is : 250\n";
                                      
                                    cout<<"\n\t TOTAL IS : 550";
                 break;      
               
            }
         
          break;
          


         case 'n':
           
                    cout<<"\nTrip type......";
                    cout<<"\n\nS.Single trip\nR.Return trip  (same day)\nO.Round trip  (More than 24 hrs)";
                    cout<<"\n\nEnter ch...";
                    cin>>chara;
                    switch(chara)
                         {
                             case 'S':

                     fout.open("mn.txt");
                           fout<<"From pune to nagpur. \n ";
                           fout<<"Their are 5 toll plazas \n ";
                           fout<<"1. KEDGAON \n ";
                           fout<<"2. KOPRAGAON \n ";
                           fout<<"3. MALEGAON \n ";
                           fout<<"4. DUSARBEED \n ";
                           fout<<"5. SHEVATI \n ";
                           
                          
                            
                                      fout<<"For KEDGAON : \n";
                                      fout<<"Ampunt is : 100\n";
                                      

                               
                                      fout<<"For KOPRAGAON : \n";
                                      fout<<"Ampunt is : 180\n";
                                      

                                      fout<<"For MALEGAON : \n";
                                      fout<<"Ampunt is : 100\n";


                                      fout<<"For DUSARBEED : \n";
                                      fout<<"Ampunt is : 150\n";


                                      fout<<"For SHEVATI : \n";
                                      fout<<"Ampunt is : 280\n";
                               fout.close();
 
                             fout<<"\n\t TOTAL IS : 810";
                          cout<<"From pune to nagpur. \n ";
                           cout<<"Their are 5 toll plazas \n ";
                           cout<<"1. KEDGAON \n ";
                           cout<<"2. KOPRAGAON \n ";
                           cout<<"3. MALEGAON \n ";
                           cout<<"4. DUSARBEED \n ";
                           cout<<"5. SHEVATI \n ";
                          
                         
                            
                                      cout<<"For KEDGAON : \n";
                                      cout<<"Ampunt is : 100\n";
                                      

                               
                                      cout<<"For KOPRAGAON : \n";
                                      cout<<"Ampunt is : 180\n";
                                      

                                      cout<<"For MALEGAON : \n";
                                      cout<<"Ampunt is : 100\n";


                                      cout<<"For DUSARBEED : \n";
                                      cout<<"Ampunt is : 150\n";


                                      cout<<"For SHEVATI : \n";
                                      cout<<"Ampunt is : 280\n";
   
                             cout<<"\n\t TOTAL IS : 810";
                   

                  
                break;
                 case 'R':
                          fout.open("mn.txt");
                           fout<<"From pune to nagpur. \n ";
                           fout<<"Their are 5 toll plazas \n ";
                           fout<<"1. KEDGAON \n ";
                           fout<<"2. KOPRAGAON \n ";
                           fout<<"3. MALEGAON \n ";
                           fout<<"4. DUSARBEED \n ";
                           fout<<"5. SHEVATI \n ";
                           
                          
                            
                                      fout<<"For KEDGAON : \n";
                                      fout<<"Ampunt is : 200\n";
                                      

                               
                                      fout<<"For KOPRAGAON : \n";
                                      fout<<"Ampunt is : 300\n";
                                      

                                      fout<<"For MALEGAON : \n";
                                      fout<<"Ampunt is : 200\n";


                                      fout<<"For DUSARBEED : \n";
                                      fout<<"Ampunt is : 500\n";


                                      fout<<"For SHEVATI : \n";
                                      fout<<"Ampunt is : 1500\n";
                               fout.close();
                          
                    cout<<"From pune to nagpur. \n ";
                           cout<<"Their are 5 toll plazas \n ";
                           cout<<"1. KEDGAON \n ";
                           cout<<"2. KOPRAGAON \n ";
                           cout<<"3. MALEGAON \n ";
                           cout<<"4. DUSARBEED \n ";
                           cout<<"5. SHEVATI \n ";
                           
                          
                            
                                      cout<<"For KEDGAON : \n";
                                      cout<<"Ampunt is : 200\n";
                                      

                               
                                      cout<<"For KOPRAGAON : \n";
                                      cout<<"Ampunt is : 300\n";
                                      

                                      cout<<"For MALEGAON : \n";
                                      cout<<"Ampunt is : 200\n";


                                      cout<<"For DUSARBEED : \n";
                                      cout<<"Ampunt is : 300\n";


                                      cout<<"For SHEVATI : \n";
                                      cout<<"Ampunt is : 500\n";
   
                             cout<<"\n\t TOTAL IS : 1500";
   
                 break;  
                 case 'O':
                    fout.open("mn.txt");
                           fout<<"From pune to nagpur. \n ";
                           fout<<"Their are 5 toll plazas \n ";
                           fout<<"1. KEDGAON \n ";
                           fout<<"2. KOPRAGAON \n ";
                           fout<<"3. MALEGAON \n ";
                           fout<<"4. DUSARBEED \n ";
                           fout<<"5. SHEVATI \n ";
                           
                          
                            
                                      fout<<"For KEDGAON : \n";
                                      fout<<"Ampunt is : 250\n";
                                      

                               
                                      fout<<"For KOPRAGAON : \n";
                                      fout<<"Ampunt is : 350\n";
                                      

                                      fout<<"For MALEGAON : \n";
                                      fout<<"Ampunt is : 250\n";


                                      fout<<"For DUSARBEED : \n";
                                      fout<<"Ampunt is : 350\n";


                                      fout<<"For SHEVATI : \n";
                                      fout<<"Ampunt is : 1750\n";
                               fout.close();

                            cout<<"From pune to nagpur. \n ";
                           cout<<"Their are 5 toll plazas \n ";
                           cout<<"1. KEDGAON \n ";
                           cout<<"2. KOPRAGAON \n ";
                           cout<<"3. MALEGAON \n ";
                           cout<<"4. DUSARBEED \n ";
                           cout<<"5. SHEVATI \n ";
                           
                          
                            
                                      cout<<"For KEDGAON : \n";
                                      cout<<"Ampunt is : 250\n";
                                      

                               
                                      cout<<"For KOPRAGAON : \n";
                                      cout<<"Ampunt is : 350\n";
                                      

                                      cout<<"For MALEGAON : \n";
                                      cout<<"Ampunt is : 250\n";


                                      cout<<"For DUSARBEED : \n";
                                      cout<<"Ampunt is : 350\n";


                                      cout<<"For SHEVATI : \n";
                                      cout<<"Ampunt is : 550\n";
   
                             cout<<"\n\t TOTAL IS : 1750";
                 break;      
               
        }
         
          break;
        

              case 'k':
           
                    cout<<"\nTrip type......";
                    cout<<"\n\nS.Single trip\nR.Return trip  (same day)\nO.Round trip  (More than 24 hrs)";
                    cout<<"\n\nEnter ch...";
                    cin>>chara;
                    switch(chara)
                         {
                             case 'S':

                     fout.open("mn.txt");
                           fout<<"From pune to Kolhapur. \n ";
                           fout<<"Their are 5 toll plazas \n ";
                           fout<<"1. KEDSAHIVAPUR \n ";
                           fout<<"2. ANEWADI \n ";
                           fout<<"3. TASAWADE \n ";
                           fout<<"4. KINI \n ";
                           fout<<"5. SHEVATI \n ";
                         
                        
                          
                            
                                      fout<<"For KEDSAHIVAPUR : \n";
                                      fout<<"Ampunt is : 100\n";
                                      

                               
                                      fout<<"For ANEWADI : \n";
                                      fout<<"Ampunt is : 180\n";
                                      

                                      fout<<"For TASAWADE : \n";
                                      fout<<"Ampunt is : 100\n";


                                      fout<<"For KINI : \n";
                                      fout<<"Ampunt is : 150\n";


                                      fout<<"For SHEVATI : \n";
                                      fout<<"Ampunt is : 280\n";
   
                             fout<<"\n\t TOTAL IS : 810";
                          fout.close();

                   cout<<"From pune to Kolhapur. \n ";
                           cout<<"Their are 5 toll plazas \n ";
                           cout<<"1. KEDSAHIVAPUR \n ";
                           cout<<"2. ANEWADI \n ";
                           cout<<"3. TASAWADE \n ";
                           cout<<"4. KINI \n ";
                           cout<<"5. SHEVATI \n ";
                          
                           
                          
                            
                                      cout<<"For KEDSAHIVAPUR : \n";
                                      cout<<"Ampunt is : 100\n";
                                      

                               
                                      cout<<"For ANEWADI : \n";
                                      cout<<"Ampunt is : 180\n";
                                      

                                      cout<<"For TASAWADE : \n";
                                      cout<<"Ampunt is : 100\n";


                                      cout<<"For KINI : \n";
                                      cout<<"Ampunt is : 150\n";


                                      cout<<"For SHEVATI : \n";
                                      cout<<"Ampunt is : 280\n";
   
                             cout<<"\n\t TOTAL IS : 810";
                          

                  
                break;
                 case 'R':
                          fout.open("mn.txt");
                           fout<<"From pune to Kolhapur. \n ";
                           fout<<"Their are 5 toll plazas \n ";
                           fout<<"1. KEDSAHIVAPUR \n ";
                           fout<<"2. ANEWADI \n ";
                           fout<<"3. TASAWADE \n ";
                           fout<<"4. KINI \n ";
                           fout<<"5. SHEVATI \n ";
                         
                        
                          
                            
                                      fout<<"For KEDSAHIVAPUR : \n";
                                      fout<<"Ampunt is : 200\n";
                                      

                               
                                      fout<<"For ANEWADI : \n";
                                      fout<<"Ampunt is : 300\n";
                                      

                                      fout<<"For TASAWADE : \n";
                                      fout<<"Ampunt is : 200\n";


                                      fout<<"For KINI : \n";
                                      fout<<"Ampunt is : 300\n";


                                      fout<<"For SHEVATI : \n";
                                      fout<<"Ampunt is : 500\n";
   
                             fout<<"\n\t TOTAL IS : 1500";
                          fout.close();
                          
                    cout<<"From pune to Kolhapur. \n ";
                           cout<<"Their are 5 toll plazas \n ";
                           cout<<"1. KEDSAHIVAPUR \n ";
                           cout<<"2. ANEWADI \n ";
                           cout<<"3. TASAWADE \n ";
                           cout<<"4. KINI \n ";
                           cout<<"5. SHEVATI \n ";
                          
                           
                          
                            
                                      cout<<"For KEDSAHIVAPUR : \n";
                                      cout<<"Ampunt is : 200\n";
                                      

                               
                                      cout<<"For ANEWADI : \n";
                                      cout<<"Ampunt is : 300\n";
                                      

                                      cout<<"For TASAWADE : \n";
                                      cout<<"Ampunt is : 200\n";


                                      cout<<"For KINI: \n";
                                      cout<<"Ampunt is : 300\n";


                                      cout<<"For SHEVATI : \n";
                                      cout<<"Ampunt is : 500\n";
   
                             cout<<"\n\t TOTAL IS : 1500";
                          
   
                 break;  
                 case 'O':
                    fout.open("mn.txt");
                           fout<<"From pune to Kolhapur. \n ";
                           fout<<"Their are 5 toll plazas \n ";
                           fout<<"1. KEDSAHIVAPUR \n ";
                           fout<<"2. ANEWADI \n ";
                           fout<<"3. TASAWADE \n ";
                           fout<<"4. KINI \n ";
                           fout<<"5. SHEVATI \n ";
                         
                        
                          
                            
                                      fout<<"For KEDSAHIVAPUR : \n";
                                      fout<<"Ampunt is : 250\n";
                                      

                               
                                      fout<<"For ANEWADI : \n";
                                      fout<<"Ampunt is : 350\n";
                                      

                                      fout<<"For TASAWADE : \n";
                                      fout<<"Ampunt is : 250\n";


                                      fout<<"For KINI : \n";
                                      fout<<"Ampunt is : 350\n";


                                      fout<<"For SHEVATI : \n";
                                      fout<<"Ampunt is : 550\n";
   
                             fout<<"\n\t TOTAL IS : 1750";
                          fout.close();

                         cout<<"From pune to Kolhapur. \n ";
                           cout<<"Their are 5 toll plazas \n ";
                           cout<<"1. KEDSAHIVAPUR \n ";
                           cout<<"2. ANEWADI \n ";
                           cout<<"3. TASAWADE \n ";
                           cout<<"4. KINI \n ";
                           cout<<"5. SHEVATI \n ";
                          
                          
                            
                                      cout<<"For KEDSAHIVAPUR : \n";
                                      cout<<"Ampunt is : 250\n";
                                      

                               
                                      cout<<"For ANEWADI : \n";
                                      cout<<"Ampunt is : 350\n";
                                      

                                      cout<<"For TASAWADE : \n";
                                      cout<<"Ampunt is : 250\n";


                                      cout<<"For DUSARBEED : \n";
                                      cout<<"Ampunt is : 350\n";


                                      cout<<"For SHEVATI : \n";
                                      cout<<"Ampunt is : 550\n";
   
                             cout<<"\n\t TOTAL IS : 1750";
                 break;      
               }//end chara
         }
         }

      break;
       }



   }
//fout.close();

}

void toll::disp(long count)
   {
     
     cout<<"\t"<<"........   ....   ...       ...          	  "<<endl;
     cout<<"\t"<<"........  ......  ...       ...		"<<endl;
     cout<<"\t"<<"  ....    ..  ..  ...       ...  	"<<endl;
     cout<<"\t"<<"  ....    ..  ..  ...       ...		"<<endl;
     cout<<"\t"<<"  ....    ......  ........  ........	"<<endl;
     cout<<"\t"<<"  ....     ....   ........  ........	"<<endl;
    
   }  


void toll :: times()
{
   time_t now = time(0);
   
   char* dt = ctime(&now);

   cout << "The local date and time is: " << dt << endl;
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC date and time is:"<< dt << endl;
   
} 

