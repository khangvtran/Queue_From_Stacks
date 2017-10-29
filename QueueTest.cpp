/*
 * QueueTest.cpp
 *
 *  Created on: Oct 27, 2017
 *      Author: KVTran
 */


//# include "Queue.cpp"
# include "Queue.h"

int main()
{
	Stack<int> S1;
	for (int i = 1; i <= 4; i++) S1.push(i);
	S1.print();
	S1.reversePrint();

	cout << "******** Test on empty Queue ********" << endl;
	Queue Q1;
	cout << "- Test getSize(). Should get 0." << endl;
	cout << Q1.getSize() << endl;
	cout << "- Test empty(). Should print 'empty'" << endl;
	if (Q1.empty()) cout << "empty" << endl;
	cout << "- Test print(). Should get an empty line" << endl;
	Q1.print();
	cout << "- Test getFront(). Should get error. Comment out code" << endl;
	//cout << Q1.getFront() << endl;
	cout << endl;

	cout << "******** Test on Queue with values only in stack s1 ********" << endl;
	Q1.enqueue("A");
	Q1.enqueue("B");
	Q1.enqueue("C");
	cout << "- Test getSize(). Should get 3." << endl;
	cout << Q1.getSize() << endl;
	cout << "- Test empty(). Should print 'Not empty'" << endl;
	if (!Q1.empty()) cout << "Not empty" << endl;
	cout << "- Test print(). Should get A B C" << endl;
	Q1.print();
	cout << "- Test getFront(). Should get A" << endl;
	cout << Q1.getFront() << endl;
	cout << endl;

	cout << "******** Test on Queue with values only in stack s2 ********" << endl;
	cout << "- First, we dequeue to push all data to stack 2 and pop all from stack 1" << endl;
	Q1.dequeue();
	cout << "- Test getSize(). Should get 2." << endl;
	cout << Q1.getSize() << endl;
	cout << "- Test print(). Should get B C" << endl;
	Q1.print();
	cout << "- Test getFront(). Should get B" << endl;
	cout << Q1.getFront() << endl;

	cout << "******** Test on Queue with values only in both stack s1 and s2 ********" << endl;
	Q1.enqueue("D");
	Q1.enqueue("E");
	Q1.enqueue("F");
	cout << "- Test getSize(). Should get 5." << endl;
	cout << Q1.getSize() << endl;
	cout << "- Test print(). Should get B C (1st line) and D E F (2nd line)" << endl;
	Q1.print();
	cout << "- Test getFront(). Should still get B" << endl;
	cout << Q1.getFront() << endl;

	return 0;
}


/*

 4 3 2 1
1 2 3 4
******** Test on empty Queue ********
- Test getSize(). Should get 0.
0
- Test empty(). Should print 'empty'
empty
- Test print(). Should get an empty line

- Test getFront(). Should get error. Comment out code

******** Test on Queue with values only in stack s1 ********
- Test getSize(). Should get 3.
3
- Test empty(). Should print 'Not empty'
Not empty
- Test print(). Should get A B C

A B C
- Test getFront(). Should get A
A

******** Test on Queue with values only in stack s2 ********
- Test getSize(). Should get 2.
2
- Test print(). Should get B C
B C
- Test getFront(). Should get B
B
******** Test on Queue with values only in both stack s1 and s2 ********
- Test getSize(). Should get 5.
5
- Test print(). Should get B C (1st line) and D E F (2nd line)
B C
D E F
- Test getFront(). Should still get B
B



 */
