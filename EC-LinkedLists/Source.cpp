#include <iostream>

/*************************************************************************
* AUTHOR       : Brianna Zaffina
* ASSIGNMENT   : Linked List EC
* CLASS	       : CS 1C
* SECTION      : Tu/Th 1:30 - 3:50pm
* DUE DATE     : 12/19/23
*************************************************************************/

template <typename T>
class DoublyLinkedList {
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
    ~DoublyLinkedList() {}

    void push_back(const T& value) {
        Node* node = new Node(value);
        if (tail == nullptr) {
            head = node;
            tail = node;
        }
        else {
            node->prev = tail;
            tail->next = node;
            tail = node;
        }
    }

    void print() const {
        Node* node = head;
        while (node != nullptr) {
            std::cout << node->value << " ";
            node = node->next;
        }
        std::cout << std::endl;
    }

    DoublyLinkedList(const DoublyLinkedList& other) : head(nullptr), tail(nullptr) {
        Node* node = other.head;
        while (node != nullptr) {
            push_back(node->value);
            node = node->next;
        }
        std::cout << "Linked list 1 copy constructor: ";
        print();
    }

    DoublyLinkedList(DoublyLinkedList&& other) : head(nullptr), tail(nullptr) {
        head = other.head;
        tail = other.tail;
        other.head = nullptr;
        other.tail = nullptr;

        // Set the prev pointer of the new head to nullptr
        if (head != nullptr) {
            head->prev = nullptr;
        }
        // Set the next pointer of the new tail to nullptr
        if (tail != nullptr) {
            tail->next = nullptr;
        }

        std::cout << "Linked list_moved_to copy constructor: data moved from" << std::endl;
    }

    DoublyLinkedList& operator=(const DoublyLinkedList& other) {
        if (this != &other) {
            clear();
            Node* node = other.head;
            while (node != nullptr) {
                push_back(node->value);
                node = node->next;
            }
            std::cout << "Linked list 1 copy assignment: ";
            print();
        }
        return *this;
    }

    DoublyLinkedList& operator=(DoublyLinkedList&& other) noexcept {
        if (this != &other) {
            clear();
            head = other.head;
            tail = other.tail;
            other.head = nullptr;
            other.tail = nullptr;

            // Set the prev pointer of the new head to nullptr
            if (head != nullptr) {
                head->prev = nullptr;
            }
            // Set the next pointer of the new tail to nullptr
            if (tail != nullptr) {
                tail->next = nullptr;
            }

            std::cout << "Linked list_moved_to assignment: data moved from" << std::endl;
        }
        return *this;
    }

    void clear() {
        Node* node = head;
        while (node != nullptr) {
            Node* next = node->next;
            delete node;
            node = next;
        }
        head = nullptr;
        tail = nullptr;
    }

    bool delete_node(int index) {
        Node* node = head;
        for (int i = 0; i < index && node != nullptr; ++i) {
            node = node->next;
        }
        if (node == nullptr) {
            return false;
        }
        if (node->prev != nullptr) {
            node->prev->next = node->next;
        }
        else {
            head = node->next;
        }
        if (node->next != nullptr) {
            node->next->prev = node->prev;
        }
        else {
            tail = node->prev;
        }
        delete node;
        return true;
    }

    void add_node(const T& value, int index) {
        Node* node = head;
        for (int i = 0; i < index && node != nullptr; ++i) {
            node = node->next;
        }
        if (node == nullptr) {
            push_back(value);
        }
        else {
            Node* new_node = new Node(value);
            new_node->prev = node->prev;
            new_node->next = node;
            if (node->prev != nullptr) {
                node->prev->next = new_node;
            }
            else {
                head = new_node;
            }
            node->prev = new_node;
        }
    }

    void reverse() {
        Node* node = head;
        while (node != nullptr) {
            Node* temp = node->prev;
            node->prev = node->next;
            node->next = temp;
            node = node->prev;
        }
        if (tail != nullptr) {
            tail = tail->prev;
        }
        if (head != nullptr) {
            head = head->next;
        }
    }

private:
    struct Node {
        Node(const T& value) : value(value), prev(nullptr), next(nullptr) {}
        T value;
        Node* prev;
        Node* next;
    };

