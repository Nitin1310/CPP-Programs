//Assignment No 6: Program to Check Palindrome using Stack.



#include <string>
#include <iostream>
#define STACKSIZE 80
#define TRUE 1
#define FALSE 0
using namespace std;

class Stack 
{
   public:
          void StackInit();
          int IsStackEmpty();
          int IsStackFull();
          int StackPush(char c);
          char StackPop();
          char ViewStackTop();
   private:
          char myStack[80];
          int top;
};

void Stack::StackInit()
{
  top = -1;
}

int Stack::IsStackEmpty()
{
  if (top == -1)
    return TRUE;
  return FALSE;
}

int Stack::IsStackFull()
{
  if (top == (STACKSIZE - 1))
    return TRUE;
  return FALSE;
}

int Stack::StackPush(char c)
{
  if (top == (STACKSIZE - 1))
    return FALSE;
  myStack[++top] = c;
  return TRUE;
}

char Stack::StackPop()
{
  if (top == -1)
    return '\0';
  return myStack[top--];
}

char Stack::ViewStackTop()
{
  if (top == -1)
    return '\0';
  return myStack[top];
}

int main()
{
    char input[100], output[100];
    Stack s1;
    Stack s2;
    Stack s3;

    s1.StackInit();
    cout << "Please Enter Anything For Palindrome Check" << endl;
    fflush(stdin);
    cin.getline(input, 100);


    for (int i=0;i<strlen(input);i++)

    {
     if (isupper(input[i]))
     input[i]=tolower(input[i]);

     if (isspace(input[i]))
     i++;

     if (ispunct(input[i]))
     i++;

     if (isalpha(input[i]))
     s1.StackPush(input[i]) & s2.StackPush(input[i]);

     }
      cout << "Reverse String: ";
      while (!s1.IsStackEmpty())
      cout << s1.StackPop();
      cout << "" << endl;
    system("pause”;
    return 0;
}


