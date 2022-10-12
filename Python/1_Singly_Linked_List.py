#Node Datatype creation
from os import remove


class Node:
    def __init__(self,data): #Initialization
        self.data = data #assigning data
        self.next = None #assigning the next pointer to be null

class SingleLinkedList:
    def __init__(self):
        self.head = None #assigning the head to be null

    def insertion_at_beg(self, newNode):
        if self.head: #if head pointer is not empty
            temp = self.head
            self.head = newNode
            self.head.next = temp
        else: #if head pointer is empty
            self.head = newNode

    def insertion_at_end(self,newNode):
        if self.head: #if head pointer is not empty
            temp = self.head #copy the head pointer
            while temp.next != None: #traverse through the list till the end
                temp = temp.next
            temp.next = newNode #assign the new node in the last
            newNode.next = None #make the next pointer to be null
        else: #if head pointer is empty
            self.head = newNode #assign the node as the head node

    def deletion_at_beg(self):
        if self.head:
            self.head = self.head.next
        else:
            print("No elements are present")
    
    def deletion_at_end(self):
        if self.head: #if head pointer is not empty
            if self.head.next == None:
                self.head = None
            else:
                temp = self.head
                while temp.next.next != None:
                    temp = temp.next
                temp.next = None
        else:
            print("No elements are present")

    def reverse(self):
        if self.head: #if head pointer is not empty
            previous = self.head
            current = self.head.next
            self.head = self.head.next

            previous.next = None
            while self.head != None:
                self.head = self.head.next
                current.next = previous
                previous = current
                current = self.head
            
            self.head = previous

            print("List Reversed")
        else: #if head pointer is empty
            print("List Empty")

    def display(self):
        ptr = self.head
        if ptr == None: #when the head is empty
            print("No Elements Present")
        else: #print the values present
            print("The Values are: ")
            while ptr != None: #traverse till end of the list
                print(ptr.data, end = "->")
                ptr = ptr.next
            print("Null")

if __name__ == "__main__":
    listObject = SingleLinkedList()
    listObject.insertion_at_end(Node(1))
    listObject.insertion_at_end(Node(2))
    listObject.insertion_at_end(Node(3))
    listObject.insertion_at_end(Node(4))
    listObject.insertion_at_end(Node(5))
    listObject.insertion_at_end(Node(6))
    listObject.insertion_at_end(Node(7))
    listObject.display()
    listObject.reverse()
    listObject.display()
    listObject.deletion_at_beg()
    listObject.display()
    listObject.insertion_at_beg(Node(8))
    listObject.insertion_at_beg(Node(10))
    listObject.display()
    listObject.deletion_at_end()
    listObject.display()