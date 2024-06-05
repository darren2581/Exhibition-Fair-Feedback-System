#include <iostream>
#include <ctime>
#include <fstream>
#include <string.h>
#include <iomanip>
#include <windows.h>
using namespace std;
void gen(char name,char gender[0]);

void bar1(int scale1);
void bar2(int scale2);
void bar3(int scale3);
void bar4(int scale4);
void bar5(int scale5);

void bar1a(float sum1, float respond1);
void bar2a(float sum2, float respond2);
void bar3a(float sum3, float respond3);
void bar4a(float sum4, float respond4);
void bar5a(float sum5, float respond5);

void outputaverage1(float sum1, float respond1);
void outputaverage2(float sum2, float respond2);
void outputaverage3(float sum3, float respond3);
void outputaverage4(float sum4, float  respond4);
void outputaverage5(float sum5, float respond5);


int main(int argc, char** argv) 
{
	int rating;
	char option[0];
	int enter;
	int sum1=0, sum2=0, sum3=0, sum4=0, sum5=0, respondnumber=0;
	HANDLE tc=GetStdHandle(STD_OUTPUT_HANDLE);
	do
	{
	SetConsoleTextAttribute(tc,112);
	char mainpage;
	ifstream Ifil("mainpage.txt");
	while(Ifil)
	{
		Ifil.get(mainpage);
		cout<<mainpage;
	}                                                                                            
	cout<<endl<<endl<<endl;
	SetConsoleTextAttribute(tc,121);
	cout<<"\t\t\t\t\t\t"<<char(218);
	for(int a=0; a<47; a++)
	{
	cout<<char(196);
	}
	cout<<char(191)<<endl;
	cout<<"\t\t\t\t\t\t"<<char(179)<<"	1) Enter A New Survey Response     	"<<char(179)<<endl;
	cout<<"\t\t\t\t\t\t"<<char(179)<<"	2) View Summary of Survey Responses	"<<char(179)<<endl;
	cout<<"\t\t\t\t\t\t"<<char(179)<<"	3) Developer Information           	"<<char(179)<<endl;
	cout<<"\t\t\t\t\t\t"<<char(179)<<"	4) Exit Program                    	"<<char(179)<<endl;
	cout<<"\t\t\t\t\t\t"<<char(192);
	for(int a=0; a<47; a++)
	{
	cout<<char(196);
	}
	cout<<char(217)<<endl;
	cout<<"\t\t\t\t\t\t"<<"	Your Option>> ";
	SetConsoleTextAttribute(tc,112);
	cin>>option;
	switch (option[0])
	{
		case '1':
			{
				SetConsoleTextAttribute(tc,112);
				system ("cls");
				char respondent;
				ifstream Ifil("respondent.txt");
				while(Ifil)
				{
					Ifil.get(respondent);
					cout<<respondent;
				}   
				char name[300], gender[0];
				int scale1, scale2, scale3, scale4, scale5;
				cout<<endl<<endl<<endl;

				SetConsoleTextAttribute(tc,113);
				cout<<"\t\t\t\t\t\tPlease enter your name: ";
				cin.ignore(1,'\n');
				
				SetConsoleTextAttribute(tc,117);
				
				cin.getline(name,300);
				if (strcmp(name,"")==0)
				{
					while(1)
					{
						SetConsoleTextAttribute(tc,116);
						cout<<"\t\t\t\t\t\tInvalid!! Please re-enter your name: ";
						SetConsoleTextAttribute(tc,117);
						cin.getline(name,300);
						if (strcmp(name,"")!=0)
						{
							break;
						}
					}
				}
				SetConsoleTextAttribute(tc,113);
				cout<<"\t\t\t\t\t\tEnter your gender (m/f): ";
				SetConsoleTextAttribute(tc,117);
				cin>>gender;
				switch (gender[0])
				{
					case 'M':
					case 'm':
					case 'F':
					case 'f':
						{
						SetConsoleTextAttribute(tc,113);
						cout<<"\t\t\t\t\t\tThank you for your information, ";
						gen(name[300], gender);
						cout<<name;
						break;
						}
					default:
						{
							while (gender[0]!='M' && gender[0]!='m' && gender[0]!='F' && gender[0]!='f')
							{
								SetConsoleTextAttribute(tc,116);
								cout<<"\t\t\t\t\t\tInvalid gender entered! Re-enter your gender (m/f): ";
								SetConsoleTextAttribute(tc,117);
								cin>>gender;
								if (gender[0]=='M' || gender[0]=='m' || gender[0]=='F' || gender[0]=='f')
								{
									SetConsoleTextAttribute(tc,113);
									cout<<"\t\t\t\t\t\tThank you for your information, ";
									gen(name[300], gender);
									cout<<name;
								}
							}
							break;
						}
				}
				cout<<endl<<endl<<"\t\t\t\t\t\t";
				SetConsoleTextAttribute(tc,120);
				system ("pause");
				SetConsoleTextAttribute(tc,113);
				system ("cls");
				cout<<endl<<"\t\t\t\t\t\t	Welcome to our survey, ";
				gen(name[300], gender);
				cout<<name;
				cout<<"!"<<endl<<endl;
				cout<<"\t\t\t\t	Please take a few minutes to answer the following questions. Your honest"<<endl;
				cout<<"\t\t\t\t	responses will help us to better understand your experiences during"<<endl;
				cout<<"\t\t\t\t	our exhibition. Your time and input are highly appreciated and all your"<<endl;
				cout<<"\t\t\t\t	responses are kept confidential."<<endl<<endl;
				cout<<"\t\t\t\tFor each question, please enter a value based on the scale provided and press <Enter> button: "<<endl;
				cout<<"\t\t\t\t\t\t\t\t1 - Very Poor"<<endl;
				cout<<"\t\t\t\t\t\t\t\t2 - Poor"<<endl;
				cout<<"\t\t\t\t\t\t\t\t3 - Fair"<<endl;
				cout<<"\t\t\t\t\t\t\t\t4 - Good"<<endl;
				cout<<"\t\t\t\t\t\t\t\t5 - Very Good"<<endl<<endl;
				cout<<"\t\t\t\tQuestion 1: How well was the presentation / answers provided (from a scale of 1 to 5)? ";
				SetConsoleTextAttribute(tc,117);
				cin>>scale1;
				switch (scale1)
				{
					case 1:
					case 2:
					case 3:
					case 4:
					case 5:
						{
							
							break;
						}
					default:
						{
							while (scale1>5 || scale1<1)
							{
								SetConsoleTextAttribute(tc,116);
								cout<<endl<<"\t\t\t\tInvalid input. Please re-enter your response."<<endl;
								cout<<"\t\t\t\tQuestion 1: How well was the presentation / answers provided (from a scale of 1 to 5)? ";
								SetConsoleTextAttribute(tc,117);
								cin>>scale1;
							}
							break;
						}
				}
				SetConsoleTextAttribute(tc,113);
				cout<<endl<<"\t\t\t\tQuestion 2: How fun was the toy / exhibit to play with (from a scale of 1 to 5)? ";
				SetConsoleTextAttribute(tc,117);
				cin>>scale2;
				switch (scale2)
				{
					case 1:
					case 2:
					case 3:
					case 4:
					case 5:
						{
							
							break;
						}
					default:
						{
							while (scale2>5 || scale2<1)
							{
								SetConsoleTextAttribute(tc,116);
								cout<<endl<<"\t\t\t\tInvalid input. Please re-enter your response."<<endl;
								cout<<"\t\t\t\tQuestion 2: How fun was the toy / exhibit to play with (from a scale of 1 to 5)? ";
								SetConsoleTextAttribute(tc,117);
								cin>>scale2;
							}
							break;
						}
				}
				SetConsoleTextAttribute(tc,113);
				cout<<endl<<"\t\t\t\tQuestion 3: How creative was the toy / exhibit produced (from a scale of 1 to 5)? ";
				SetConsoleTextAttribute(tc,117);
				cin>>scale3;
				switch (scale3)
				{
					case 1:
					case 2:
					case 3:
					case 4:
					case 5:
						{
							
							break;
						}
					default:
						{
							while (scale3>5 || scale3<1)
							{
								SetConsoleTextAttribute(tc,116);
								cout<<endl<<"\t\t\t\tInvalid input. Please re-enter your response."<<endl;
								cout<<"\t\t\t\tQuestion 3: How creative was the toy / exhibit produced (from a scale of 1 to 5)? ";
								SetConsoleTextAttribute(tc,117);
								cin>>scale3;
							}
							break;
						}
				}
				SetConsoleTextAttribute(tc,113);
				cout<<endl<<"\t\t\t\tQuestion 4: Did the toy / exhibit function well (from a scale of 1 to 5)? ";
				SetConsoleTextAttribute(tc,117);
				cin>>scale4;
				switch (scale4)
				{
					case 1:
					case 2:
					case 3:
					case 4:
					case 5:
						{
							
							break;
						}
					default:
						{
							while (scale4>5 || scale4<1)
							{
								SetConsoleTextAttribute(tc,116);
								cout<<endl<<"\t\t\t\tInvalid input. Please re-enter your response."<<endl;
								cout<<"\t\t\t\tQuestion 4: Did the toy / exhibit function well (from a scale of 1 to 5)? ";
								SetConsoleTextAttribute(tc,117);
								cin>>scale4;
							}
							break;
						}
				}
				SetConsoleTextAttribute(tc,113);
				cout<<endl<<"\t\t\t\tQuestion 5: How would you rate this group's exhibition (from a scale of 1 to 5)? ";
				SetConsoleTextAttribute(tc,117);
				cin>>scale5;
				switch (scale5)
				{
					case 1:
					case 2:
					case 3:
					case 4:
					case 5:
						{
							
							break;
						}
					default:
						{
							while (scale5>5 || scale5<1)
							{
								SetConsoleTextAttribute(tc,116);
								cout<<endl<<"\t\t\t\tInvalid input. Please re-enter your response."<<endl;
								cout<<"\t\t\t\tQuestion 5: How would you rate this group's exhibition (from a scale of 1 to 5)? ";
								SetConsoleTextAttribute(tc,117);
								cin>>scale5;
							}
							break;
						}
				}
				SetConsoleTextAttribute(tc,113);
				cout<<endl<<"\t\t\t\tThank you for your responses. Your data has been added into our record :)"<<endl;
				ofstream Respond("Responses.txt", ios::app);
				time_t now=time(0);
				char* dt=ctime(&now);
				Respond<<name<<endl;
				Respond<<scale1<<" "<<scale2<<" "<<scale3<<" "<<scale4<<" "<<scale5<<" "<<endl;
				Respond<<dt;
				Respond<<endl;
				Respond.close();
				ifstream read("Summary.txt");
				read>>respondnumber;
				read>>sum1;
				read>>sum2;
				read>>sum3;
				read>>sum4;
				read>>sum5;
				respondnumber=respondnumber+1;
				sum1=sum1+scale1;
				sum2=sum2+scale2;
				sum3=sum3+scale3;
				sum4=sum4+scale4;
				sum5=sum5+scale5;
				
				ofstream Summary("Summary.txt", ios::out);
				Summary<<respondnumber<<endl;
				Summary<<sum1<<endl;
				Summary<<sum2<<endl;
				Summary<<sum3<<endl;
				Summary<<sum4<<endl;
				Summary<<sum5<<endl;
				cout<<endl<<endl<<"\t\t\t\t\t\t\t";
				SetConsoleTextAttribute(tc,120);
				system ("pause");
				SetConsoleTextAttribute(tc,113);
				system ("cls");
				cout<<endl<<endl;
				cout<<"	Here are your responses, ";
				gen(name[300], gender);
				cout<<name;
				cout<<": "<<endl<<endl;
				cout<<"	Quality of Presentation / Answers: "<<endl;
				cout<<"	";
				SetConsoleTextAttribute(tc,115);
				bar1(scale1);
				cout<<endl;
				cout<<"	";
				bar1(scale1);
				cout<<"	( "<<scale1<<" out of 5 )";
				cout<<endl;
				cout<<"	";
				bar1(scale1);
				SetConsoleTextAttribute(tc,113);
				cout<<endl<<endl<<"	Fun level of Toy / Exhibit: "<<endl;
				cout<<"	";
				SetConsoleTextAttribute(tc,115);
				bar2(scale2);
				cout<<endl;
				cout<<"	";
				bar2(scale2);
				cout<<"	( "<<scale2<<" out of 5 )";
				cout<<endl;
				cout<<"	";
				bar2(scale2);
				SetConsoleTextAttribute(tc,113);
				cout<<endl<<endl<<"	Creativity of Toy / Exhibit: "<<endl;
				cout<<"	";
				SetConsoleTextAttribute(tc,115);
				bar3(scale3);
				cout<<endl;
				cout<<"	";
				bar3(scale3);
				cout<<"	( "<<scale3<<" out of 5 )";
				cout<<endl;
				cout<<"	";
				bar3(scale3);
				SetConsoleTextAttribute(tc,113);
				cout<<endl<<endl<<"	Functionality of Toy / Exhibit: "<<endl;
				cout<<"	";
				SetConsoleTextAttribute(tc,115);
				bar4(scale4);
				cout<<endl;
				cout<<"	";
				bar4(scale4);
				cout<<"	( "<<scale4<<" out of 5 )";
				cout<<endl;
				cout<<"	";
				bar4(scale4);
				SetConsoleTextAttribute(tc,113);
				cout<<endl<<endl<<"	Overall Exhibition's Rating: "<<endl;
				cout<<"	";
				SetConsoleTextAttribute(tc,115);
				bar5(scale5);
				cout<<endl;
				cout<<"	";
				bar5(scale5);
				cout<<"	( "<<scale5<<" out of 5 )";
				cout<<endl;
				cout<<"	";
				bar5(scale5);
				SetConsoleTextAttribute(tc,113);
				cout<<endl<<endl;
				SetConsoleTextAttribute(tc,120);
				system ("pause");
				system ("cls");
				break;
			}
		case '2':
			{
				ifstream read("Summary.txt");
				read>>respondnumber;
				read>>sum1;
				read>>sum2;
				read>>sum3;
				read>>sum4;
				read>>sum5;
				SetConsoleTextAttribute(tc,112);
				system ("cls");
				char sumary;
				ifstream Ifil("sumres.txt");
				while(Ifil)
				{
					Ifil.get(sumary);
					cout<<sumary;
				}  
				SetConsoleTextAttribute(tc,113);
				cout<<"	Here is the summary of all the "<<respondnumber<<" responses to date: "<<endl<<endl;
				cout<<"	Quality of Presentation / Answers: "<<endl;
				cout<<"	";
				bar1a(sum1,respondnumber);
				cout<<endl;
				cout<<"	";
				bar1a(sum1,respondnumber);
				outputaverage1(sum1,respondnumber);
				cout<<endl;
				cout<<"	";
				bar1a(sum1,respondnumber);
				cout<<endl<<endl<<"	Fun level of Toy / Exhibit:  "<<endl;
				cout<<"	";
				bar2a(sum2,respondnumber);
				cout<<endl;
				cout<<"	";
				bar2a(sum2,respondnumber);
				outputaverage2(sum2, respondnumber);
				cout<<endl;
				cout<<"	";
				bar2a(sum2,respondnumber);
				cout<<endl<<endl<<"	Creativity of Toy / Exhibit: "<<endl;
				cout<<"	";
				bar3a(sum3,respondnumber);
				cout<<endl;
				cout<<"	";
				bar3a(sum3,respondnumber);
				outputaverage3(sum3, respondnumber);
				cout<<endl;
				cout<<"	";
				bar3a(sum3,respondnumber);
				cout<<endl<<endl<<"	Functionality of Toy / Exhibit: "<<endl;
				cout<<"	";
				bar4a(sum4,respondnumber);
				cout<<endl;
				cout<<"	";
				bar4a(sum4,respondnumber);
				outputaverage4(sum4, respondnumber);
				cout<<endl;
				cout<<"	";
				bar4a(sum4,respondnumber);
				cout<<endl<<endl<<"	Overall Exhibition's Rating: "<<endl;
				cout<<"	";
				bar5a(sum5,respondnumber);
				cout<<endl;
				cout<<"	";
				bar5a(sum5,respondnumber);
				outputaverage5(sum5, respondnumber);
				cout<<endl;
				cout<<"	";
				bar5a(sum5,respondnumber);
				cout<<endl<<endl;
				SetConsoleTextAttribute(tc,120);
				system ("pause");
				system ("cls");
				break;
			}
		case '3':
			{
				SetConsoleTextAttribute(tc,112);
				system ("cls");
				system ("group.png");
				cout<<"				  _____                 _                         _____        __      \n";
				cout<<"				 |  __ \\               | |                       |_   _|      / _|     \n";
				cout<<"				 | |  | | _____   _____| | ___  _ __   ___ _ __    | |  _ __ | |_ ___  \n";
				cout<<"				 | |  | |/ _ \\ \\ / / _ \\ |/ _ \\| '_ \\ / _ \\ '__|   | | | '_ \\|  _/ _ \\ \n";
				cout<<"				 | |__| |  __/\\ V /  __/ | (_) | |_) |  __/ |     _| |_| | | | || (_) | \n";
				cout<<"				 |_____/ \\___| \\_/ \\___|_|\\___/| .__/ \\___|_|    |_____|_| |_|_| \\___/  \n";
				cout<<"				                               | |                                     \n";
				cout<<"				                               |_|                                     \n";
				SetConsoleTextAttribute(tc,117);
				string n1 = "Devon Wee Yun Xin";
				string n2 = "Darren Tan Thong En";
				string n3 = "Sim Zhe Yi";
				string n4 = "Mayrion Ngu Ngiik Ting";
				string n5 = "Wong Kho Ik";
				cout<<endl;
				cout<<"					Group 2E1-C:"<<endl;
				cout<<"					1. "<<n1<<" (700046393)"<<endl;
				cout<<"					2. "<<n2<<" (700045799)"<<endl;
				cout<<"					3. "<<n3<<" (700046377)"<<endl;
				cout<<"					4. "<<n4<<" (700046629)"<<endl;
				cout<<"					5. "<<n5<<" (700045925)"<<endl<<endl;
				cout<<endl<<"		Team Member"<<"                    "<<"Task/Job Description"<<endl;
				cout<<"	=======================================================================================================================";
				cout<<endl;
				cout<<endl<<"		"<<n1<<"              Programming and designing Survey Collection and Storing Survey Responses"<<endl;
				cout<<endl<<"		"<<n2<<"            Programming and designing Survey Collection and Storing Survey Responses"<<endl;
				cout<<endl<<"		"<<n3<<"                     Programming and designing the Main Page and Program Closing"<<endl;
				cout<<endl<<"		"<<n4<<"         Programming and designing Developer Information Display"<<endl;
				cout<<endl<<"		"<<n5<<"                    Programming and designing Summary of Survey Responses"<<endl<<endl<<endl;
				cout<<"			";
				SetConsoleTextAttribute(tc,120);
				system("pause");
				SetConsoleTextAttribute(tc,113);
				system("cls");
				break;
			}
		case '4':
			{
				SetConsoleTextAttribute(tc, 116);
				system ("cls");
				char exiting;
				ifstream Ifil("exit.txt");
				while(Ifil)
				{
					Ifil.get(exiting);
					cout<<exiting;
				}    
				char Ans[0];
				cout<<"\t\t\t\t\t\tAre you sure you want to exit (y / n)? ";
				cin>>Ans;
				switch (Ans[0])
				{
					case 'Y':
					case 'y':
						{
							cout<<endl<<"\t\t\t\t\t\tThank you for using our program! :) "<<endl<<endl<<endl;
							cout<<"                                                              ____               _ \n";
							cout<<"                                                             |  _ \\             | |\n";
							cout<<"                                                             | |_) |_   _  ___  | |\n";
							cout<<"                                                             |  _ <| | | |/ _ \\ | |\n";
							cout<<"                                                             | |_) | |_| |  __/ |_|\n";
							cout<<"                                                             |____/ \\__, |\\___| (_)\n";
							cout<<"                                                                     __/ |         \n";
							cout<<"                                                                    |___/          \n";
							exit(0);
							break;
						}
					case 'n':
					case 'N':
						{
							SetConsoleTextAttribute(tc,121);
							cout<<endl<<"\t\t\t\t\t\tYou can continue on using our program!! "<<endl<<endl;
							cout<<"\t\t\t\t\t\t";
							SetConsoleTextAttribute(tc,120);
							system("pause");
							SetConsoleTextAttribute(tc,113);
							system ("cls");
							break;
						}
					default:
						{
							do
							{
								cout<<endl<<"\t\t\t\t\t\tInvalid Choice! Please re-enter! "<<endl;
								cout<<"\t\t\t\t\t\tAre you sure you want to exit (y / n)? ";
								cin>>Ans;
								if (Ans[0]=='Y' || Ans[0]=='y')
								{
									cout<<endl<<"\t\t\t\t\t\tThank you for using our program! :) "<<endl<<endl<<endl;
									cout<<"                                                              ____               _ \n";
									cout<<"                                                             |  _ \\             | |\n";
									cout<<"                                                             | |_) |_   _  ___  | |\n";
									cout<<"                                                             |  _ <| | | |/ _ \\ | |\n";
									cout<<"                                                             | |_) | |_| |  __/ |_|\n";
									cout<<"                                                             |____/ \\__, |\\___| (_)\n";
									cout<<"                                                                     __/ |         \n";
									cout<<"                                                                    |___/          \n";
									exit(0);
								}
								if (Ans[0]=='n' || Ans[0]=='N')
								{
									SetConsoleTextAttribute(tc,121);
									cout<<endl<<"\t\t\t\t\t\tYou can continue on using our program!! "<<endl<<endl;
									cout<<"\t\t\t\t\t\t";
									SetConsoleTextAttribute(tc,120);
									system("pause");
									SetConsoleTextAttribute(tc,113);
									system ("cls");
								}
							}while (Ans[0]!='Y' && Ans[0]!='y' && Ans[0]!='N' && Ans[0]!='n');
							break;
						}
				}
				break;
			}
		default:
			{
				if (option[0]!=4)
				{
					system ("cls");
					cout<<endl<<endl;
					cout<<"\t\t\t\t\t\tInvalid option entered. Re-enter your option"<<endl<<endl;
				}
				break;
			}
	}
	}while (option[0]!='D');
	return 0;
}
void gen(char name,char gender[0])
{
	if (gender[0]=='M' || gender[0]=='m')
	{
		cout<<"Mr. ";
	}
	if (gender[0]=='F' || gender[0]=='f')
	{
		cout<<"Ms. ";
	}
}
void bar1(int scale1)
{
	for (int loop=0; loop<scale1; loop++)
	{
		cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
	}
}
void bar2(int scale2)
{
	for (int loop=0; loop<scale2; loop++)
	{
		cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
	}
}
void bar3(int scale3)
{
	for (int loop=0; loop<scale3; loop++)
	{
		cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
	}
}
void bar4(int scale4)
{
	for (int loop=0; loop<scale4; loop++)
	{
		cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
	}
}
void bar5(int scale5)
{
	for (int loop=0; loop<scale5; loop++)
	{
		cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
	}
}
void bar1a(float sum1,float respond1)
{
	float average1a;
	average1a=sum1/respond1;
	for(float loop=0; loop<average1a; loop=loop+0.1)
	{
		cout<<char(219);
	}
}
void bar2a(float sum2, float respond2)
{
	float average2a;
	average2a=sum2/respond2;
	for(float loop=0; loop<average2a; loop=loop+0.1)
	{
		cout<<char(219);
	}
}
void bar3a(float sum3, float respond3)
{
	float average3a;
	average3a=sum3/respond3;
	for(float loop=0; loop<average3a; loop=loop+0.1)
	{
		cout<<char(219);
	}
}
void bar4a(float sum4, float respond4)
{
	float average4a;
	average4a=sum4/respond4;
	for(float loop=0; loop<average4a; loop=loop+0.1)
	{
		cout<<char(219);
	}
}
void bar5a(float sum5, float respond5)
{
	float average5a;
	average5a=sum5/respond5;
	for(float loop=0; loop<average5a; loop=loop+0.1)
	{
		cout<<char(219);
	}
}
void outputaverage1(float sum1, float respond1)
{
	float average1b;
	average1b=sum1/respond1;
	cout<<fixed;
	cout<<setprecision(1);
	cout<<"	( "<<average1b<<" out of 5 )";
}
void outputaverage2(float sum2, float respond2)
{
	float average2b;
	average2b=sum2/respond2;
	cout<<fixed;
	cout<<setprecision(1);
	cout<<"	( "<<average2b<<" out of 5 )";
}
void outputaverage3(float sum3, float respond3)
{
	float average3b;
	average3b=sum3/respond3;
	cout<<fixed;
	cout<<setprecision(1);
	cout<<"	( "<<average3b<<" out of 5 )";
}
void outputaverage4(float sum4, float respond4)
{
	float average4b;
	average4b=sum4/respond4;
	cout<<fixed;
	cout<<setprecision(1);
	cout<<"	( "<<average4b<<" out of 5 )";
}
void outputaverage5(float sum5, float respond5)
{
	float average5b;
	average5b=sum5/respond5;
	cout<<fixed;
	cout<<setprecision(1);
	cout<<"	( "<<average5b<<" out of 5 )";
}

