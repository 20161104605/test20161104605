#include<iostream>
using namespace std;
#define LEN sizeof(struct student)
#include<malloc.h>
struct student
{
   char num[6];
   char name[8];
   char sex[2];
   int age;
   struct student *next;
}stu[10];

int main()
{
      struct student *p,*pt,*head;
      int i,length,iage,flag=1;
      int find=0;
      while(flag==1)
     {
      cout<<"input length of list(<10):";
      cin>>length;
      if(length<10)flag=0;
     }
     for (i=0;i<length;i++)
     {
      p=(struct student * ) malloc(LEN);
      if(i==0)
      head=pt=p;
      else
      pt->next=p;
	  pt=p;
	  cout<<"No.";
	  cin>>p->num;
	  cout<<"name:";
	  cin>>p->name;
	  cout<<"sex:";
	  cin>>p->sex;
	  cout<<"age:";
	  cin>>p->age;
		
     }
     p->next=NULL;
     p=head;
     cout<<"\n No. name sex age\n";
     while(p!=NULL)
    {
	cout<<p->num<<p->name<<p->sex<<p->age;
	p=p->next;
    }
	cout<<"input age:";
	cin>>iage;
	pt=head;
	p=pt;
	if(pt->age==iage)
	{
	p=pt->next;
	head=pt=p;
	find=1;
	}
	else
	pt=pt->next;
	while(pt!=NULL)
	{
	if(pt->age==iage)
	{
	p->next=pt->next;
	find=1;
	}
	else
	p=pt;
	pt=pt->next;
	}
	if(!find)
	cout<<"not found %d."<<iage;
	p=head;
	cout<<"\n No. name sex age\n";
	while(p!=NULL)
	{
	cout<<p->num<<p->name;
	cout<<p->sex<<p->age;
	p=p->next;
	}
}

