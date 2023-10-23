using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Runtime.InteropServices;

// author: mehalimes
// Shoe Shuffling Codeforces Solution 1691B
// IDEA : mehalimes

namespace Project1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int t = Convert.ToInt32(Console.ReadLine());
            for (int tc = 0; tc < t; tc++)
            {
                int n = Convert.ToInt32(Console.ReadLine());
                long[] ar = Array.ConvertAll(Console.ReadLine().Trim().Split(' '), Convert.ToInt64);
                Array.Sort(ar);
                List<long> eq_ar = new List<long>();
                long eq = 0L;
                for(int i = 0; i+1 < n; i++)
                {
                    if (ar[i] == ar[i + 1])
                    {
                        eq++;
                    }
                    else
                    {
                        eq_ar.Add(eq+1);
                        eq = 0;
                    }
                }
                eq_ar.Add(eq + 1);
                bool ok = true;
                for(int i = 0; i < eq_ar.Count; i++)
                {
                    if (eq_ar[i] > 1)
                    {
                        continue;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
                if (ok)
                {
                    long[] nar = new long[n];
                    for(int i = 0; i < n; i++)
                    {
                        nar[i] = i + 1;
                    }
                    for (int i = 0; i + 1 < n; i++)
                    {
                        if (ar[i] == ar[i + 1])
                        {
                            long temp1 = nar[i];
                            long temp2 = nar[i + 1];
                            nar[i] = temp2;
                            nar[i + 1] = temp1;
                        }
                    }
                    for(int i = 0; i < n; i++)
                    {
                        Console.Write(nar[i] + " ");
                    }
                    Console.WriteLine();
                }
                else
                {
                    Console.WriteLine(-1);
                }
            }
            //Console.ReadLine();
            return;
        }
    }
}

