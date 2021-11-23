int reserve(node *start){
	int temp;
	if(start==NULL){   
   		temp = create(start);
		 return temp;
	}
	else {
	node *temp, *new_node;
	temp=start;
	while(temp->next!=NULL){ 
	  temp=temp->next;
	}
	new_node=(node *)malloc(sizeof(node));
	printf("Name: ");
	scanf("%s", new_node->name);
	printf("Age : ");
scanf("%d", &new_node->age);
if(new_node->age >=90 || new_node>age<=10) {
        return -1;
    }
new_node->next=NULL;
	if(num<=size){
		num++;
		new_node->booking_no=num;
		temp->next=new_node;
		return 1;
	}
	else{
		enq(new_node);
		return 0;
	}
}
}