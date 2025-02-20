#include <iostream>
using namespace std;

struct Student{
    char name[50];
    int numSubjects;
    int *scores;
    float studentAverage;
};

float calculateAverage(Student*, int);
void sortStudents(Student*, int);

int main() {
    int numStudents, subjectMarks, averageMarks;
    
    cout<<"Enter number of students ";
    cin>>numStudents;
    
    Student *student = new Student[numStudents];
    
    for(int i = 0; i < numStudents; i++){
      cout<<"Enter Name of "<<" Student "<<i+1<<" ";
      cin>>student[i].name;
        
      cout<<"Enter Number of Subjects of "<<"Student "<<i+1<<" ";
      cin>>student[i].numSubjects;
      
      student[i].scores = new int[student[i].numSubjects];
      
      for(int j = 0; j < student[i].numSubjects; j++){
          subjectMarks = 0;
          cout<<"Enter Marks of Subject "<<j+1<<" ";
          cin>>student[i].scores[j];
      }
      student[i].studentAverage = calculateAverage(student,i);
    }
    
   for(int i = 0; i < numStudents; i++){
      cout<<"Name: "<<student[i].name<<endl;
      cout<<"Total Subjects: "<<student[i].numSubjects<<endl;
      
    for(int j = 0; j < student[i].numSubjects; j++){
    cout<<"Subject "<<j+1<<" Marks: "<<student[i].scores[j]<<endl;
      }
      cout<<"Average Marks: "<<student[i].studentAverage<<endl;
    }
    
    sortStudents(student, numStudents);
    
    for(int i = 0; i < numStudents; i++){
        delete[] student[i].scores;
    }
    
    delete[] student;
    student = NULL;

    return 0;
}

float calculateAverage(Student *student, int index){
    float average = 0;
    for(int i = 0; i < student[index].numSubjects; i++){
        average += student[index].scores[i];
    }
    
    return average / student[index].numSubjects;
    
}

void sortStudents(Student *student, int numStudents){
    int index = 0;
    int maxAverage = student[index].studentAverage;
    
    
    for(int i = 1; i < numStudents; i++){
        if(student[i].studentAverage > maxAverage){
            maxAverage = student[i].studentAverage;
            index = i;
        }
    }
    
    maxAverage = student[index].studentAverage;
    
    cout<<"Highest Student Average "<<endl;
    cout<<"Name: "<<student[index].name<<endl;
    cout<<"Total Subjects: "<<student[index].numSubjects<<endl;
    cout<<"Average: "<<student[index].studentAverage<<endl;
    
}


