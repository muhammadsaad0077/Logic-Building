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

void sortStudents(Student *student, int numStudents) {
    for(int i = 0; i < numStudents - 1; i++){
        for(int j = 0; j < numStudents - 1 - i; j++){
            if(student[j].studentAverage < student[j+1].studentAverage){
                Student temp = student[j];
                student[j] = student[j+1];
                student[j+1] = temp;
            }
            
        }
    }

    

    cout<<"Highest Student Average is "<<student[0].studentAverage<<endl;
    cout<<"Name: "<<student[0].name<<endl;
    cout<<"Total Subjects: "<<student[0].numSubjects<<endl;
    cout<<"Average: "<<student[0].studentAverage<<endl;
    
}


