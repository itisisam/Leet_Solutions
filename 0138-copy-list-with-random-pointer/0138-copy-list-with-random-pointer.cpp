/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

    // Node* find(Node* curr1, Node* curr2, Node* x)
    // {
    //     if(x == nullptr)
    //     return nullptr;
        
    //     while(curr1 != x)
    //     {
    //         curr1 = curr1 -> next;
    //         curr2 = curr2 -> next;
    //     }
        
    //     return curr2;
    // };

    Node* copyRandomList(Node* head) {

        Node* headCopy = new Node(0);
        Node *tailCopy = headCopy;
        Node *temp = head;
        
        while(temp)
        {
            tailCopy -> next = new Node(temp -> val);
            tailCopy = tailCopy -> next;
            temp = temp -> next;
        }
        
        tailCopy = headCopy;
        headCopy = headCopy -> next;
        delete(tailCopy);
        
        tailCopy = headCopy;
        temp = head;

        // This gives O(n^2)
        
        // while(temp)
        // {
        //     tailCopy -> random = find(head, headCopy, temp -> random);
        //     tailCopy = tailCopy -> next;
        //     temp = temp -> next;
        // }

        // In O(n) -->

        // Creating Map to store address -->
        unordered_map<Node*, Node*>m;

        while(temp)
        {
            // Mapping the addresses -->
            m[temp] = tailCopy;
            temp = temp -> next;
            tailCopy = tailCopy -> next;
        }

        tailCopy = headCopy;
        temp = head;

        // Assign the addresses to clone LL -->
        while(temp)
        {
            tailCopy -> random = m[temp -> random];
            temp = temp -> next;
            tailCopy = tailCopy -> next;
        };
        
        return headCopy;
        
    }
};