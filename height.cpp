#include<bits/stdc++.h>
using namespace std;
int n=10;
const vector<int>vc(n);
struct Node{

    int data;
    Node* l, *r;
}*root = NULL, *p = NULL, *np = NULL, *q;

void create(int n)
{
    int value,c = 0;
    while (c < n)
    {
        if (root == NULL)
        {
            root = new Node;

            cin>>root->data;
            root->r=NULL;
            root->l=NULL;
        }
        else
        {
            p = root;

            cin>>value;
            while(true)
            {
                if (value <= p->data)
                {
                    if (p->l == NULL)
                    {
                        p->l = new Node;
                        p = p->l;
                        p->data = value;
                        p->l = NULL;
                        p->r = NULL;

                        break;
                    }
                    else if (p->l != NULL)
                    {
                        p = p->l;
                    }
                }
                else if (value > p->data)
                {
                    if (p->r == NULL)
                    {
                        p->r = new Node;
                        p = p->r;
                        p->data = value;
                        p->l = NULL;
                        p->r = NULL;

		                break;
		            }
                    else if (p->r != NULL)
                    {
                        p = p->r;
                    }
                 }
             }
     }
     c++;
    }
}
int height(Node* root)
{
    if(root==NULL)
        return 0;

    return 1+ max(height(root->l),height(root->r));
}
int main()
{
  int n;
  cin>>n;
  create(n);
 int h= height(root);

cout<<h;
return 0;
}
