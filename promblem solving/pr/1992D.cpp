#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

struct HinduGod {
    int current_position;
    int num_jumps;
    int num_swims;
};

int main() {
    int num_tests;
    cin >> num_tests;

    while (num_tests--) {
        int river_length, max_jump_distance, max_swim_distance;
        cin >> river_length >> max_jump_distance >> max_swim_distance;

        string river;
        cin >> river;

        vector<bool> visited(river_length + 1, false);
        queue<HinduGod> hindu_queue;
        hindu_queue.push({1, 0, 0});
        visited[1] = true;
        bool reachable = false;

        while (!hindu_queue.empty()) {
            HinduGod current_hindu = hindu_queue.front();
            hindu_queue.pop();
            int pos = current_hindu.current_position;
            int jumps = current_hindu.num_jumps;
            int swims = current_hindu.num_swims;

            if (pos == river_length) {
                reachable = true;
                break;
            }

            for (int jump = 1; jump <= max_jump_distance; ++jump) {
                int new_pos = pos + jump;
                if (new_pos <= river_length && river[new_pos - 1] != 'C' && !visited[new_pos]) {
                    visited[new_pos] = true;
                    hindu_queue.push({new_pos, jumps + 1, swims});
                }
            }

            if (river[pos - 1] == 'W' && swims < max_swim_distance) {
                int new_pos = pos + 1;
                if (new_pos <= river_length && river[new_pos - 1] != 'C' && !visited[new_pos]) {
                    visited[new_pos] = true;
                    hindu_queue.push({new_pos, jumps, swims + 1});
                }
            }
        }

       if(reachable)
       cout<<"YES"<<endl;
      else
       cout<<"NO"<<endl;
    }

    return 0;
}
