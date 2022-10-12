#include <stdio.h>
#define MAX 100
char st[100];
int top = -1;
char str[100];
char str1[100];

int findchar(char ch)
{
    if (ch == '-' || ch == '+' || ch == '*' || ch == '/' || ch == '%' || ch == '^' || ch == '&')
    {
        return 1;
    }
    else
        return 0;
}

int precedence(char ch)
{
    if (ch == '^' || ch == '&')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else if (ch == '(')
    {
        return -1;
    }
    return 0;
}

char pop()
{
    if (top == -1)
    {
        return -1;
    }
    else
    {
        return st[top--];
        // top--;
    }
}

void push(char ch)
{
    // top++;
    st[++top] = ch;
}

int main()
{
    int i, j = 0, k;
    printf("Enter the infix expression :\n");
    scanf("%s", str);
    printf("It's postfix Expression is :\n");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(')
        {
            push(str[i]);
        }
        else if (str[i] == ')')
        {
            for (k = top; st[top] != '('; k--)
            {
                // str1[j] = pop();
                // j++;
                printf("%c", pop());
            }
            pop();
        }
        else if (!findchar(str[i]))
        {
            // str1[j] = str[i];
            // j++;

            printf("%c", str[i]);
        }
        else if (precedence(str[i]))
        {
            if (precedence(st[top]) == -1)
            {
                push(str[i]);
            }
            else if ((top != -1) && (precedence(st[top]) != -1) && precedence(str[i]) <= precedence(st[top]))
            {
                printf("%c", pop());

                if (precedence(str[i]) <= precedence(st[top]))
                {
                    printf("%c", pop());
                }
                if (precedence(str[i]) <= precedence(st[top]))
                {
                    printf("%c", pop());
                }
                push(str[i]);
            }

            else if (precedence(str[i]) > precedence(st[top]))
            {
                push(str[i]);
            }
        }
    }

    while (top >= 0)
    {
        printf("%c", pop());
    }
    printf("\n");

    return 0;
}
