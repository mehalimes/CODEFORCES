using System;
using System.Collections.Generic;
using System.Diagnostics.Eventing.Reader;
using System.Runtime.InteropServices;

// author: mehalimes 
// Regular Bracket Sequence 1469A Codeforces Solution
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
                string s = Console.ReadLine();
                int open = 0, close = 0;
                bool isRegular = true;
                int questionCount = 0;
                for (int i = 0; i < s.Length; i++)
                {
                    if (s[i] == '(')
                    {
                        open++;
                    }
                    else if (s[i] == ')')
                    {
                        close++;
                    }
                    else if (s[i] == '?')
                    {
                        questionCount++;
                    }
                    if(close > open && close - open <= questionCount)
                    {
                        open += (close - open);
                        questionCount -= (close - open);
                    }
                    if(close > open)
                    {
                        isRegular = false;
                        break;
                    }
                }
                Console.WriteLine((isRegular && questionCount % 2 == 0 && s[s.Length-1] != '(') ? ("YES") : ("NO"));
            }
            Console.ReadLine();
            return;
        }
    }
}
