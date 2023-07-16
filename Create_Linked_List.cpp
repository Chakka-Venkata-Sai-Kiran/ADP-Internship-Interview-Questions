#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data = x;
        next = nullptr;
    }
};
int main(){
    int n;
    cin >> n;
    node *head = nullptr, *last = nullptr;
    while(n--){
        int x;
        cin >> x;
        node *newnode = new node(x);
        if(!head)
            head = last = newnode;
        else{
            last -> next = newnode;
            last = last -> next;
        }
    }
    node *temp = head;
    while(temp){
      cout << temp -> data << " ";
      temp = temp -> next;
    }
    return 0;
}
