using System;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Runtime.InteropServices;

// author: mehalimes 
// Distinct Split 1791D Codeforces solution
// IDEA : Ashutosh sharma youtube channel

namespace Project1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int t = Convert.ToInt32(Console.ReadLine());
            for(int tc = 0; tc < t; tc++)
            {
                int n = Convert.ToInt32(Console.ReadLine());
                long mx = long.MinValue;
                string s = Console.ReadLine();
                int[] freq1 = new int[26];
                int[] freq2 = new int[26];
                for(int i = 0; i < s.Length; i++)
                {
                    freq1[s[i] - 'a']++;
                }
                for(int i = 0; i < s.Length; i++)
                {
                    if (freq1[s[i]-'a'] >= 1)
                    {
                        freq1[s[i] - 'a']--;
                        freq2[s[i] - 'a']++;
                    }
                    else
                    {
                        continue;
                    }
                    int cnt1 = 0;
                    int cnt2 = 0;
                    for(int j = 0; j < 26; j++)
                    {
                        if (freq1[j] >= 1)
                        {
                            cnt1++;
                        }
                        if (freq2[j] >= 1)
                        {
                            cnt2++;
                        }
                    }
                    mx = Math.Max(mx, cnt1 + cnt2);
                }
                Console.WriteLine(mx);
            }
            Console.ReadLine();
            return;
        }
    }
}
