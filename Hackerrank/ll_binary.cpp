long long getNumber(Node *head) {
    
   int count = 0;
    long long number = 0;
    Node *temp = head;
    while( head )
        {
            count++;
            head = head->next;
    }
    
    if( count == 1 ) {
       if( temp->data == 0)
        return 0;
       else
           return 2;
    }
        
    
    int *arr = new int[count];
    
    for(int i = 0 ; i < count ; i++)
    {
        arr[i] = temp->data;
        temp = temp->next;
    }
    
    int c = count ;
    for(int i = 0 ; i < count ; i++)
        {
            long long mul = 1;
            for(int j = 0 ; j < c ;j++)
                mul = mul * 2;
            c--;
            number += arr[i]*mul;
        
    }
            
            

    
    return number/2;
}