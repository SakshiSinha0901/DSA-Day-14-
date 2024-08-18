// C. front()   &   back()

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>marks;

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    cout<< marks.front()<<endl;
    cout<<marks.back()<<endl;

    return 0;
}

// D. empty()

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>marks;

    marks.push_back(10);
    marks.push_back(20);
    
    if (marks.empty() == true){
        cout<<"Vector is empty."<<endl;
    }
    else{
        cout<<"Vector is not empty."<<endl;
    }

    return 0;
}

// E. operator []

// It's important that the vector has either assigned data(value) or size to it, to use[].

// F. at()

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>marks;

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    cout<< marks.at(0)<<endl;
    //both do same work
    cout<< marks[0]<<endl;

    return 0;
}

// G. capacity()

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>marks;

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    //increasing the number of element which will make the capacity of the vector to double itself for holding the value
    marks.push_back(50);

    cout<< marks.size()<<endl;
    cout<< marks.capacity()<<endl;

    return 0;
}

// H. reserve()

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>marks;

    marks.reserve(10);
    cout<< marks.capacity()<<endl;

    return 0;
}

// I. max_size()

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>marks;

    cout<< marks.max_size()<<endl;

    return 0;
}

// J. clear()

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>marks;
    marks.clear();
    cout<< marks.size()<<endl;

    return 0;
}

// K. insert(iterator position, value)

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>marks;
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    marks.insert(marks.begin(),50);
    cout<< marks[0]<<endl;

    return 0;
}

// L. erase(position) or erase(iterator first, iterator last)

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int>marks;
    
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    marks.insert(marks.begin(),50);
    cout<< marks[0]<<endl;

    marks.erase(marks.begin(), marks.end());
    cout<<marks.size()<<endl;

    return 0;
}

// M. swap()

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int>first;
    vector<int>second;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    first.swap(second);

    for(int i : first){
        cout<< i << " ";
    }

    return 0;
}
