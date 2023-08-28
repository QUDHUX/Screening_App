#include<iostream>
using namespace std;

int arr2[20],arr3[20],arr4[20],arr5[20], arr6[20], arr7[20], arr8[20];
float arr9[20], arr10[20];
string arr1[20],arr11[20];

int total=0;

void enter()

{

		int ch=0;

			cout<<"How many students do you want to screen?"<<endl;

			cin>>ch;

			if(total==0)

			{

			total=ch+total;

			for(int i=0;i<ch;i++)

			{

				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
                cout<<"instructions: Enter space with underscore e.g Yam_and_egg"<<endl;
                cout<<"You are to enter your jamb score and the corresponding values of the grades of your 5 best subjects as stated below"<<endl;
                cout<<"Note: A is 10, B2 is 9, B3 is 8, C is 7" <<endl;
				cout<<"Enter name ";
				cin>>arr1[i];
               
				cout<<"Enter sub_1 ";
				cin>>arr2[i];
				cout<<"Enter sub_2 ";
				cin>>arr3[i];
				cout<<"Enter sub_3 ";
				cin>>arr4[i];
				cout<<"Enter sub_4 ";
				cin>>arr5[i];
				cout<<"Enter sub_5 ";
				cin>>arr6[i];
				cout<<"Enter jmb ";
				cin>>arr7[i];
				cout<<"Enter course of study ";
				cin>>arr11[i];

                arr8[i] = arr2[i]+arr3[i]+arr4[i]+arr5[i]+arr6[i];
                arr9[i] = arr7[i]/8;
                arr10[i] = arr8[i] + arr9[i];

			}

	    	}

	    	else

	    	{

	    		for(int i=total;i<ch+total;i++)

			{

				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;

				cout<<"Enter name ";
				cin>>arr1[i];
				cout<<"Enter sub_1 ";
				cin>>arr2[i];
				cout<<"Enter sub_2 ";
				cin>>arr3[i];
				cout<<"Enter sub_3 ";
				cin>>arr4[i];
				cout<<"Enter sub_4 ";
				cin>>arr5[i];
				cout<<"Enter sub_5 ";
				cin>>arr6[i];
				cout<<"Enter jmb ";
				cin>>arr7[i];
				cout<<"Enter course of study ";
				cin>>arr11[i];

                arr8[i] = arr2[i]+arr3[i]+arr4[i]+arr5[i]+arr6[i];
                arr9[i] = arr7[i]/8;
                arr10[i] = arr8[i] + arr9[i];

}
			total=ch+total;

    		}
}

void show()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		for(int i=0;i<total;i++)

	    		{

	    		cout<<"\nData of Student "<<i+1<<endl<<endl;

	    		cout<<"Name "<<arr1[i]<<endl;

	    		cout<<"sub_1 "<<arr2[i]<<endl;

	    		cout<<"sub_2 "<<arr3[i]<<endl;

	    		cout<<"sub_3 "<<arr4[i]<<endl;

	    		cout<<"sub_4 "<<arr5[i]<<endl;
	    		cout<<"sub_5 "<<arr6[i]<<endl;
	    		cout<<"jmb "<<arr7[i]<<endl;
	    		cout<<"screening score: "<<arr10[i]<<endl;

               
                if(arr10[i]>=70)
                cout<<"Admission status: Admitted to study "<<arr11[i]<<endl;
	    		else
                cout<<"No admission yet"<<endl;
	    	    }

	    	}

}

void search()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

	string name;

				cout<<"Enter the name of student"<<endl;

				cin>>name;

				for(int i=0;i<total;i++)

				{

					if(name==arr1[i])

					{

				cout<<"Name "<<arr1[i]<<endl;

	    		cout<<"sub_1 "<<arr2[i]<<endl;

	    		cout<<"sub_2 "<<arr3[i]<<endl;

	    		cout<<"sub_3 "<<arr4[i]<<endl;

	    		cout<<"sub_4 "<<arr5[i]<<endl;
	    		cout<<"sub_5 "<<arr6[i]<<endl;
	    		cout<<"jmb "<<arr7[i]<<endl;
	    		cout<<"screening score: "<<arr10[i]<<endl;

                if(arr10[i]>=70)
                {
                    cout<<"Admission status: Admitted to study"<<arr11[i]<<endl;
                }
	    		else
                {
                    cout<<"Not admitted"<<endl;
                }

					}

				}

			}

}

void deleterecord()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		int a;

	        	cout<<"Press 1 to delete all record"<<endl;

				cout<<"Press 2 to delete specific record"<<endl;

				cin>>a;

				if(a==1)

				{

					total=0;

					cout<<"All record is deleted..!!"<<endl;

				}

				else if(a==2)

				{

				string name;

				cout<<"Enter the roll no of student which you wanted to delete"<<endl;

				cin>> name;

				for(int i=0;i<total;i++)

				{

					if(name==arr1[i])

					{

						for(int j=i;j<total;j++)

						{

						arr1[j]=arr1[j+1];

						arr2[j]=arr2[j+1];

					    arr3[j]=arr3[j+1];

						arr4[j]=arr4[j+1];

						arr5[j]=arr5[j+1];
						arr6[j]=arr6[j+1];
						arr7[j]=arr7[j+1];
						arr10[j]=arr10[j+1];
						arr11[j]=arr11[j+1];
					

				     	}

					total--;

					cout<<"Your required record is deleted"<<endl;

					}

				}

				}


			else 

			{

				cout<<"Invalid input";

			}

}

}

main()

{

	int value;

	while(true)

	{

	cout<<"\nPress 1 to enter data"<<endl;

	cout<<"Press 2 to show data"<<endl;

	cout<<"Press 3 to search data"<<endl;

	cout<<"Press 4 to delete data"<<endl;

	cout<<"Press 5 to exit"<<endl;

   
	cin>>value;

	switch(value)

	{

		case 1:

			enter();

			break;

		case 2:

			show();

			break;

		case 3:

			search();

			break;

		case 4:

			deleterecord();

			break;

		case 5:

			exit(0);

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

}
    return 0;
}