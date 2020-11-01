#include <iostream>
using namespace std;
class cqueue{

  int front ;
  int rear;
  int arr[5];
public:
cqueue(){

    front=rear=-1;
    for(int i=1;i<=5;i++)
    {
      arr[i]=0;
    }
}

bool isempty()
{
    if(front ==-1 && rear==-1)
     return true;
    else
    return false;
}
bool isfull()
{
  if((rear+1)%5==front)
  return true;
  else
  return false;
}
void enqueue(int val)
{
  if(isfull())
   { cout<<"QUEUE IS FULL\n";
    return;}
  else if(isempty())
  {
    front=rear=0;
    arr[rear]=val;
  }
  else
    { rear=(rear+1)%5;
      arr[rear]=val;
    }
}

void dequeue()
{
  if(isempty())
   { cout<<"QUEUE IS ALREADY EMPTY\n";
    return;
   }
  else if(rear==front)
  {
    arr[front]=0;
    rear=front=-1;
  }
  else
  {
    arr[front]=0;
    front=(front+1)%5;
  }
}
void display()
{


  for(int i=0;i<5;i++)
  {
    cout<<arr[i]<<" "<<"\n";
  }
}
};

int main()
{
  cqueue c;
  int value;
  int option;
  do{
      cout<<"       CIRCULAR QUEUE     \n ";
      cout<<"1. ISEMPTY FUNCTION  \n ";
      cout<<"2. ISFULL FUNCTION  \n ";
      cout<<"3. ENQUEUE FUNCTION  \n ";
      cout<<"4. DEQUEUE FUNCTION  \n ";
      cout<<"5. DISPLAY FUNCTION  \n ";
      cout<<"ENTER YOUR OPTION  \n ";
   cin>>option;
  switch(option)
{
  case 1:
        if(c.isempty())
            cout<<" QUEUE IS EMPTY\n";
        else
        cout<<"QUEUE IS NOT EMPTY\n";
        break;

  case 2:
        if(c.isfull())
            cout<<" QUEUE IS FULL\n";
        else
        cout<<"QUEUE IS NOT FULL\n";
        break;
  case 3:
      cout<<"ENTER THE VALUE \n";
      cin>>value;
      c.enqueue(value);
      break;

  case 4:
      c.dequeue();
      cout<<" ELEMENT IS REMOVED\n";
      break;
  case 5:
      c.display();
    break;
  default:
      cout<<"SELECT A VALID OPTION\n";
    }
     }
while(option!=0);
}
