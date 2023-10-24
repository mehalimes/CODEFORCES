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
            string[] tokens = Console.ReadLine().Split(' ');
            int a = Convert.ToInt32(tokens[0]);
            int b = Convert.ToInt32(tokens[1]);
            int usedCandleCount = 0;
            while(a >= b)
            {
                int div = a / b;
                usedCandleCount += div * b;
                a -= div * b;
                a += div;
            }
            usedCandleCount += a;
            Console.WriteLine(usedCandleCount);
            //Console.ReadLine();
        }
    }
}
