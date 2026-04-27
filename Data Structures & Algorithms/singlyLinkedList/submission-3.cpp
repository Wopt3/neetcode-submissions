class LinkedNode{
    public:
    int val;
    LinkedNode* next =nullptr;

    LinkedNode(int val_){
        val=val_;
    }
};


class LinkedList {
public:
LinkedNode* head;
LinkedNode* tail;

    LinkedList() {
        head = new LinkedNode(-1);
        tail=head;
    }

    int get(int index) {
        LinkedNode* tmp=head->next;
        if(!tmp){
                return -1;
            }
        for(int i=0;i<index;i++){
            if(!tmp){
                return -1;
            }
            tmp=tmp->next;
        }
        return tmp ? tmp->val : -1;
    }

    void insertHead(int val) {
        LinkedNode* tmp=new LinkedNode(val);
        tmp->next=head->next;
        head->next=tmp;
        if (tail == head) {
        tail = tmp;
        }
    }
    
    void insertTail(int val) {
        tail->next=new LinkedNode(val);
        tail=tail->next;
    }

    bool remove(int index) {
        int i = 0;
        LinkedNode* curr = head;
        while (i < index && curr) {
            i++;
            curr = curr->next;
        }
        
        // Remove the node ahead of curr
        if (curr && curr->next) {
            if (curr->next == tail) {
                tail = curr;
            }
            curr->next = curr->next->next;
            return true;
        }
        return false;
    }

    vector<int> getValues() {
        vector<int> answer;
        LinkedNode* tmp=head->next;
        while(tmp){
            answer.push_back(tmp->val);
            tmp=tmp->next;
        }
        return answer;
    }
};
