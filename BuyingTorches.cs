using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Diagnostics.Eventing.Reader;
using System.Runtime.InteropServices;
// author: mehalimes
// Buying torches codeforces solution
namespace Project1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int t = Convert.ToInt32(Console.ReadLine());
            for(int tc = 0; tc < t; tc++)
            {
                string[] tokens = Console.ReadLine().Split(' ');
                decimal x = Convert.ToInt64(tokens[0]);
                long y = Convert.ToInt64(tokens[1]);
                long k = Convert.ToInt64(tokens[2]);
                decimal stickNeeded = k * y + k;
                long currentSticks = 1L;
                long currentCoals = 0L;
                long tradeCount = 0L;
                tradeCount += Convert.ToInt64(Math.Ceiling((stickNeeded - 1) / (x - 1)));
                tradeCount += k;
                Console.WriteLine(tradeCount);
            }
            //Console.ReadLine();
            return;
        }
    }
}

