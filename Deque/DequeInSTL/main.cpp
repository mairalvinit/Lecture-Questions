#include <iostream>
#include <deque>
using namespace std;

// int main(){
//     deque<int> dq = {10,20,30};
//     dq.push_front(5);
//     dq.push_back(50);

//      for(auto x : dq){
//          cout<<x<<" ";
//      }
//      cout<<endl;
//      cout<<dq.front()<<" "<<dq.back()<<endl;
// }

// int main(){
//     deque<int> dq = {10,15,30,5,12};
//     auto it = dq.begin();
//     it++;
//     dq.insert(it,20);
//     for(auto i : dq){
//         cout<<i<<" ";
//     }
//     dq.pop_front();
//     dq.pop_back();
//     cout<<dq.size()<<endl;
    
// }

int main()
{
	deque<int> dq = {10, 20, 5, 30};

	auto it = dq.begin();

	it = dq.insert(it, 7);

	it = dq.insert(it, 2, 3);

	it = dq.erase(it + 1);

	cout << (*it) << endl;

	for(int i = 0; i < dq.size(); i++)
		cout<<dq[i]<<" ";


	return 0;
}