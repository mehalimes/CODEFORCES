using System;
using System.Collections;
using System.Collections.Generic;

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
                int x = Convert.ToInt32(tokens[0]);
                int y = Convert.ToInt32(tokens[1]);
                List<int> ans_ar = new List<int>();
                int element = 1;
                for(int i = 1; element <= y && ans_ar.Count < x; i++)
                {
                    int rp = x - i;
                    int re = y - element;
                    if (re < rp)
                    {
                        break;
                    }
                    else
                    {
                        ans_ar.Add(element);
                        element += i;
                    }
                }
                // outputing the ans_ar
                //for(int i = 0; i < ans_ar.Count; i++)
                //{
                //    Console.Write(ans_ar[i] + " ");
                //}
                //Console.WriteLine();
                int size = ans_ar.Count;
                for(int i = 0; i < x-size; i++)
                {
                    ans_ar.Add(ans_ar[ans_ar.Count - 1]+1);
                }
                // outputing the ans_ar
                for(int i = 0; i < ans_ar.Count; i++)
                {
                    Console.Write(ans_ar[i] + " ");
                }
                Console.WriteLine();
                //Console.WriteLine();
            }
            //Console.ReadLine();
            return;
        }
        
    }
}

