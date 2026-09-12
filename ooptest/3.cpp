#include<iostream>
#include<utility>
using namespace std;
class QueueDisplay {
private:
    int queueSize;
    int *customerIDs;
public:
    QueueDisplay(int size) {
        
        queueSize = size;
        customerIDs = new int[queueSize];

        for (int i = 0; i < queueSize; i++)
            customerIDs[i] = 0;
    }
    QueueDisplay(const QueueDisplay &other) {
        queueSize = other.queueSize;
        customerIDs = new int[queueSize];

        for (int i = 0; i < queueSize; i++)
            customerIDs[i] = other.customerIDs[i];
    }
    QueueDisplay &operator=(const QueueDisplay &other) {
        if (this != &other) {
            int *newIDs = new int[other.queueSize];

            for (int i = 0; i < other.queueSize; i++)
                newIDs[i] = other.customerIDs[i];

            delete[] customerIDs;
            queueSize = other.queueSize;
            customerIDs = newIDs;
        }

        return *this;
    }
    void insertID(int position, int id) {
        if (position >= 0 && position < queueSize)
            customerIDs[position] = id;
        else
            cout << "Invalid position!" << endl;
    }

    void display() {
        cout << "Queue Size: " << queueSize << endl;
        cout << "Customer IDs: ";

        for (int i = 0; i < queueSize; i++)
            cout << customerIDs[i] << " ";

        cout << endl;
    }

    friend void exchangeQueues(QueueDisplay &, QueueDisplay &);
    ~QueueDisplay() {
        delete[] customerIDs;
    }

};
void exchangeQueues(QueueDisplay &q1, QueueDisplay &q2) {
    swap(q1.queueSize, q2.queueSize);
    swap(q1.customerIDs, q2.customerIDs);
}

int main(){
     int n1,n2;

     cout<<"size of queue1:"<<endl;
     cin>>n1;

     cout<<"size of queue2:"<<endl;
     cin>>n2;

      QueueDisplay *queues = new QueueDisplay[2]{
          QueueDisplay(n1),
          QueueDisplay(n2)
      };

        int id;
        cout<<"Enter customer IDs for Queue 1:\n";
        for(int i=0;i<n1;i++){
            cout<<"ID "<<i+1<<": ";
            cin>>id;
            queues[0].insertID(i,id);
        }

        cout<<"Enter customer IDs for Queue 2:\n";
        for(int i=0;i<n2;i++){
            cout<<"ID "<<i+1<<": ";
            cin>>id;
            queues[1].insertID(i,id);
        }

        cout<<" Before Exchange \n";
        cout<<"Queue 1:\n";
        queues[0].display();
        cout<<"Queue 2:\n"; 
        queues[1].display();

        exchangeQueues(queues[0], queues[1]);
        cout<<"\n After Exchange \n";
        cout<<"Queue 1:\n";
        queues[0].display();
        cout<<"Queue 2:\n";
        queues[1].display();
        delete[] queues;
        return 0;
    }

     