using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Data.SqlClient;
using System.Diagnostics.Eventing.Reader;
using System.Runtime.InteropServices;
// deadly laser codeforces solution
namespace Project1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int t = Convert.ToInt32(Console.ReadLine());
            for (int tc = 0; tc < t; tc++)
            {
                string[] tokens = Console.ReadLine().Split(' ');
                int n = Convert.ToInt32(tokens[0]);
                int m = Convert.ToInt32(tokens[1]);
                int sx = Convert.ToInt32(tokens[2]);
                int sy = Convert.ToInt32(tokens[3]);
                int d = Convert.ToInt32(tokens[4]);
                // solution goes here
                bool up = false, down = false, left = false, right = false;
                if(sx - d <= 1)
                {
                    left = true;
                }
                if(sx + d >= n)
                {
                    right = true;
                }
                if(sy + d >= m)
                {
                    down = true;
                }
                if(sy - d <= 1)
                {
                    up = true;
                }
                if((up && down) || (right && left) || (left && up) || (down && right))
                {
                    Console.WriteLine(-1);
                }
                else
                {
                    Console.WriteLine(n + m - 2);
                }
            }
            //Console.ReadLine();
            return;
        }
    }
}

