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
void display()
{
	node *temp;
	temp=start;
	while(temp!=NULL)
	{
		printf("\nBooking Number: %d\n", temp->booking_no);
		printf("Name : %s\n\n", temp->name);
		temp=temp->next;
    }
    
}