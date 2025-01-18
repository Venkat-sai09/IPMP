
#include <bits/stdc++.h>
using namespace std;
class nd {
public:
    int data;
    nd* next;
    nd(int x) {
        data = x;
        next = nullptr;
    }
};
void deleteList(nd* curr) {
    while (curr != NULL) {
        nd* temp = curr->next;
        delete curr;
        curr = temp;
    }
}
int main() {
    nd* head = new nd(1);
    head->next = new nd(2);
    head->next->next = new nd(3);
    head->next->next->next = new nd(4);
    head->next->next->next->next = new nd(5);

    deleteList(head);
    head = nullptr; 
 
    cout << "NULL";

    return 0;
}