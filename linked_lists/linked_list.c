struct Node
{
    struct Node *next;
    int value;
};

void reverse(struct Node *linked_list);
void insert(struct Node *linked_list, int data);
void delete(struct Node *linked_list, int index);
void display(struct Node *linked_list);

int main()
{
    // https://www.cprogramming.com/tutorial/c/lesson15.html
    return 0;
}