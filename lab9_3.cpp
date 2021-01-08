#include <iostream>
#include <iomanip>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
    int n = 0;
    float mean = 0,number=0;
    string text;
    ifstream source;
    source.open("score.txt");
    while(getline(source,text))
    {
        mean+=atof(text.c_str());
        number=number+pow(atof(text.c_str()),2);
        n++;
    }
    cout << "Number of data = " << n<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<mean/n<<"\n";
    cout << "Standard deviation = " << sqrt(((number)/n)-pow((mean/n),2));
}