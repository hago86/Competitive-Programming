int stack1[100000];
int stack2[100000];
int top1 = -1, top2 = -1;

bool isEmpty() {
     if (top1 == -1 && top2 == -1)
        return true;
    return false;
}

void enqueue(int val) {
    stack1[++top1] = val;
}
void dequeue() {
    int idx;
    if (top2 == -1 && top1 != -1) {
        while (top1 != -1) {
            stack2[++top2] = stack1[top1--];
        }
        top2--;
    }else
        top2--;
}
void printElement() {
    int element;
    if (top2 == -1 && top1 != -1) {
        while (top1 != -1) {
            stack2[++top2] = stack1[top1--];
        }
        element = stack2[top2];
        cout<<element<<endl;
    }else {
        element = stack2[top2];
        cout<<element<<endl;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int queries;
    cin>>queries;
    int type;
    int val;
    //cout<<queries<<endl;
    while (queries) {
        cin>>type;
        if (type == 1) {
            cin>>val;
            enqueue(val);
        }
        else if (type == 2) {
            dequeue();
        }
        else if (type == 3) {
           // cout<<"type is "<<type<<endl;
            printElement();
        }
        queries--;
    }
    return 0;
}
