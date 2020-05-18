struct Node
{
    struct Node *next;
    int value;
};

void insert(struct Node *linked_list, int data);
void display(struct Node *linked_list);

int main()
{
    return 0;
}