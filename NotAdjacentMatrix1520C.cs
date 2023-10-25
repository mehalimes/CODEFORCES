using System;
using System.Collections.Generic;
using System.Linq;

// author: mehalimes

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
                List<int> ar = new List<int>();
                if(n == 2)
                {
                    Console.WriteLine(-1);
                    continue;
                }
                for(int i = 1; i <= n*n; i += 2)
                {
                    ar.Add(i);
                }
                for(int i = 2; i <= n*n; i += 2)
                {
                    ar.Add(i);
                }
                int c = 0;
                for(int i = 0; i < ar.Count; i++)
                {
                    Console.Write(ar[i] + " ");
                    c++;
                    if(c == n)
                    {
                        Console.WriteLine();
                        c = 0;
                    }
                }
            }
            Console.ReadLine();
            return;
        }
    }
}
