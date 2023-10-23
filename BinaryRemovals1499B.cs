using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;

// author: mehalimes
// Binary Removals 1499B Codeforces Solution
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
                string s = Console.ReadLine();
                int onesIndex = s.Length - 1;
                int zerosIndex = 0;
                for(int i = 0; i+1 < s.Length; i++)
                {
                    if (s[i] == '1' && s[i+1] == '1')
                    {
                        onesIndex = i;
                        break;
                    }
                }
                for(int i = 0; i+1 < s.Length; i++)
                {
                    if (s[i] == '0' && s[i+1] == '0')
                    {
                        zerosIndex = i;
                    }
                }
                Console.WriteLine((onesIndex < zerosIndex) ? ("NO") : ("YES"));
            }
            //Console.ReadLine();
            return;

        }
    }
}

