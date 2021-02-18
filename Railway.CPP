#include<fstream.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
#include<conio.h>
#include<iomanip.h>
void colyb()
     {
     textcolor(RED);
     textbackground(WHITE);
     }

  class res
      {
	char from[15],sex,to[15],via[15],cls[5],name[30],city[20],pin[7];
	float fare,age;
	unsigned long int pnr;
	int dd,mm,yy,fcode;
	long int cdno;


	     public:
		    void getdetail()
				  {
				   cout<<"\n Address\n";
				   cout<<"\nCity name\t\n:";
					 gets(city);
				   cout<<"\nEnter your area pin code\t:";
					 gets(pin);
				   cout<<"\nPersonal details";
				   cout<<"\nEnter you adhar card number\t:";
					 cin>>cdno;
				   cout<<"\nEnter your name\t:";
					 gets(name);
				   cout<<"\nEnter age\t:";
					 cin>>age;
				   cout<<"\nEnter gender ...{(M) for male or (F) for female}\t:";
					  cin>>sex;

				   }

		      void putdetail()
				   {
				    cout<<"\nThe details given by you\t:";
				    cout<<name<<", "<<age<<", "<<sex<<", "<<city<<", "<<pin<<", "<<cdno;
				    }


		      void putdest()
				    {
				     cout<<"from\t";
					   puts(from);
				     cout<<"via\t";
					   puts(via);
				      cout<<"to\t";
					    puts(to);
				       }

		       void getdat()
				      {
					h:
					  {
					   cout<<"Enter your journy date (DD/MM/YYYY))\t\n";
						 cin>>dd>>mm>>yy;
						if((dd>31)&&(mm>12))
						    {
						       cout<<"\nPlease Enter valid date:\t";
						       goto h;
						     }
						if((mm==2)&&(dd>29))
						     {
						       cout<<"\nplease enter valid date:\t";
						       goto h;
						      }
					     cout<<"\ndate given by you is\t";
					     cout<<dd<<"/"<<mm<<"/"<<yy;
					      }
					   }

			   void putdat()
					{
					if((dd>0&&dd<=31)&&(mm>0&&mm<13))
						 {
						   cout<<"Date:"<<dd<<"/"<<mm<<"/"<<yy<<"\n";
						 }
					  }

			   void getclss()
					     {
					     cout<<"\nPlease select your class (SL/3AC/2AC/1AC)\t";
						  gets(cls);
					       }

			   void putclss()
					     {
					      cout<<"\nClass is\t:"<<cls;
					     }

			   void putpnr()
					     {
					      randomize();
					       pnr=7207219780;
					       pnr+= random(9999999999);
					       cout<<"\n PNR no.\t:"<<pnr;
					      }



		     void getres()
			  {
			  textcolor(GREEN);
			  clrscr();
			  cout<<"\t\t\t\tRESERVATION FORM\n";
			  cout<<"\nEnter Train no.\t";
			  cin>>fcode;
			   if(fcode==12791)
				{
				 strcpy(from,"SECUNDRABAD");
				 strcpy(to,"DANAPUR");
				 strcpy(via,"GAYA");
				 fare=1700;
				}
			     else if(fcode==12792)
				{
				 strcpy(from,"DANAPUR");
				 strcpy(to,"SECUNDRABAD");
				 strcpy(via,"GAYA");
				 fare=1700;
				}
			     else if(fcode==12723)
				{
				 strcpy(from,"HYDERABAD DECCEN");
				 strcpy(to,"AGRA CANTT");
				 strcpy(via,"HOWRAH");
				 fare=2000;
				}
			    else if(fcode==12341)
				{
				 strcpy(from,"HOWRAH");
				 strcpy(to,"PATHANKOT CANTT");
				 strcpy(via,"AGRA CANTT");
				 fare=1500;
				}
			   else if(fcode==12014)
				{
				 strcpy(from,"AMRITSAR");
				 strcpy(to,"BENGULURU");
				 strcpy(via,"RAJMUNDRY");
				 fare=2100;
				}
			   else if(fcode==16032)
				{
				 strcpy(from,"HOWRAH");
				 strcpy(to,"JAMMU TAWI");
				 strcpy(via,"PATHANKOT CANTT");
				 fare=1850;
				}
			  else if(fcode==17007)
				{
				 strcpy(from,"SECUNDRABAD");
				 strcpy(to,"DURBHANGA");
				 strcpy(via,"GAYA");
				 fare=1855;
				}
			  else if(fcode==17008)
				{
				 strcpy(from,"DURBHANGA");
				 strcpy(to,"SECUNDRABAD");
				 strcpy(via,"GAYA");
				 fare=1855;
				}
			  else if(fcode==12948)
				{
				 strcpy(from,"PATNA");
				 strcpy(to,"AZIMABAD");
				 strcpy(via,"DIRECT");
				 fare=850;
				}
			  else if(fcode==12345)
				{
				 strcpy(from,"HOWRAH");
				 strcpy(to,"JODHPUR");
				 strcpy(via,"DIRECT");
				 fare=1920;
				}
			  else
				 {
				  clrscr();
				  cout<<"ERROR";
				  exit(0);
				 }
				    getdetail();
				      getdat();
				      getclss();
				      clrscr();
				      char ch;
				      cout<<"Press Y to confirm and N for cancel\n";
				      cin>>ch;
				    if((ch=='n')||(ch=='N'))
					  cout<<"Thankyou for using this service\n";
				   else
					{
					 clrscr();
					 putres();
					 }
				  }
			void putres()
			    {
			    cout<<"\t\t\t\tRESERVATION ENTRIES\n";
			    cout<<"train no.\t:"<<fcode<<"\n";
			    cout<<setw(40)<<"Your ticket\n";
			    cout<<"\n";
			    putdest();
			    putdat();
			    putclss();
			    putpnr();
			    cout<<"\nTHANKYOU FOR BOOKING WITH US \n";
			    cout<<" \n  WISH YOU A HAPPY JOURNEY  \n";
			      }
			void search()
			{
			cout<<"train no.\t:"<<fcode;
			cout<<setw(40)<<"Your ticket\n";
			cout<<"\n";
			putdest();
			pnr;
			}
		      long int getcdno()
			    {
			    return cdno;
			    }
      };
	     void menu()
	     {
	     clrscr();
	     cout<<setw(60)<<"          WELCOME TO INDIAN RAILWAYS          \n";
	     cout<<setw(60)<<"______________________________________________\n";
	     cout<<setw(60)<<"**********           MENU          ***********\n";
	     cout<<setw(60)<<"______________________________________________\n";
	     cout<<setw(60)<<"***  press 1 for         LIST OF TRAINS    ***\n";
	     cout<<setw(60)<<"***  Press 2 for         RESERVATION       ***\n";
	     cout<<setw(60)<<"***  Press 3 for         TICKET            ***\n";
	     cout<<setw(60)<<"***  Press 4 for         CANCELLATION      ***\n";
	     cout<<setw(60)<<"***  Press 5 for         EXIT              ***\n";
	     cout<<setw(60)<<"______________________________________________\n";
	     cout<<setw(60)<<"  ";
	     }
	     void res_menu()
	     {
	     textcolor(YELLOW);
	     textbackground(WHITE);
	     cout<<" ";
	     cout<<"\n\t\t\t\tINDIAN RAILWAYS\n";
	     cout<<"\n";
	     cout<<"\t\t\tRESERVATION / ROUTE / FARE MENU\n";
	     cout<<"\n";
	     cout<<"SN  FROM        TO          VIA      TRAIN NO   TIMING      DAY        FARE\n";
	     cout<<"                                             (dep)  (arr)    \n";
	     cout<<"1. SECUNDRABAD  DANAPUR     GAYA      12791  10:05  20:30  DAILY       1600\n";
	     cout<<"2. DANAPUR      SECUNDRABAD GAYA      12792  12:05  20:45  DAILY       1600\n";
	     cout<<"3. HYDERABAD    AGRACANTT   HOWRAH    12723  08:45  22:30  TUESDAY     2000\n";
	     cout<<"4. HOWRAH       PATHANKOT   AGRACANTT 12341  15:00  11:50  MON WED SAT 1500\n";
	     cout<<"5. AMRITSAR     BENGULURU   RAJMUNDRY 12014  05:10  00:50  MON TUE SUN 2100\n";
	     cout<<"6. HOWRAH       JAMMU TAWI  PATHANKOT 16032  02:30  23:45  TUE FRI     1850\n";
	     cout<<"7. SECUNDRABAD  DURBHANGA   GAYA      07007  22:30  05:45  TUE SAT     1855\n";
	     cout<<"8. DURBHANGA    SECUNDRABAD GAYA      07008  15:45  22:00  WED FRI     1855\n";
	     cout<<"9. PATNA        AZIMABAD    DIRECT    12948  11:45  19:10  MONDAY       850\n";
	     cout<<"10.HOWRAH       JODHPUR     DIRECT    12345  07:00  05:00  DAILY       1920\n";
	  textcolor(YELLOW);
	}

  void main()
	     {
	     textcolor(RED);
	     textbackground(WHITE);
	     int mch;
	     unsigned long int no;
	     res r,r1;
	     char ch;
	     do
	     {
	     clrscr();
	     fstream fin,fin1;
	     textcolor(YELLOW);
	     menu();
	     gotoxy(4,15);
	     cout<<"Enter your choice\t";
	     gotoxy(30,15);
	     cin>>mch;
	     switch(mch)
		   {   case 1: clrscr();
				 res_menu();
			       break;

			case 2:  clrscr();
				    ofstream fout;
				    fout.open("oldmas.dat",ios::app,ios::binary);
				    fout.open("oldmas.dat",ios::out,ios::binary);
				    char ans='y';
				    while(ans=='y')
					 {
					  fout.write((char*)&r,sizeof(r));
					  r.getres();
					  cout<<"Want to enter more..? (Y/N)\n";
					  cin>>ans;
					 }
				  fout.close();
				  break;

			 case 3:   clrscr();
				      ifstream fin;
				      fin.open("oldmass.dat",ios::in|ios::binary);
				      cout<<"\nEnter your adhar card number no\t";
					  cin>>no;
				      fin.read((char*)&r,sizeof(r));
						{
						if(r.getcdno()==no)
						    r.putres();
						 else
						     cout<<"\nwrong entry\n ";
						}
					 fin.close();
				    break;


			 case 4:   clrscr();
				     ifstream f,f1;
				     ofstream fo;
				     f.open("oldmas.dat",ios::binary|ios::in);
				     fo.open("temp.dat",ios::out|ios::binary);
				     char confirm='n';
				     cout<<"Enter your Adharcard number  to cancel your ticket:\t";
				     cin>>no;
				     f.read((char*)&r,sizeof(r));
					   if(r.getcdno()==no)
						 {
						  r.putres();
						     cout<<"Are You sure!! You want to cancel this ticket..?(y/n)\t";
							  cin>>ch;
						      if(confirm=='n')
							   {
						       f.read((char*)&r,sizeof(r));
							   r.putres();
							    }
						     else
							   {
							  fo.write((char*)&r,sizeof(r));
							  remove("oldmas.dat");
							   rename("temp.dat","oldmas.dat");
							  f1.open("oldmas.dat",ios::binary|ios::in);
							 cout<<"canceled";
							  }

					    fo.close();
					    f.close();
					    f1.close();
					  }
				      cout<<"\nYour are sucessfully  cancelled your ticket\n";
					    break;

		     case 5:
				{
				 textcolor(YELLOW+BLINK);
				  clrscr();
				  cout<<"Exiting ..... please wait";
				 }
			     exit(1);
			     break;

		    default:  clrscr();
			      cout<<"Out of choice!!!!! want to try again.... \t";
			     break;
			      }
				cout<<"\nWant to go in main menu...(y/n)\t";
				cin>>ch;
				if((ch=='n')||(ch=='N'))
				goto
				e;
		      }
	   while((mch>0&&mch<6)||(ch=='y')||(ch=='Y'));
	   e:
	   exit(0);
	 }