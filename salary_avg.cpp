#include <iostream>
#include <vector>
using namespace std;
double average(vector<int>& salary) {
        int max_sal = salary[0];
        int min_sal = salary[0];
        int count = 0;
        double sum = 0;
        
        for(int x: salary)
        {
            if(max_sal < x) max_sal = x;
            if(min_sal > x) min_sal = x;
        }
        // cout<<"min sal: "<<min_sal<<"\n";
        // cout<<"max sal: "<<max_sal<<"\n";
        for(int a: salary)
        {
            if(a != max_sal && a != min_sal)
            {
                sum += a;
                count++;
            }
        }
        // cout<<"count: "<<count<<"\n";
        // cout<<"sum: "<<sum<<"\n";
        return (sum/count);
}

double average02(vector<int>& salary)
{
     int max_sal = salary[0];
        int min_sal = salary[0];
        double sum = 0;
        
        for(int x: salary)
        {
            if(max_sal < x) max_sal = x;
            if(min_sal > x) min_sal = x;
        }

        for(int a: salary)
        {
            sum += a;
        }
        sum = (sum - max_sal -min_sal)/(salary.size() - 2);
        return sum;
}

int main()
{
    vector<int> salary = {4000,3000,1000,2000};
    cout<<"avg sal: "<<average02(salary);
    return 0;
}
