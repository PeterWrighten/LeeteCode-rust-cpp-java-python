struct Solution;

impl Solution {
    pub fn reorder_space(text: String) -> String {
        let words: Vec<&str> = text.split_whitespace().collect();
        let space = text.chars().map(|s| s == ' ').count();
        let word_cnt = words.len() - 1;
        let mut s = String::new();
        if word_cnt == 0 {
            s += words[0];
            s += &(" ".repeat(space));
            return s;
        } 

        for i in 0..words.len() {
            s += words[i];
            s += &(" ".repeat(if i < word_cnt { space / word_cnt } else { space % word_cnt}));
        }

        s


    }
}
