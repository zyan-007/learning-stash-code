// STL CONTAINER TEST — test1.cpp
//
// Rules:
// - Do NOT change function signatures.
// - Pick the container(s) YOU think are correct for each problem.
// - Use real STL methods (no cheating by just using vector for everything
//   and linear-searching — that defeats the point of the exercise).
// - Fill in main() to test your functions with the example inputs given,
//   and print output so I can check it matches.
// - When done, tell me and I'll review your container choices + API usage.
//
// Containers covered so far: vector, list, map (ordered/unordered),
// set (ordered/unordered), deque, queue, priority_queue, stack.

#include <bits/stdc++.h>
using namespace std;

// ---------------------------------------------------------------------
// Q1. "Browser back button" history.
//
// Rule: visiting a page adds it on top of your current position.
// Going back moves you to the previous page (but doesn't erase it,
// you're just no longer "on" it). If you visit a NEW page after going
// back, anything that was ahead of you is gone for good.
//
// EXAMPLE:
//   visitPage(1)   -> history so far: [1]                you're at 1
//   visitPage(2)   -> history so far: [1, 2]             you're at 2
//   visitPage(3)   -> history so far: [1, 2, 3]          you're at 3
//   goBack()       -> returns 2   (3 is discarded)       you're at 2
//   goBack()       -> returns 1                          you're at 1
//   visitPage(5)   -> history so far: [1, 5]  (old "2,3" branch is gone)
//   goBack()       -> returns 1
//
// Implement:
//   void visitPage(int page);
//   int goBack();
// Pick the container you think fits. Run the exact sequence above in
// main() and print what goBack() returns each time — it should print
// 2, 1, 1.

stack <int> page_visited;

 void visitPage(int page){
    page_visited.push(page);
 }

 int goBack(){
    page_visited.pop();
    return page_visited.top();
 }

// ---------------------------------------------------------------------
// Q2. Task scheduler by priority.
//
// You get tasks as (priority, name) pairs, added in any order. You must
// process them strictly from HIGHEST priority to lowest.
//
// EXAMPLE input:
//   (3, "email")
//   (9, "server_down")
//   (1, "cleanup")
//   (5, "deploy")
//
// EXPECTED processing order (print the names in this order):
//   server_down (9), deploy (5), email (3), cleanup (1)
//
// Pick the container you think fits and implement the processing.
map<int, string, greater<int>> task_schedule;
void q2_taskScheduler(vector<pair<int,string>> tasks){
    for(auto& i: tasks){
        task_schedule[i.first] = i.second;
    }

    for(auto&i :task_schedule){
        cout << i.second << " (" << i.first << ")" << endl; 
    }
}

// ---------------------------------------------------------------------
// Q3. Word frequency, alphabetically ordered — using exactly ONE
// container (no separate sort step, no second container for ordering).
//
// EXAMPLE input:
//   ["banana", "apple", "banana", "cherry", "apple", "apple"]
//
// EXPECTED output (alphabetical, with counts):
//   apple: 3
//   banana: 2
//   cherry: 1
//
// Use exactly one container, and pick the one you think fits.
map<string, int> word_frequency;
void q3_wordFrequencyOrdered(vector<string> words){
    for(string & i: words){
        if (word_frequency.count(i) == 1){
            word_frequency[i] += 1;
        }
        else{
            word_frequency[i] = 1;
        }
    }

    for(auto &i: word_frequency){
        cout << i.first << ": " << i.second << endl;
    }
}

// ---------------------------------------------------------------------
// Q4. Same word-frequency problem as Q3, same example input, same kind
// of output — BUT now you don't care about alphabetical order at all,
// you only care about the fastest average-case insert/lookup while
// counting. Pick the container you think fits — it should be a
// different choice than Q3. (Print the counts in whatever order this
// container gives you — that's expected/fine here.)
unordered_map<string, int> new_word_frequency;
void q4_wordFrequencyFast(vector<string> words){
    for(string & i: words){
        if (new_word_frequency.count(i) == 1){
            new_word_frequency[i] += 1;
        }
        else{
            new_word_frequency[i] = 1;
        }
    }

    for(auto &i: new_word_frequency){
        cout << i.first << ": " << i.second << endl;
    }
}

// ---------------------------------------------------------------------
// Q5. Membership + range queries on integers.
//
// EXAMPLE:
//   build({5, 1, 9, 3, 7, 3, 1});   // note: 3 and 1 are duplicated in input
//   exists(7)         -> true
//   exists(4)         -> false
//   rangeQuery(2, 7)  -> should return {3, 5, 7} in sorted order
//                        (dedup'd — no repeated 3s even though input had two)
//
// Implement:
//   void build(vector<int> values);
//   bool exists(int x);
//   vector<int> rangeQuery(int lo, int hi);
// using ONE container you think fits both operations well.
set<int> membership;
void q5_rangeAndMembership();
void build(vector<int> values){
    for(int &i: values)
        membership.insert(i);
}

