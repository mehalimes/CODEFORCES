using System;
using System.Collections.Generic;

// author: mehalime
// Berland Poker 1359A Codeforces Solution
// IDEA : Editorial
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
                int n = Convert.ToInt32(tokens[0]);
                int m = Convert.ToInt32(tokens[1]);
                int k = Convert.ToInt32(tokens[2]);
                int cardPerPerson = n / k;
                long mx = long.MinValue;
                if(m <= cardPerPerson)
                {
                    mx = m;
                    Console.WriteLine(mx);
                }
                else if(m > cardPerPerson)
                {
                    mx = cardPerPerson;
                    m -= cardPerPerson;
                    long ans = 0L;
                    if(m % (k-1) == 0)
                    {
                        ans = m / (k - 1);
                    }
                    else if(m % (k-1) != 0)
                    {
                        ans = (m / (k - 1)) + 1;
                    }
                    Console.WriteLine(mx - ans);
                }
            }
            Console.ReadLine();
            return;
        }
    }
}
