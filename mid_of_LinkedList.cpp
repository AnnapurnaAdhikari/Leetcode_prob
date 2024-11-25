//easy
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


//approach1: copying LL value to an array and then len/2 gives the middle element t: O(n) s: O(n)
ListNode* middleNode(ListNode* head) {
        vector<ListNode*> arr;
        int len = 0;
        while(head != nullptr){
            arr.push_back(head);
            head = head->next;
            len++; 
        }
        return arr[len/2];
        
    }

//approach 2: 
ListNode* middleNode(ListNode* head){
        ListNode* mid = head;
        ListNode* end = head;
        while(end != nullptr && end->next != nullptr){
            mid = mid->next;
            end = end->next->next;

        }
        return mid;
        
    }

