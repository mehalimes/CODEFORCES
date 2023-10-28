using System;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Runtime.InteropServices;

// author: mehalimes 
// Add and Divide 1485A Codeforces Solution 
// IDEA : Editorial and CP_4_Newbies Youtube Channel
// Worst Case : 10^9 2 --> 29 moves


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
                long a, b;
                long minCount = long.MaxValue;
                a = Convert.ToInt64(tokens[0]);
                b = Convert.ToInt64(tokens[1]);
                for(int i = 0; i < 32; i++)
                {
                    long tempb = b + i;
                    if(tempb <= 1)
                    {
                        continue;
                    }
                    long tempa = a;
                    long count = i;
                    while(tempa != 0)
                    {
                        tempa /= tempb;
                        count++;
                    }
                    minCount = Math.Min(count, minCount);
                }
                Console.WriteLine(minCount);
            }
            Console.ReadLine();
            return;
        }
    }
}
