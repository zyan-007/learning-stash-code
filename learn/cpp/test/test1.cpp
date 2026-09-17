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
//   visitPage(1)   -> history so far: [1]              you're at 1
//   visitPage(2)   -> history so far: [1, 2]            you're at 2
//   visitPage(3)   -> history so far: [1, 2, 3]          you're at 3
//   goBack()       -> returns 2   (3 is discarded)       you're at 2
//   goBack()       -> returns 1                          you're at 1
//   visitPage(5)   -> history so far: [1, 5]  (old "2,3" branch is gone)
//   goBack()       -> returns 1
//
// Implement:
//   void visitPage(int page);
//   int goBack();
// using ONE container that naturally supports "push on top / pop off
// top / peek top". Run the exact sequence above in main() and print
// what goBack() returns each time — it should print 2, 1, 1.
void q1_browserHistoryDemo(){

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
// Which container gives you O(log n) insert and O(log n) "grab the
// current max" WITHOUT you manually re-sorting or writing your own
// heap logic?
void q2_taskScheduler(vector<pair<int,string>> tasks);

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
// Which container gives you grouping (like a hashmap would) AND sorted
// iteration order for free, just by iterating it front to back?
void q3_wordFrequencyOrdered(vector<string> words);

// ---------------------------------------------------------------------
// Q4. Same word-frequency problem as Q3, same example input, same kind
// of output — BUT now you don't care about alphabetical order at all,
// you only care about the fastest average-case insert/lookup while
// counting. Which container should you switch to, and why is it a
// different choice than Q3? (Print the counts in whatever order this
// container gives you — that's expected/fine here.)
void q4_wordFrequencyFast(vector<string> words);

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
// using ONE container that keeps things sorted AND unique automatically,
// and supports efficient range iteration (think: lower_bound/upper_bound).
void q5_rangeAndMembership();

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
// it. On a closing bracket, it must match the MOST RECENTLY remembered
// still-open bracket, or the string is unbalanced. Which container
// matches "remember most recent, check/remove most recent" naturally?
bool q6_isBalanced(string s);

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
// You need O(1) add-to-recent-end, O(1) remove-from-recent-end (undo),
// AND O(1) remove-from-oldest-end (trimming). Implement:
//   void addAction(string action);
//   void trimOldestIfOver(size_t maxSize);
//   string undo();
// Which container gives O(1) push/pop at BOTH ends?
void q7_editorHistoryDemo();

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
// vector/deque would have to shift every element after the insertion
// point (O(n)) — which container makes this insert O(1) once you
// already have the iterator?
void q8_midInsertDemo();

// ---------------------------------------------------------------------
// Q9. Intersection of two integer collections, deduplicated, sorted.
//
// EXAMPLE:
//   a = {4, 9, 5, 9, 1, 1}
//   b = {5, 1, 4, 4, 8}
//
// EXPECTED output: {1, 4, 5}   (present in both, no dupes, sorted)
//
// Don't write your own nested O(n^2) loop. Use a container that gives
// you sorted+unique elements, then either lean on its membership check
// or an STL algorithm like set_intersection.
vector<int> q9_intersection(vector<int> a, vector<int> b);

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
// insertion order" by itself. Think about combining two containers:
// one for O(1)/O(log n) lookup by id, one for remembering the order
// ids were first seen. Design + implement it.
void q10_insertionOrderedMap();

int main() {
    // Call your functions here using the exact example inputs given
    // above, and print output so I can check it against the expected
    // output shown in each question's comment.

    return 0;
}