bool exists(int x){
    return (membership.count(x) == 1);
}

vector<int> rangeQuery(int lo, int hi){
    vector <int> a;
    while(lo <= hi){
        if (membership.count(lo) == 1)
            a.push_back(lo);
        lo++;
    }

    return a;
}

// ---------------------------------------------------------------------
// Q6. Balanced brackets checker.
//
// EXAMPLES:
//   "{[()()]}"  -> true
//   "{[(])}"    -> false   (the ] closes before the ( that's still open)
//   "((("       -> false   (nothing ever closes)
//   ""          -> true    (empty is trivially balanced)
//
// Idea: walk the string left to right. On an opening bracket, remember
// it. On a closing bracket, it must match the most recently remembered
// still-open bracket, or the string is unbalanced. Pick the container
// you think fits.
stack <char> brackets;
bool q6_isBalanced(string s){
    if (s == "")
        return true;
    for(char&i: s){
        if (i == '(' || i == '{' || i == '[')
            brackets.push(i);
        else{ // it has to be ) or } or ]
            if (brackets.top() == '(' && i == ')')
                brackets.pop();
            else if(brackets.top() == '{' && i == '}')
                brackets.pop();
            else if(brackets.top() == '[' && i == ']')
                brackets.pop();
            else
                return false;
        }
    }
    if (brackets.empty())
        return true;
    return false;
}

// ---------------------------------------------------------------------
// Q7. Editor undo history with a size cap.
//
// EXAMPLE:
//   addAction("type_A")
//   addAction("type_B")
//   addAction("type_C")
//   addAction("type_D")
//   trimOldestIfOver(3)   // history had 4 actions, cap is 3, so drop the
//                         // OLDEST one ("type_A") -> left with B, C, D
//   undo()                -> returns "type_D" (most recent), left with B, C
//
// You need fast add-to-recent-end, remove-from-recent-end (undo), AND
// remove-from-oldest-end (trimming). Implement:
//   void addAction(string action);
//   void trimOldestIfOver(size_t maxSize);
//   string undo();
// Pick the container you think fits.
deque<string> editor;
void q7_editorHistoryDemo();
void addAction(string action){
    editor.push_back(action);
}

void trimOldestIfOver(size_t maxSize){
    int size = editor.size() - maxSize;

    editor.erase(editor.begin(), editor.begin()+size);
}

string undo(){
    string value = editor.back();
    editor.pop_back();

    return value;
}
// ---------------------------------------------------------------------
// Q8. Repeated middle-of-sequence insertion via a held iterator.
//
// Scenario: you have a sequence of ints, e.g. {10, 20, 30, 40}, and you
// are holding an iterator pointing at 30. You need to insert a new
// value (25) right before 30 — and you'll be doing lots of these
// middle-inserts using iterators you already have, NOT by index. You
// don't need operator[] / random access at all.
//
// EXPECTED after inserting 25 before the iterator-at-30:
//   {10, 20, 25, 30, 40}
//
// Pick the container you think avoids shifting every element after the
// insertion point.
list<int> a = {10, 20, 30, 40};
void q8_midInsertDemo(list<int>::iterator it, int value){
    a.insert(next(it, -1), value);
}

// ---------------------------------------------------------------------
// Q9. Intersection of two integer collections, deduplicated, sorted.
//
// EXAMPLE:
//   a = {4, 9, 5, 9, 1, 1}
//   b = {5, 1, 4, 4, 8}
//
// EXPECTED output: {1, 4, 5}   (present in both, no dupes, sorted)
//
// Don't write your own nested O(n^2) loop. Pick a container and/or STL
// algorithm you think fits.
vector<int> q9_intersection(vector<int> a, vector<int> b){  
    // question 9 is very hard, has been 1hour i couldn't land on anything still trying, starting 2nd hour
    // on second hour and still stuck    
    unordered_set<int> a1;
    unordered_set<int> b1;
    for(int& i: a)
        a1.insert(i);
    for(int& i: b)
        b1.insert(i);

    map<int, int> final_value;
    for(const int& i: a1){
        if (final_value.count(i) == 1)
            final_value[i]++;
        else
            final_value[i] = 1;
    }
    for(const int& i: b1){
        if (final_value.count(i) == 1)
            final_value[i]++;
        else
            final_value[i] = 1;
    }

    vector<int> final_array;

    for(auto& i: final_value){
        if(i.second == 2)
            final_array.push_back(i.first);
    }

    return final_array;
}

