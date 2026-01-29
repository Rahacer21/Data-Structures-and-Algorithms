class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int stud_0=count(students.begin(),students.end(),0);
        int stud_1=count(students.begin(),students.end(),1);

        for(int i=0;i<sandwiches.size();i++){
            if(sandwiches[i]==1){
                if(stud_1!=0) stud_1--;
                else return stud_0;
            }
            else{
                if(stud_0!=0) stud_0--;
                else return stud_1;
            }
        }
        return 0;
    }
};