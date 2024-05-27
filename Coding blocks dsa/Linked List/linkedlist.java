public class linkedlist{
    class Node{
        int val;
        Node next;
    }
    private Node head;
    private Node tail;
    private int size;
    public void addFirst(int item){
        Node nn=new Node();
        nn.val=item;
        if(size ==0)
        {
            head=nn;
            tail=nn;
            size++;
        }
        else{
            nn.next=head;
            head=nn;
            size++;
        }    }
        public void Display(){
            Node temp=head;
            while(temp!=null){
                System.out.println(temp.val+"->");
                temp=temp.next;
            }
        }
        addFirst(10);
        addFirst(12);
        Display();
}