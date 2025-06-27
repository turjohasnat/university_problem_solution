class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> studentQueue;
        for (int student : students) {
            studentQueue.push(student);
        }
    
        int sandwichIndex = 0;
        int n = sandwiches.size();
        int steps = 0;

        while (!studentQueue.empty() && steps < studentQueue.size()){
            if (studentQueue.front() == sandwiches[sandwichIndex]){
                studentQueue.pop();
                sandwichIndex++;
                steps = 0; 
            } 
            else{
                int student = studentQueue.front();
                    studentQueue.pop();
                    studentQueue.push(student);
                    steps++;
            }
        }

        return studentQueue.size();
    }
};
