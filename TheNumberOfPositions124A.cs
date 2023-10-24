using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
// author: mehalimes
// The Number Of Positions Codeforces Solution 124A
// IDEA : mehalimes
namespace Project1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] tokens = Console.ReadLine().Split(' ');
            int n = Convert.ToInt32(tokens[0]);
            int a = Convert.ToInt32(tokens[1]);
            int b = Convert.ToInt32(tokens[2]);
            int[,] list_ar = new int[n, 2];
            for(int i = 0; i < n; i++)
            {
                list_ar[i, 0] = i;
                list_ar[i, 1] = n - i - 1;
            }
            int ans = 0;
            for(int i = 0; i < n; i++)
            {
                if (list_ar[i,0] >= a && list_ar[i,1] <= b)
                {
                    ans++;
                }
            }
            Console.WriteLine(ans);
            Console.ReadLine();
            return;
        }
    }
}
