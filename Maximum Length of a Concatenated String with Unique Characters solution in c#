public class Solution {
    public int MaxLength(IList<string> arr) {
        var max = 0;
        var dp = new List<int>();
        dp.Add(0);
        foreach (var s in arr) {
            var a = 0;
            var ok = true;
            foreach (var c in s) {
                var t = 1 << (c - 'a');
                if ((a & t) != 0) {
                    ok = false;
                    break;
                }
                a |= t;
            }
            if (!ok) continue;
            for (var i = dp.Count - 1; i >= 0; i--) {
                if ((dp[i] & a) != 0) continue;
                dp.Add(dp[i] | a);
                max = Math.Max(max, BitCount(dp[i] | a));
            }
        }
        return max;
    }
    int BitCount(int n) {
        var c = 0;
        while (n != 0) {
            c++;
            n &= n - 1;
        }
        return c;
    }
}
