/*there's an array with some page numbers of books
m number of students
allocate books to students
conditions :
1) each student gets at least one book
2) each book should be allocated to a student
3) it should be in contiguous manner(ek pachi ek)
max num of pages assigned to a student should be minimum
(baddha ne bne etla page aapva)*/

// EXPLANATION AT BOOK ALLOCATION.MD, READ THAT BEFORE READING THE CODE

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int students, int maxPages)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (pageSum + arr[i] <= maxPages)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;

            if (studentCount > students || arr[i] > maxPages)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }

    return true;
}

int numOfPages(vector<int> &arr, int students)
{
    // not a possible soln? move s to right
    // is a possible soln? love e to left
    // why? common sense, or read book allocation.md again

    int s = 0, e = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        e += arr[i];
    }

    int ans;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (isPossible(arr, students, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}

int main()
{
    cout << "Enter number of books : ";
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number of pages in book " << i + 1 << " : ";
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "Enter number of students : ";
    int stud;
    cin >> stud;

    int ans = numOfPages(arr, stud);

    cout << "Minimum number of maximum pages possible = " << ans;

    return 0;
}
