using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Diagnostics.Eventing.Reader;
using System.Runtime.InteropServices;
// author: mehalimes
// Yet Another Permutation Problem Codeforces Solution 
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
                long n = Convert.ToInt64(Console.ReadLine());
                List<long> ar = new List<long>();
                for(int i = 1; i <= n; i+=2)
                {
                    int j = i;
                    do
                    {
                        ar.Add(j);
                        j *= 2;
                    } while (j <= n);
                }
                for(int i = 0; i < n; i++)
                {
                    Console.Write(ar[i] + " ");
                }
                Console.WriteLine();
            }
            Console.ReadLine();
            return;
        }
    }
}

