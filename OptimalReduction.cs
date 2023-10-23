using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Diagnostics.Eventing.Reader;
using System.Runtime.InteropServices;
// author: mehalimes
// Optimal Reduction Codeforces Solution
// IDEA : Programming with Khatri Youtube Channel
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
                long[] ar = Array.ConvertAll(Console.ReadLine().Trim().Split(' '), Convert.ToInt64);
                bool dec = false, flag = false;
                for(int i = 0; i+1 < n; i++)
                {
                    if (ar[i] > ar[i + 1])
                    {
                        dec = true;
                    }
                    else if(dec && ar[i] < ar[i + 1]){
                        flag = true;
                        break;
                    }
                }
                string ans = flag ? ("NO") : ("YES");
                Console.WriteLine(ans);
            }
            Console.ReadLine();
            return;
        }
    }
}

