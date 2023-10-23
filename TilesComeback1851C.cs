using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Diagnostics.Eventing.Reader;
using System.Runtime.InteropServices;
// author: mehalimes 
// IDEA : mehalimes
// 1851C Codeforces Solution
namespace Project1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int t = Convert.ToInt32(Console.ReadLine());
            List<string> ans_ar = new List<string>();
            for (int tc = 0; tc < t; tc++)
            {
                string[] tokens = Console.ReadLine().Split(' ');
                long n = Convert.ToInt64(tokens[0]);
                long k = Convert.ToInt64(tokens[1]);
                long[] ar = Array.ConvertAll(Console.ReadLine().Trim().Split(' '), Convert.ToInt64);
                long firstElement = ar[0];
                long lastElement = ar[ar.Length - 1];
                long firstCount = k;
                long lastCount = k;
                long firstIndex = 0;
                long lastIndex = ar.Length - 1;
                for(int i = 0; i < ar.Length && firstCount > 0; i++)
                {
                    if (ar[i] == firstElement)
                    {
                        firstIndex = i;
                        firstCount--;
                    }
                }
                for(long i = n - 1; i >= 0 && lastCount > 0; i--)
                {
                    if (ar[i] == lastElement)
                    {
                        lastIndex = i;
                        lastCount--;
                    }
                }
                string ans = "";
                if(lastCount == 0 && firstCount == 0)
                {
                    if(lastElement != firstElement)
                    {
                        if(firstIndex < lastIndex)
                        {
                            ans = "YES";
                        }
                        else
                        {
                            ans = "NO";
                        }
                    }
                    else if(lastElement == firstElement)
                    {
                        ans = "YES";
                    }
                }
                else
                {
                    ans = "NO";
                }
                ans_ar.Add(ans);
            }
            foreach(string ans in ans_ar){
                Console.WriteLine(ans);
            }
            //Console.ReadLine();
            return;
        }
    }
}

