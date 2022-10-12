import javax.swing.*;

public class BuscaLinear {

    public static void linearSearchNumber(int[] listaNum, int numDigitado) {
        int i = 0;

        while(true) {
            if (numDigitado == listaNum[i]) {
                JOptionPane.showMessageDialog(null, "O número " + numDigitado + " está na posição: " + i);
                break;
            } else if(numDigitado != listaNum[i]) {
                i++;
            }
        }
    }


    public static void linearSearchString(String[] listaString, String strDigitada) {
        int i = 0;

        while(!listaString[i].equals(strDigitada)) {
            i++;
        }

        if(listaString[i].equals(strDigitada)) {
            JOptionPane.showMessageDialog(null, "A palavra '"+ strDigitada + "' está na posição: " + i);
        }
    }


    public static void main(String[] args) {
        int opc;

        int[] listaNum = new int[5];
        String[] listaString = new String[5];
        Object[] options = {"Número", "String"};

        opc = JOptionPane.showOptionDialog(null, "Escolha o tipo de lista que deseja criar:", "Busca Linear",
                JOptionPane.DEFAULT_OPTION, JOptionPane.DEFAULT_OPTION, null, options, options[0]);

        switch (opc){
            case 0:

                for(int i = 0; i < listaNum.length; i++) {
                    listaNum[i] = Integer.parseInt(JOptionPane.showInputDialog("Digite o " + (i+1) +"/5 número: "));
                }
                int numDigitado = Integer.parseInt(JOptionPane.showInputDialog("Qual número deseja Buscar: "));

                linearSearchNumber(listaNum, numDigitado);

                break;

            case 1:

                for(int i = 0; i < listaString.length; i++) {
                    listaString[i] = JOptionPane.showInputDialog("Digite a " + (i+1) +"/5 palavra: ");
                }
                String strDigitada = JOptionPane.showInputDialog("Qual palavra deseja Buscar: ");

                linearSearchString(listaString, strDigitada);

                break;
        }
    }
}
