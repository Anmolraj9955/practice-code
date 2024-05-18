Node *kReverse(Node *head, int k)
{

    if (head == NULL)
    {

        return NULL;
    }

    Node *prev = NULL;

    Node *next = NULL;

    Node *curr = head;

    int count = 0;

    while (count < k && curr != NULL)
    {

        next = curr->next;

        curr->next = prev;

        prev = curr;

        curr = next;

        count++;
    }

    int nodeCount = 0;

    Node *temp = next;

    while (temp != NULL)
    {

        temp = temp->next;

        nodeCount++;
    }

    if (next != NULL && nodeCount >= k)
    {

        head->next = kReverse(next, k);
    }

    else if (nodeCount < k)
    {

        head->next = curr;
    }

    return prev;
}