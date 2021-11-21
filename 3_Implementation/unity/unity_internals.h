scanf("%d", &new_node->age);
if(new_node->age >=90 || new_node>age<=10) {
        return -1;
    }
new_node->next=NULL;
	if(num<=size){
		num++;
		new_node->reg_no=num;
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
		new_node->reg_no=num;
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
		printf("\nRegistration Number: %d\n", temp->reg_no);
		printf("Name : %s\n\n", temp->name);
		temp=temp->next;
    }
    
}