using System;
using System.Collections;
using System.Collections.Generic;
// C1 Powering the hero (easy version)
// IDEA : DCC NITA Youtube
// Author : mehalimes
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
                long[] ar = Array.ConvertAll(Console.ReadLine().Trim().Split(' '), Convert.ToInt64);
                ArrayList sorted_ar = new ArrayList();
                long total = 0L;
                for(int i = 0; i < ar.Length; i++)
                {
                    if (ar[i] == 0 && sorted_ar.Count > 0)
                    {
                        sorted_ar.Sort();
                        total += Convert.ToInt64(sorted_ar[sorted_ar.Count - 1]);
                        sorted_ar.RemoveAt(sorted_ar.Count - 1);
                    }
                    else
                    {
                        sorted_ar.Add(ar[i]);
                    }
                }
                Console.WriteLine(total);
            }
            //Console.ReadLine();
            return;
        }
    }
}

