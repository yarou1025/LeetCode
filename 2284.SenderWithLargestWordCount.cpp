class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string, int> send2str;
        for(int i = 0; i < messages.size(); i++){
            if(send2str.find(senders[i]) == send2str.end()){
                send2str[senders[i]] = get_num(messages[i]);
            }
            else
                send2str[senders[i]] += get_num(messages[i]);
        }
        string max_name = "";
        int max_cnt = 0;
        for(auto pr:send2str){
            if(pr.second >= max_cnt){
                max_cnt = pr.second;
                max_name = pr.first;
            }
            // cout << pr.first << ", " << pr.second << endl;
        }
        return max_name;
    }
    int get_num(string str){
        stringstream ss(str);
        int cnt = 0;
        string tmp;
        while(ss >> tmp){
            cnt += 1;
        }
        return cnt;
    }
};
