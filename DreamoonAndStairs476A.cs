using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace Project1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] tokens = Console.ReadLine().Split(' ');
            int n = Convert.ToInt32(tokens[0]);
            int m = Convert.ToInt32(tokens[1]);
            int twoCount = n / 2;
            int oneCount = n % 2;
            while((twoCount > 0 && (oneCount + twoCount) % m != 0))
            {
                if ((oneCount + twoCount) % m == 0)
                    break;
                twoCount--;
                oneCount += 2;
            }
            if((oneCount + twoCount) % m == 0)
            {
                Console.WriteLine(oneCount + twoCount);
            }
            else
            {
                Console.WriteLine(-1);
            }
            Console.ReadLine();
            return;
        }
    }
}
