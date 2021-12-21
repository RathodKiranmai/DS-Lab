#include<stdio.h>
#include<stdlib.h>
	struct node{
	    int data,ele,pos;
	    struct node*prev;
	    struct node*next;
	};
	struct node *head = NULL, *tail = NULL, *cur, *temp, *temp1;
	struct node *create(){
	    int n;
	    printf("Enter no of nodes :");
	    scanf("%d",&n);
	    while(n--){
	        cur = (struct node*)malloc(sizeof(struct node));
	        scanf("%d",&(cur->data));
	        cur->prev = NULL;
	        cur->next = NULL;
	    if (head == NULL){
	         head = cur;
	    }
	    else{
	        temp = head;
	        while(temp->next!=NULL)
	            temp = temp->next;
	        tail=temp->next = cur;
	        cur->prev =temp;
	    }
	    }
	    return head;
	}
	struct node *insert_begin(int ele){
	    cur = (struct node*)malloc(sizeof(struct node));
	    cur->data = ele;
	    cur->next = head;
	    head->prev = cur;
	    cur->prev = NULL;
	    head = cur;
	    return head;
	}
	struct node *insert_end(int ele){
	    cur = (struct node*)malloc(sizeof(struct node));
	    cur->data = ele;
	    cur->next = NULL;
	    tail->next = cur;
	    cur->prev = tail;
	    tail = cur;
	    return head;
	}
	struct node *insert_pos(int pos,int ele){
	    int c=1;
	    cur = (struct node*)malloc(sizeof(struct node));
	    cur->data = ele;
	    temp = head;
	    while(c<pos){
	        temp1 = temp;
	        temp = temp->next;
	        c++;
	    }
	    temp1->next = cur;
	    cur ->prev = temp1;
	    cur->next = temp;
	    temp->prev = cur;
	    return head;
	}
	struct node *delete_begin(struct node *head){
	    temp = head;
	    head = temp->next;
	    temp->prev = NULL;
	    printf("deleted element %d",temp->data);
	    free(temp);
	    return head;
	}
	struct node *delete_end(struct node *tail){
	    temp = tail;
	    tail = tail->prev;
	    tail->next = NULL;
	    printf("deleted element %d",temp->data);
	    free(temp);
	    return tail;
	}
	struct node *delete_pos(struct node *head,int pos){
	    int c = 1;
	    temp = head;
	    while(c<pos){
	        temp1 = temp;
	        temp = temp->next;
	        c++;
	    }
	    temp1->next = temp->next;
	    temp->next->prev = temp1;
	    printf("deleted element %d",temp->data);
	    free(temp);
	    return head;
	    }
	void display(struct node* head){
	    temp = head;
	    while(temp != NULL){
	        printf("%d->",temp->data);
	        temp = temp->next;
	    }
	}
	

	int main(){
	    int ch,ele,pos,key;
	    while(1){
	        printf("\n 1-create\n 2-insert at begin\n 3-insert at end\n 4-insert at pos\n 5-delete at begin\n 6-delete at end\n 7-delete at pos\n 8-display\n 9-exit\n");
	        printf("\nEnter your choice : ");
	        scanf("%d",&ch);
	        switch(ch){
	            case 1 : head = create();
	                     break;
	            case 2 : scanf("%d",&ele);
	                     head = insert_begin(ele);
	                     break;
	            case 3 : scanf("%d",&ele);
	                     head = insert_end(ele);
	                     break;
	            case 4 : scanf("%d",&pos);
	                     scanf("%d",&ele);
	                     head = insert_pos(pos,ele);
	                     break;
	            case 5 : head = delete_begin(head);
	                     break;
	            case 6 : tail = delete_end(tail);
	                     break;
	            case 7 : scanf("%d",&pos);
	                     head = delete_pos(head,pos);
	                     break;
	            case 8 : display(head);
	                     break;
	            case 9 : exit(0);
	        }
	    }
	}
Output:
	1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 1
	Enter no of nodes :2
	5
	7
	

	 1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 8
	5->7->
	 1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 2
	3
	

	 1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 8
	3->5->7->
	 1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 3
	9
	

	 1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 8
	3->5->7->9->
	 1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 4
	2
	1
	

	 1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 8
	3->1->5->7->9->
	 1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 5
	deleted element 3
	 1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 8
	1->5->7->9->
	 1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 6
	deleted element 9
	 1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 8
	1->5->7->
	 1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 7
	2
	deleted element 5
	 1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 8
	1->7->
	 1-create
	 2-insert at begin
	 3-insert at end
	 4-insert at pos
	 5-delete at begin
	 6-delete at end
	 7-delete at pos
	 8-display
	 9-exit
	

	Enter your choice : 9
	

	Process returned 0 (0x0)   execution time : 122.283 s
	Press any key to continue.
© 2021 GitHub, Inc.
Terms

	
