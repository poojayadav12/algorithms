//Algorithms
 
// comparison function
bool comp(int a, int b)
{
   return a>b; // for descending order
}
 
// min(a,b), max(a,b) - returns minimum and maximum values respectively
int min_num = min(3,5); // min_num contains 3
int max_num = max(3,5); // max_num contains 5
 
// min_element(start, end), max_element(start, end) - O(n) - returns iterator to the element
vector<int> vec ({4,5,1});    // vec contains 4, 5, 1
vector<int>::iterator vec_iter;
vec_iter = min_element(vec.begin(), vec.end()); // *vec_iter contains 1
vec_iter = max_element(vec.begin(), vec.end()); // *vec_iter outputs 5
 
// distance(start, end) - O(n) - returns distance between two iterators
int vec_dist = distance(vec.begin(), vec_iter); // vec_dist is 1
 
// reverse(start, end) - O(n) - reverse the order of elements
reverse(vec.begin(), vec.end()); // vec contains 1, 5, 4
 
// next_permutation(start, end), prev_permutation(start, end) - O(n) - rearranges to lexicographically greater/lesser permutation
next_permutation(vec.begin(), vec.end()); // vec contains 4, 1, 5
prev_permutation(vec.begin(), vec.end()); // vec contains 1, 5, 4
 
// random_shuffle(start, end) - O(n) - rearrange elements randomly
random_shuffle(vec.begin(), vec.end());
 
// sort(start, end) - O(nlog n)
int arr_1[] = {4,5,1};
int arr_2[] = {2,3,1};
 
sort(arr_1, arr_1+3);       // arr_1 contains 1, 4, 5 - ascending by default
sort(arr_2, arr_2+3, comp); // arr_2 contains 3, 2, 1 - descending using comp function
 
// binary_search(start, end, value) - O(log n) - returns true if value found in sorted range
int status;
status = binary_search(arr_1, arr_1+3, 4);  // status contains 1 (ascending range by default)
status = binary_search(arr_2, arr_2+3, 3, comp);  // status contains 1
 
// merge(start_1, end_1, start_2, end_2, new_iter)
vector<int> vec_1(6); // vec_1 contains 0, 0, 0, 0, 0, 0
sort(arr_2, arr_2+3); // arr_2 contains 1, 2, 3
merge(arr_1, arr_1+3, arr_2, arr_2+3, vec_1.begin()); // vec_1 contains 1, 1, 2, 3, 4, 5
 
// find(start, end, value) - O(n) returns iterator to element otherwise end()
vec_iter = find(vec_1.begin(), vec_1.end(), 4); // *vec_iter is 4
vec_iter = find(vec_1.begin(), vec_1.end(), 6); // vec_iter is vec_1.end()
