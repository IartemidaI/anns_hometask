//All right reserved
#include <iostream>
using namespace std;
class student {
private:
    char name[30];
    int year;
    int point[4];
public:
    void getDetails(void);
    void putDetails(void);
    float getMiddle();
};
float student::getMiddle()
{
    int sum=0;
    for(int i=0;i<4;i++)
    {
        sum+=point[i];
    }
    return sum/4;
}
void student::getDetails(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter year ";
    cin >> year;
    for(int i=0; i<4;i++)
    {
        cout<<"Enter "<<i+1<<" subject point: ";
        cin>>point[i];
    }
}
void student::putDetails(void)
{
    cout<<name << " who borned at "<<year<<" is calameo"; 
}
int main()
{
    int n, loop;
    cout << "Enter total number of students: ";
    cin >> n;
    student *group=new student[n];
    for (loop = 0; loop < n; loop++) {
        cout << "Enter details of student " << loop + 1 << ":\n";
        group[loop].getDetails();
    }
    cout<<"Calameos:\n";
    for(int i=0; i<n;i++)
    {
        if(group[i].getMiddle()>85)
        {
            group[i].putDetails();
        }
    }
    return 0;
}
