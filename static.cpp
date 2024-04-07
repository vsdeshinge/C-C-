 #include<iostream>


 using namespace std;
 class Printjobs{
    int nPages;
    public:
    static int nTrayPages;
    static int nJobs;
    Printjobs(int nP): nPages(nP){
        ++nJobs;
        cout<<"printing "<<nP << "pages" << endl;
        nTrayPages = nTrayPages - nP;


    }
    ~Printjobs(){
        --nJobs;// job started;
    }
 };

 int Printjobs:: nTrayPages = 500;
 int Printjobs:: nJobs =0;

 int main(){
    cout<<"Jobs = "<<Printjobs:: nJobs<< endl;
    cout<<"Jobs = "<<Printjobs:: nTrayPages<< endl;
    Printjobs job1(10);
    cout<<"Jobs = "<<Printjobs:: nJobs<< endl;
    cout<<"Jobs = "<<Printjobs:: nTrayPages<< endl;
    {
        Printjobs job2(20), job3(30);
        cout<<"Jobs = "<<Printjobs:: nJobs<< endl;
        cout<<"Jobs = "<<Printjobs:: nTrayPages<< endl;
        Printjobs:: nTrayPages += 100;

    }// when encryption is done it destroy the object within block so after printing it shows only one job

    
    cout<<"Jobs = "<<Printjobs:: nJobs<< endl;
    cout<<"Jobs = "<<Printjobs:: nTrayPages<< endl;

 }
 //output

//  Jobs = 0
// Jobs = 500
// printing 10pages
// Jobs = 1
// Jobs = 490
// printing 20pages
// printing 30pages
// Jobs = 3
// Jobs = 440
// Jobs = 3
// Jobs = 540