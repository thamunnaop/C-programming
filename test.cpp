// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     void displayA()
//     {
//         cout<<"class A FUNCTN"<<endl;
//     }

// };
// class B
// {
//     public:
//     void displayB()
//     {
//         cout<<"class B functn"<<endl;
//     }
// };
// class C:public A,public B
// {
//     public:
//     void displayC()
//     {
//         cout<<"class C functn"<<endl;
//     }
// };
// int main()
// {
//     C ob;
//     ob.displayA();
//     ob.displayB();
//     ob.displayC();
//     return 0;
// }

//operator overloading
// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     int x,y;
//     A(int a=0;b=0)
// }
// int main()
// {
//     A a()
// }
// #include<iostream>
// using namespace std;
// class student
// {
//     public:
//     string name;
//     int roll;
//     void display()
//     {
//         cout<<"name"<<name<<endl;
//         cout<<"roll"<<roll<<endl;
//     }
// };
// int main()
// {
//     student s;
//     s.name="thamu";
//     s.roll=5;
//     student *ptr=&s;
//     cout<<"name"<<ptr->name<<endl;
//     cout<<"roll"<<ptr->roll<<endl;
//     ptr->display();
//     return 0;
// }
//early binding code
// #include<iostream>
// using namespace std;

// class animal
// {
//     public:
//     virtual void sound()
//     {
//         cout<<"animal sound"<<endl;

//     }
// };
// class dog :public animal
// {
//     void sound()
//     {
//         cout<<"sound as bark"<<endl;
//     }
// };
// int main()
// {
//     animal a;
//     dog d;
//     a.sound();
//     animal *a=&d;
//     a->sound();
//}


// #include<iostream>
// using namespace std;
// class employee
// {
//     private:
//     int id;
//     string name;
//   public:
//   employee(string n,int i)
//   {
//     name=n;
//     id=i;
//   }
//   friend void display(employee e);

// };
// void display(employee e)
// {
//     cout<<"name"<<e.name<<endl;
//     cout<<"id"<<e.id<<endl;
// }

// int main()
// {
//     employee emp1("thamu",50);
//     display(emp1);
//     return 0;
    

// }

//operator overloading
// #include<iostream>
// using namespace std;
// class distance
// {
//     private:
//     int feet;
//     int inches;
//     public:
//     distance(int f=0,int i=0):feet(f),inches(i)
//     {
      
//     }
//     void display()
//     {
//          cout<<"f"<<":"<<feet<<"i"<<";"<<inches<<endl;
//     }
//     void operator- ()
//     {
//         feet=-feet;
//         inches=-inches;
//     }
// };

// int main()
// {
//     distance d1(11,10);
//     -d1;
//     d1.display();
    
// }
//program to implement functn overloading
// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     void add(int a,int b)
//     {
//         cout<<a+b<<endl;
//     }
//     void add(double a, double b)
//     {
//         cout<<a+b<<endl;
//     } 
    

// };
// int main()
// {
//     A obj;
//     obj.add(10,20);
//     obj.add(10.5,12.3);

    
// }

//program for operator overloading
// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     virtual void display()
//     {
//         cout<<"from class a"<<endl;
//     }
// };
// class B:public A
// {
//     void display()
//     {
//         cout<<"from class b"<<endl;

//     }
// };
// int main()
// {
//     A *a=new B;
//     a->display();
//     return 0;
// }

//program of friend function

// #include<iostream>
// using namespace std;
// class A
// {
//     private:
//     int id;
//     public:
//     A (int i)
//     {
//         id=i;
//     }
//     friend void display(A a); 
// };
// void display(A a)
// {
//     cout<<a.id<<endl;
// }
// int main()
// {
//     A obj(10);
//     display(obj);
// }

//set code example

// #include<iostream>
// #include<set>
// using namespace std;
// int main()
// {
//     set<int>s;
//     s.insert(5);
//     s.insert(3);
//     s.insert(9);
//     s.insert(5);
//     //to print
//     for(int x:s)
//     {
//         cout<<x<<" ";
//     }
//     return 0;
// }

//
//vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>nums;
//     nums.push_back(10);
//     nums.push_back(20);
//     nums.push_back(30);
   
//     for(int i=0;i<nums.size();i++ )
//     {
//         cout<<nums[i]<<" ";
//     }
//   cout<<endl;
//     nums.pop_back();
       
//     for(int x:nums)
//     {
//         cout<<x<<" ";

//     }
// cout<<endl;
// } 


//code for copy constructor
// #include<iostream>
// using namespace std;
// class A
// {
//     public :
//     int id;
//     A(int i)
//     {
//       id=i;
//     }
//     A(const A &obj)
//     {
//         id=obj.id;
//     }

// };
// int main()
// {
//     A obj1(10);
//     A obj2=obj1;
// }

//map

// #include<iostream>
// #include<map>
// using namespace std;

// int main()
// {
//     map<string,int>age;
//     age["thamu"]=27;
//     age["anas"]=30;
//     for(auto pair :age)
//     {
//         cout<<pair.first<<":"<<pair.second<<endl;
//     }

// }

//list

// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> numbers;

//     // Add elements
//     numbers.push_back(10);   // add at end
//     numbers.push_front(5);   // add at front
//     numbers.push_back(15);

//     // Display elements
//     cout << "List elements: ";
//     for (int num : numbers) {
//         cout << num << " ";
//     }

//     // Remove front and back
//     numbers.pop_front();
//     numbers.pop_back();

//     // Display updated list
//     cout << "\nAfter pop: ";
//     for (int num : numbers) {
//         cout << num << " ";
//     }

//     return 0;
// }

// DEQUE
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;

    // Insert elements at both ends
    d.push_back(10);     // Add to back
    d.push_front(5);     // Add to front
    d.push_back(15);

    // Display elements
    cout << "Deque elements: ";
    for (int x : d) {
        cout << x << " ";
    }

    // Remove from both ends
    d.pop_front();       // Removes 5
    d.pop_back();        // Removes 15

    cout << "\nAfter popping front and back: ";
    for (int x : d) {
        cout << x << " ";
    }

    return 0;
}