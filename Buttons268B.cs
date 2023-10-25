using System;
using System.Collections.Generic;


// author: mehalimes
/* 
 
 
 1 2 3 4 5  ----> pswd
 5
 4 
 3 
 2 
 1 5
 1 4
 1 3
 1 2 5
 1 2 4
 1 2 3 5
 1 2 3 4 5 ----> add this in the end
 
 */
// IDEA : mehalimes
namespace Project1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            long ans = 0L;
            for(int i = 1; i < n; i++)
            {
                ans += ((n - i) * i);
            }
            ans += n;
            Console.WriteLine(ans);
            Console.ReadLine();
            return;
        }
    }
}
