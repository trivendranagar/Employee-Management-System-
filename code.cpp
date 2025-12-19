 #include<iostream>
 #include<string.h>
 using namespace std;
 class Employee 
 {
  public:
  char name[20];
  int age ,salary;
  Employee()
  {
    strcpy(name,"Unknown");
    age=18;
    salary=4000;
  }
  void input()
  {
    cout<<"Enter name : ";
    cin>>name;

    cout<<endl<<"Enter age : ";
    cin>>age;

    cout<<endl<<"Enter salary : ";
    cin>>salary;
  }
  void output()
  {
    cout<<endl<<"Name : "<<name;
    cout<<endl<<"Age : "<<age;
    cout<<endl<<"Salary : "<<salary;
  }
 };
 int main()
 {
    int choice;
    Employee *emp[100];
    int index=0,i;
   while(1)
   {
    cout<<endl<<"Press 1 for add new Employee!";
    cout<<endl<<"Press 2 for display all  Employee data !";
    cout<<endl<<"Press 3 for search an Employee ";
    cout<<endl<<"Press 4 for get detail of hightest payee Employee ! ";
    cout<<endl<<"Press 5 for get detail of lowest payee Employee ! ";
    cout<<endl<<"Enter your choice";
    cin>>choice;

    if(choice==1)
    {
      emp[index]=new Employee();
      emp[index]->input();
      index++;
    }
    else if (choice==2)
    {
      for(i=0;i<index;i++)
      {
        emp[i]->output();
      }
    }
    else if(choice==3)
    {
      char search[20];
      int flag=-1;
      cout<<"Enter name that you want to  search : ";
      cin>>search;
      for(i=0;i<index;i++)
      {
        if(strcmp(search,emp[i]->name)==0)
        {
          flag=i;
          break;
        }
      }
      if(flag==-1)
      {
        cout<<endl<<"No such employee";
      }
      else 
      {
        cout<<endl<<"Employee found";
        cout<<endl<<"Name : "<<emp[flag]->name;
        cout<<endl<<"Age : "<<emp[flag]->age;
        cout<<endl<<"Salary : "<<emp[flag]->salary;
      }
    }
    else if (choice==4)
    {
      int b=-9999;
      int flag=-1;
      for(i=0;i<index;i++)
      {
        if(b<emp[i]->salary)
        {
          b=emp[i]->salary;
          flag=i;
        }
      }
      cout<<endl<<"Highest payee Employee";
      cout<<endl<<"Name : "<<emp[flag]->name;
      cout<<endl<<"Age : "<<emp[flag]->age;
      cout<<endl<<"Salary : "<<emp[flag]->salary;
    }
    else if (choice==5)
    {
      int b=99999;
      int flag=-1;
      for(i=0;i<index;i++)
      {
        if (b>emp[i]->salary)
        {
          b=emp[i]->salary;
          flag=i;
        }
      }
      cout<<endl<<"Lowest payee employee ";
      cout<<endl<<"Name : "<<emp[flag]->name;
      cout<<endl<<"Age : "<<emp[flag]->age;
      cout<<endl<<"Salary : "<<emp[flag]->salary;
    }
   }
 }