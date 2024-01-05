#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int temp)
    {
        this->val = temp;
        this->next = NULL;
    }
};

Node *createLL(std::vector<int> &num)
{
    Node *head = new Node(num[0]);
    Node *pointer = head;

    for (int i = 1; i < num.size(); i++)
    {
        Node *temp = new Node(num[i]);
        pointer->next = temp;
        pointer = temp;
    }

    return head;
}

int getGcd(int a, int b)
{
    if (b == 0)
        return a;

    return getGcd(b, a % b);
}

int main()
{
    std::vector<int> num(5);
    std::iota(begin(num), end(num), 1);

    Node *head = createLL(num);

    Node *temp = head;
    Node *curr = head, *prev = NULL;

    while (curr)
    {
        if (prev)
        {
            int gcd = getGcd(prev->val, curr->val);

            Node *newNode = new Node(gcd);
            prev->next = newNode;

            newNode->next = curr;
        }

        prev = curr;
        curr = curr->next;
    }

    Node *inox = head;
    while (inox)
    {
        std::cout << inox->val << " ";
        inox = inox->next;
    }
}