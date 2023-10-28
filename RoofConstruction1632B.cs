using System;
using System.Collections.Generic;
using System.Diagnostics.SymbolStore;
using System.Net.Sockets;
using System.Runtime.InteropServices;

// author: mehalimes 
// 1632B Roof Construction Codeforces Solution 
// IDEA : Adhish K Youtube Channel
/* 

 if the first element of the binary form of two number is the same
 then the xor value is minimized (and has same length of bitset)

 to concatenate the two subarray of bitset we get a bigger value; to minimize
 it we just push a zero to end

 */


namespace Project1
{
    internal class Program
    {
        static bool isPowerOfTwo(long x)
        {
            string binaryForm = Convert.ToString(x, 2);
            int oneCount = 0;
            for(int i = 0; i < binaryForm.Length; i++)
            {
                if (binaryForm[i] == '1')
                {
                    oneCount++;
                }
            }
            if(oneCount == 1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        static void Main(string[] args)
        {
            long t = Convert.ToInt64(Console.ReadLine());
            for(long tc = 0; tc < t; tc++)
            {
                long n = Convert.ToInt64(Console.ReadLine());
                bool isZeroAdded = false;
                List<long> ar = new List<long>();
                for(long i = n-1; i >=  1; i--)
                {
                    ar.Add(i);
                    if (isPowerOfTwo(i) == true && !isZeroAdded)
                    {
                        ar.Add(0);
                        isZeroAdded = true;
                    }
                }
                foreach(long x in ar)
                {
                    Console.Write(x + " ");
                }
                Console.WriteLine();
            }
            Console.ReadLine();
            return;
        }
    }
}