// ---------------------------------------------------------------------
// Q10. TRICKY — student_id -> list_of_grades, but iteration must follow
// FIRST-INSERTION order (not sorted by id, not hash order).
//
// EXAMPLE, inserted in this order:
//   insert(103, {90, 85})
//   insert(101, {70})
//   insert(105, {60, 95, 88})
//
// EXPECTED iteration order when printing all students:
//   103 -> [90, 85]
//   101 -> [70]
//   105 -> [60, 95, 88]
//   (NOT sorted as 101, 103, 105 — insertion order must be preserved)
//
// No single STL container does "fast lookup by key" AND "remembers
// insertion order" by itself. Think about combining two containers.
// Design + implement it.
vector<int> student_id;
map<int, vector<int>> marks;
void q10_insertionOrderedMap(){
    for(int& i: student_id){
        cout << i << " -> [";
        for(int& j: marks[i]){
            cout << j << " ";
        }
        cout << "]" << endl;
    }
};

void insert_record(int id, vector<int> grade){
    if(find(student_id.begin(), student_id.end(), id) != student_id.end()){
        marks[id] = grade;
    }
    else{
        student_id.push_back(id);
        marks[id] = grade;
    }
}

int main() {
    // Call your functions here using the exact example inputs given
    // above, and print output so I can check it against the expected
    // output shown in each question's comment.
    
    cout << "question-1" << endl;
    //question 1
      visitPage(1);
      visitPage(2);
      visitPage(3); 
      cout << goBack() << endl;     
      cout << goBack() << endl;    
      visitPage(5); 
      cout << goBack() << endl;
    cout << endl;
    
    cout << "question-2" << endl;
    //question 2
    vector<pair<int, string>> tasks = {{3, "email"}, {9, "server_down"}, {1, "cleanup"}, {5, "deploy"}};
    q2_taskScheduler(tasks);
    cout << endl;

    cout << "question-3" << endl;
    //question 3
    vector <string> words = {"banana", "apple", "banana", "cherry", "apple", "apple"};
    q3_wordFrequencyOrdered(words);
    cout << endl;

    cout << "question-4" << endl;
    //question 4
    q4_wordFrequencyFast(words);
    cout << endl;

    cout << "question-5" << endl;
    //question 5
    build({5, 1, 9, 3, 7, 3, 1}); 
    cout << exists(7) << endl;        
    cout << exists(4) << endl;     
    vector<int> printingQuery = rangeQuery(2, 7);
    for(int &i: printingQuery)
        cout << i << " ";
    cout << endl;


    cout << "question-6" << endl;
    // question 6
    cout << q6_isBalanced("{[()()]}") << endl;
    cout << q6_isBalanced("{[(])}") << endl;
    cout << q6_isBalanced("(((") << endl;
    cout << q6_isBalanced("") << endl;
    cout << endl;

    cout << "question-7" << endl;
    // question 7
    addAction("type_A");
    addAction("type_B");
     addAction("type_C");
    addAction("type_D");
    for(string&i: editor)
        cout << i << " ";
    cout << endl;
     trimOldestIfOver(3);   
    for(string&i: editor)
        cout << i << " ";
    cout << endl;
    cout << undo() << endl;
    
    for(string&i: editor)
        cout << i << " ";
    cout << endl;

    cout << "question-8" << endl;
    // question 8
    for(int&i: a){
        cout << i << " ";
    }
    cout << endl;
    q8_midInsertDemo(next(a.begin(), 3), 25);
    for(int&i: a){
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

//   a = {4, 9, 5, 9, 1, 1}
//   b = {5, 1, 4, 4, 8}

    cout << "question 9" << endl;
    //question 9
    vector<int> a = {4, 9, 5, 9, 1, 1};
    vector<int> b = {5, 1, 4, 4, 8};
    vector<int> result = q9_intersection(a, b);

    for(int& i: result)
        cout << i << " ";
    cout << endl;


    cout << "question 10" << endl;
    //question 10
    insert_record(103, {90, 85});
    insert_record(101, {70});
    insert_record(105, {60, 95, 88});
    insert_record(103, {101, 50, 33});
    q10_insertionOrderedMap();
    cout << endl;

    //   insert(103, {90, 85})
//   insert(101, {70})
//   insert(105, {60, 95, 88})
//
// EXPECTED iteration order when printing all students:
//   103 -> [90, 85]
//   101 -> [70]
//   105 -> [60, 95, 88]
//   (NOT sorted as 101, 103, 105 — insertion order must be preserved)
    return 0;
}
