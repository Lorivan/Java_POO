import com.sun.source.tree.ImportTree;

import java.util.Locale;
import java.util.logging.XMLFormatter;

public class Main   {
    public static void main (String[] args) {
        String nome = "Maria";
        int idade = 44;
        double salario = 4500.0;
        double x = 10.35784;
        System.out.println(x);
        System.out.printf("%.2f%n",x);
        System.out.printf("%.4f%n",x);
        Locale.setDefault(Locale.US);
        System.out.printf("%.4f%n",x);
        System.out.println("RESULTADO = " + x +" METROS");
        System.out.printf("RESULTADO = %.2f METROS%n", x);
        System.out.printf("%s tem %d anos  e ganha R$ %.2f reais%n",nome,idade,salario);

    }
}