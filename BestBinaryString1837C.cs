using System;
using System.Collections.Generic;
using System.Diagnostics.SymbolStore;
using System.Net.NetworkInformation;
using System.Net.Sockets;
using System.Runtime.InteropServices;
using System.Security.Policy;

// author: mehalimes 
// 1837C Best Binary String Codeforces Solution 
// IDEA : DCC NITA Youtube Channel 

/* 
 Idea is making the subsegment count as minimum as possible
 
 */

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
                List<char> ar = new List<char>();
                for(int i = 0; i < s.Length; i++)
                {
                    ar.Add(s[i]);
                }
                char previous = '0';
                for(int i = 0; i < ar.Count; i++)
                {
                    if (ar[i] == '?')
                    {
                        ar[i] = previous;
                    }
                    else
                    {
                        previous = ar[i];
                    }
                }
                foreach(char x in ar)
                {
                    Console.Write(x);
                }
                Console.WriteLine();
            }
            Console.ReadLine();
            return;
        }
    }
}
