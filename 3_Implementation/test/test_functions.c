int create( )
{
	node *new;
	new=(node *)malloc(sizeof(node));
	new->booking_no=1;
	printf("Name: ");
	scanf("%s", new->name);
	printf("Age : ");
	scanf("%d", &new->age);
    if(new->age>=90 || new->age<=10) {
        free(new);
        return -1;
    }
	start=new;
	new->next=NULL;
	num++;
    return 1;
	
}