    Node* head;
    Node* tail;
};

int main() 
{
    DoublyLinkedList<int> list1;
    DoublyLinkedList<int> list2;

    list1.push_back(88);
    list1.push_back(78);
    list1.push_back(62);
    list1.push_back(143);
    list1.push_back(60);

    //Part 1:
    std::cout << "Part 1:" << std::endl;
    std::cout << "Linked list 1: ";
    list1.print();

    //Part 2:
    std::cout << "\nPart 2:" << std::endl;
    //Copy Constructor:
    DoublyLinkedList<int> list3(list1);
   
    //Copy Assignment:
    list2 = list1;

    //Move Copy Constructor:
    DoublyLinkedList<int> list4(std::move(list2));

    //Assignment Move Constructor:
    DoublyLinkedList<int> list5;
    list5 = std::move(list3);

    //Part 3:
    std::cout << "\nPart 3:" << std::endl;
    DoublyLinkedList<int> newList;
    newList.push_back(60);
    newList.push_back(143);
    newList.push_back(62);
    newList.push_back(78);
    newList.push_back(88);

    std::cout << "Linked list 2: ";
    newList.print();

    //Part 4:
    std::cout << "\nPart 4 (after deleting third node):" << std::endl;
    //Delete Third Node:
    list1.delete_node(3);
    newList.delete_node(3);
    std::cout << "Linked list 1: ";
    list1.print();
    std::cout << "Linked list 2: ";
    newList.print();

    //Part 5:
    std::cout << "\nPart 5 (after adding a node in the middle of the list):" << std::endl;
    list1.add_node(70, 2);
    newList.add_node(70, 2);
    std::cout << "Linked list 1: ";
    list1.print();
    std::cout << "Linked list 2: ";
    newList.print();

    std::cout << "\n\nREPEATING STEPS USING DOUBLES:\n";
    DoublyLinkedList<double> doubleList1;
    DoublyLinkedList<double> doubleList2;

    doubleList1.push_back(88.88);
    doubleList1.push_back(78.78);
    doubleList1.push_back(62.62);
    doubleList1.push_back(143.14);
    doubleList1.push_back(60.6);

    //Part 1:
    std::cout << "Part 1:" << std::endl;
    std::cout << "Linked list 1: ";
    doubleList1.print();

    //Part 2:
    std::cout << "\nPart 2:" << std::endl;
    //Copy Constructor:
    DoublyLinkedList<double> doubleList3(doubleList1);
   
    //Copy Assignment:
    doubleList2 = doubleList1;

    //Move Copy Constructor:
    DoublyLinkedList<double> doubleList4(std::move(doubleList2));

    //Assignment Move Constructor:
    DoublyLinkedList<double> doubleList5;
    doubleList5 = std::move(doubleList3);

    //Part 3:
    std::cout << "\nPart 3:" << std::endl;
    DoublyLinkedList<double> newDoubleList;
    newDoubleList.push_back(60.6);
    newDoubleList.push_back(143.2);
    newDoubleList.push_back(62.62);
    newDoubleList.push_back(78.78);
    newDoubleList.push_back(88.88);

    std::cout << "Linked list 2: ";
    newDoubleList.print();

    //Part 4:
    std::cout << "\nPart 4 (after deleting third node):" << std::endl;
    //Delete Third Node:
    doubleList1.delete_node(3);
    newDoubleList.delete_node(3);
    std::cout << "Linked list 1: ";
    doubleList1.print();
    std::cout << "Linked list 2: ";
    newDoubleList.print();

    //Part 5:
    std::cout << "\nPart 5 (after adding a node in the middle of the list):" << std::endl;
    doubleList1.add_node(70.7, 2);
    newDoubleList.add_node(70.7, 2);
    std::cout << "Linked list 1: ";
    doubleList1.print();
    std::cout << "Linked list 2: ";
    newDoubleList.print();
    return 0;
}
