using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Runtime.InteropServices;

// author: mehalimes
// Mike and palindrome Codeforces Solution
// IDEA: mehalimes

namespace Project1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            int notEqualCount = 0;
            double slength = s.Length;
            double ssize = Math.Floor(slength / 2);
            for(int i = 0; i < ssize; i++)
            {
                if (s[i] == s[Convert.ToInt32(s.Length - i - 1)])
                {
                    continue;
                }
                else
                {
                    notEqualCount++;
                }
            }
            if(notEqualCount == 0 && slength % 2 == 1)
            {
                Console.WriteLine("YES");
            }
            else if(notEqualCount == 1)
            {
                Console.WriteLine("YES");
            } 
            else
            {
                Console.WriteLine("NO");
            }
            //Console.ReadLine();
            return;
        }
    }
}

