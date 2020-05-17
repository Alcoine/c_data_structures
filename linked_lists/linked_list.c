struct Node
{
    struct Node *next;
    int value;
};

void reverse(struct Node *linked_list);
void insert(struct Node *linked_list, int data);
void delete(struct Node *linked_list, int index);

int main()
{
    return 0;
}