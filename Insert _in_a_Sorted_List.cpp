class Solution{
  public:
    Node *sortedInsert(struct Node* head, int data) {
     
          Node* newNode = new Node(data);

        if (!head || head->data >= data) {
            newNode->next = head;
            return newNode;
        }

        Node* prev = head;
        Node* curr = head->next;

        while (curr && curr->data < data) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = newNode;
        newNode->next = curr;

        return head;
    }
};
