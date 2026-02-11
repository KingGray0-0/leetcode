
class SegmentTree {
    int n;
    vector<int> min_val, max_val, lazy;

public:
    SegmentTree(int n) : n(n) {
        min_val.assign(4 * n, 0);
        max_val.assign(4 * n, 0);
        lazy.assign(4 * n, 0);
    }

    void push_down(int idx) {
        if (lazy[idx] != 0) {
            int left = 2 * idx, right = 2 * idx + 1;
            lazy[left] += lazy[idx];
            min_val[left] += lazy[idx];
            max_val[left] += lazy[idx];
            
            lazy[right] += lazy[idx];
            min_val[right] += lazy[idx];
            max_val[right] += lazy[idx];
            
            lazy[idx] = 0;
        }
    }

    void update(int idx, int l, int r, int ql, int qr, int val) {
        if (ql <= l && r <= qr) {
            lazy[idx] += val;
            min_val[idx] += val;
            max_val[idx] += val;
            return;
        }
        push_down(idx);
        int mid = l + (r - l) / 2;
        if (ql <= mid) update(2 * idx, l, mid, ql, qr, val);
        if (qr > mid) update(2 * idx + 1, mid + 1, r, ql, qr, val);
        
        min_val[idx] = min(min_val[2 * idx], min_val[2 * idx + 1]);
        max_val[idx] = max(max_val[2 * idx], max_val[2 * idx + 1]);
    }

    int find_first(int idx, int l, int r, int target) {
      
        if (min_val[idx] > target || max_val[idx] < target) return -1;
        if (l == r) return l;
        
        push_down(idx);
        int mid = l + (r - l) / 2;
        int res = find_first(2 * idx, l, mid, target);
        if (res == -1) {
            res = find_first(2 * idx + 1, mid + 1, r, target);
        }
        return res;
    }
};

class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        SegmentTree st(n + 1);
        unordered_map<int, int> last_pos;
        int max_len = 0;

        for (int i = 0; i < n; ++i) {
            int val = nums[i];
            int diff = (val % 2 == 0) ? 1 : -1;
           
            int prev_idx = last_pos.count(val) ? last_pos[val] : -1;
            
            st.update(1, 0, n, prev_idx + 1, i, diff);
         
            int leftmost = st.find_first(1, 0, n, 0);
            if (leftmost != -1 && leftmost <= i) {
                max_len = max(max_len, i - leftmost + 1);
            }
            
            last_pos[val] = i;
        }
        
        return max_len;

    }
};