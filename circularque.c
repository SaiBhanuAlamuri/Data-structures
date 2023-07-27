 #include<stdio.h>
 int size,que[100],rear=-1,front=-1,i,val;
 void enque(int val)
 {
 	if(front==0 && rear==size-1 )
	 {
 		printf("Queue is full\n");
	 }
	 else if(rear==front-1)
	 {
	 	printf("Queue is full\n");
	 }
	 else if(front==-1 && rear==-1)
	 {
	 	front=0;
	 	rear=0;
	 	que[rear]=val;
	 	
	 }
	 else
	 {
	 	rear=(rear+1)%size;
	 	que[rear]=val;
	 }
	 
	 
 }
 void display(){
 	int i=front;
 	if(front ==-1 && rear==-1)
	 {
 		printf("Queue is empty\n");
	 }
 	while(i!=rear)
	 {
 		printf("%d ",que[i]);
 		i=(i+1)%size;
	 }
	 printf("%d \n",que[i]);
 	
	 
 }
 int deque()
 {
 	if(front ==-1 && rear==-1){
 		return -1;
 		
	 }
	 if(front==rear){
	 	val=que[front];
	 	front=-1;
	 	rear=-1;
	 	return val;
	 }
	 else{
	 	val=que[front];
	 	front=(front+1)%size;
	 	return val;
	 }
 	
 }
 int main(){
 	int i,ch,val;
 	scanf("%d",&size);
 	while(1){
 		printf("1.enque 2.deque 3.dispaly 4.exit:");
 		scanf("%d",&ch);
 		if(ch==1)
		 {
		 	//Enque operation
		 	scanf("%d",&val);
		 	enque(val);
		 	
 			
		 }
		 else if(ch==2)
		 {
		 	//Deque operation
		 	val=deque();
		 	if(val==-1)
			 {
		 		printf("Queue is empty\n");
			 }
			 else
			 {
			 	printf("%d\n",val);
			 }
		 	
		 }
		 else if(ch==3)
		 {
		 	display();
		 	
		 }
		 else 
		 {
		 	break;
		 	
		 }
 		
	 }
 	
 	
 	
 }
