using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
// 1829D Gold Rush Codeforces Solution
namespace Project1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int t = Convert.ToInt32(Console.ReadLine());
            for(int tc = 0; tc < t; tc++)
            {
                string[] tokens = Console.ReadLine().Split(' ');
                long x = Convert.ToInt64(tokens[0]);
                long y = Convert.ToInt64(tokens[1]);
                SortedSet<long> set1 = new SortedSet<long>();
                List<long> ans_ar = new List<long>();
                DFS(x, ref set1);
                foreach(long val in set1)
                {
                    ans_ar.Add(val);
                }
                bool ans = false;
                for(int i = 0; i < ans_ar.Count; i++)
                {
                    if (ans_ar[i] == y)
                    {
                        ans = true;
                    }
                }
                string output = ans ? ("YES") : ("NO");
                Console.WriteLine(output);
            }
            //Console.ReadLine();
            return;
        }
        static void DFS(long x, ref SortedSet<long> set1)
        {
            set1.Add(x);
            if(x % 3 == 0)
            {
                x /= 3;
                DFS(x * 2, ref set1);
                DFS(x * 1, ref set1);
            }
        }
        
    }
}

