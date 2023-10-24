using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

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
                string s = Console.ReadLine();
                int open = 0, close = 0;
                int count = 0;
                for(int i = 0; i < s.Length; i++)
                {
                    if (s[i] == '(')
                    {
                        open++;
                    }
                    else if (s[i] == ')')
                    {
                        close++;
                    }
                    if(close > open)
                    {
                        count++;
                        close--;
                    }
                }
                Console.WriteLine(count);
            }
            //Console.ReadLine();
            return;
        }
    }
}
