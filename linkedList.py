class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    # add node in the front
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node


    #insert after a node
    def insertAfter(self, prev_node, new_data):
        if prev_node is None:
            print("The given node must be in the LinkedList")
            return

        new_node = Node(new_data)
        new_node.next = prev_node.next
        prev_node.next = new_node


    #insert last
    def append(self, new_data):
        new_node = Node(new_data)

        if self.head is None:
            self.head = new_node
            return

        last = self.head
        while (last.next):
            last = last.next

        last.next = new_node


    def printList(self):
            temp = self.head
            while temp:
                print(temp.data, end=" ")
                temp = temp.next


if __name__ == '__main__':
    llist = LinkedList()


    llist.append(6)
    llist.push(7)
    llist.push(1)
    llist.append(4)

    llist.insertAfter(llist.head, 8)

    print('Created linked list is: ')
    llist.printList()


