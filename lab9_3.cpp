#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<cmath>
using namespace std;

int main (){
    double sum=0,sumsquare = 0;
    int N=0;
    ifstream source;
    source.open("score.txt");
    string textline;
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sumsquare += pow(atof(textline.c_str()),2);
        N++;}
    double mean,sd;
    mean = sum/N;
    sd =sqrt((sumsquare/N)-pow(mean,2));
    cout << "Number of data = "<<N<<endl;
    cout<<setprecision(3);
    cout << "Mean = "<<mean<<endl;
    cout << "Standard deviation = "<<sd;
    source.close();
    return 0;
}