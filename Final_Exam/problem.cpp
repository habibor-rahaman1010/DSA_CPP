#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class Queue {
 public:
   int a[MAX_SIZE];
   int l;
   int r;
   int sz;

   Queue() {
      l = 0;
      r = -1;
      sz = 0;
   }

   void enqueue( int val ) {
      if( r+1 == MAX_SIZE ) {
         cout<<"Maximum capacity reached!\n";
         return ;
      }

      r++;
      if( r == MAX_SIZE ) {
         r=0;
      }
      a[r] = val;
      sz++;
   }

   void dequeue() {
      if( sz==0 ) {
         cout<<"Queue is empty!\n";
         return;
      }
      a[l] = 0;
      l++;
      if( l == MAX_SIZE )
         l=0;
      sz--;
   }

   int front() {
      if( sz==0 ) {
         cout<<"Queue is empty!\n";
         return -1;
      }
      return a[l];
   }

   int getSize() {
      return sz;
   }
};

int main() {
   Queue q;
   q.enqueue( 10 );
   q.enqueue( 6 );
   q.enqueue( 12 );

   cout<<"Queue size = "<<q.getSize()<<"\n";

   cout<<q.front()<<"\n";
   q.dequeue();
   cout<<q.front()<<"\n";
   q.dequeue();
   cout<<q.front()<<"\n";
   q.dequeue();
   cout<<"Queue size = "<<q.getSize()<<"\n";
   return 0;
}
