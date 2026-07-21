class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        // When Students[i] = Sandwiches[i] then Student will Eat -->
        // If Student eats so update Student[i] = 2 so I cann't count it -->

        int n = students.size();

        int i = 0, j = 0;
        int unable = 0;
        int k = n;

        while(j < n)
        {
            if(students[i] == 2)
            {
                i = (i+1)%n;
                continue;
            }

            if(students[i] == sandwiches[j])
            {
                students[i] = 2;
                unable = 0;
                k--;
                j++;
                i=(i+1)%n;
            }

            else
            {
                unable++;
                i = (i+1)%n;
                if(unable == k)
                return k;
            }
        }

        return k;
    }
};