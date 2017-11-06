    class Program
    {
        static void Main()
        {
            string strn;
            int j;
            Console.Write("Enter any String: ");
            strn = Console.ReadLine();

            bool flag = true;
            j = (strn.Length - 1);

            for (int i = 0; i <= (strn.Length / 2); j--, i++)
            {
                if (strn[i] != strn[j])
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
                Console.WriteLine("Given String is Palindrome...");
            else
                Console.WriteLine("Given String is not a Palindrome...");

            Console.ReadLine();
        }
