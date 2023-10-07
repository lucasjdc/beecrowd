using System;
class Progam {
    static void Main () {
        Console.Write("Número de casos: ");
        int casos = 0;
        int anos = 102;
        
        casos = int.Parse(Console.ReadLine());
        
        for (int i = 0; i < casos; i++) {
            string entrada = Console.ReadLine();
            string[] valores = entrada.Split(' ');
            int pa = int.Parse(valores[0]);
            int pb = int.Parse(valores[1]);
            double g1 = double.Parse(valores[2], System.Globalization.CultureInfo.InvariantCulture);
            //Console.WriteLine(g1);
            double g2 = double.Parse(valores[3], System.Globalization.CultureInfo.InvariantCulture);
            //Console.WriteLine(g2);

            for (int j = 1; j < anos; j++) {
                pa = (int)(pa + (pa * g1 / 100));
                pb = (int)(pb + (pb * g2 / 100));
                if  (pb < pa && j < 101) {
                    Console.WriteLine(j + " anos.");
                    break;
                }
                if ( j > 100) {
                    Console.WriteLine("Mais de 1 seculo.");
                    break;
                }
            }
        }
    }
}