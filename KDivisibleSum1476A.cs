using System;
using System.Collections.Generic;

// author: mehalimes
// K-divisible Sum Codeforces Solution 1476A
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
                long n, k;
                n = Convert.ToInt64(tokens[0]);
                k = Convert.ToInt64(tokens[1]);
                if(k == 1)
                {
                    Console.WriteLine(1);
                    continue;
                }
                if(n <= k)
                {
                    long ans = k / n;
                    if(k % n == 0)
                    {
                        ;
                    }
                    else
                    {
                        ans += 1;
                    }
                    Console.WriteLine(ans);
                }
                else if(n > k)
                {
                    long dest = Convert.ToInt64(n / k);
                    if(n % k != 0)
                    {
                        dest++;
                    }
                    k = dest * k;
                    long ans = k / n;
                    if(k % n == 0)
                    {
                        ;
                    }
                    else
                    {
                        ans += 1;
                    }
                    Console.WriteLine(ans);
                }
            }
            Console.ReadLine();
            return;
        }
    }
}
