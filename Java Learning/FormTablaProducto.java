
package tablaproductos865;
import javax.swing.table.DefaultTableModel;


public class FormTablaProducto extends javax.swing.JFrame {
    
    DefaultTableModel dtm = new DefaultTableModel();
    public static int NR = 5;//Cantidad de renglones que tengo.
    
    public void AgregarReng(){   
        for(int k=1; k<=NR;k++){
            dtm.addRow(new Object[]{"", "","","",""});
        }
    }
    
    public void EliminarReng(){   
        int nreng=dtm.getRowCount();
            if(nreng>0){
                for(int k=1; k<=nreng;k++){
                    dtm.removeRow(0);
                }
                
            }
                
    }
    
    
    public void Listar(){
        EliminarReng();
        AgregarReng();
        //Las tablas comienzan con Fila0, Columna0.
        dtm.setValueAt("P01", 0, 0); 
        dtm.setValueAt("P02", 1, 0);
        dtm.setValueAt("P03", 2, 0);
        dtm.setValueAt("P04", 3, 0);
        dtm.setValueAt("P05", 4, 0);
        
        dtm.setValueAt("Queso", 0, 1); 
        dtm.setValueAt("Papas", 1, 1);
        dtm.setValueAt("Margarina", 2, 1);
        dtm.setValueAt("Huevos", 3, 1);
        dtm.setValueAt("Chile(4 OZ)", 4, 1);
        
        dtm.setValueAt("3", 0, 2); 
        dtm.setValueAt("2", 1, 2);
        dtm.setValueAt("1", 2, 2);
        dtm.setValueAt("2", 3, 2);
        dtm.setValueAt("3", 4, 2);
        
        dtm.setValueAt("47.50", 0, 3); 
        dtm.setValueAt("8.45", 1, 3);
        dtm.setValueAt("9.30", 2, 3);
        dtm.setValueAt("45.00", 3, 3);
        dtm.setValueAt("7.20", 4, 3);
        
        dtm.setValueAt("False", 0, 4); 
        dtm.setValueAt("False", 1, 4);
        dtm.setValueAt("True", 2, 4);
        dtm.setValueAt("False", 3, 4);
        dtm.setValueAt("True", 4, 4);
        
    }//Fin del metodo Listar
    
    public FormTablaProducto(){
        initComponents();
        String Titulo[]= {"CodProd", "Producto", "Cantidad", "Precio", "Grab"};
        dtm.setColumnIdentifiers(Titulo);
        jTable1.setModel(dtm);
        Listar();
        

    }//Fin del Constructor

    /**
     * Creates new form FormTablaProducto
     */
   

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">                          
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        Eliminar_Reng = new javax.swing.JButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        jTable1 = new javax.swing.JTable();
        Agregar_Reng = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setBackground(new java.awt.Color(8, 8, 8));

        jPanel1.setBackground(new java.awt.Color(8, 8, 8));

        Eliminar_Reng.setText("Eliminar Renglones");
        Eliminar_Reng.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                Eliminar_RengActionPerformed(evt);
            }
        });

        jTable1.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null}
            },
            new String [] {
                "Title 1", "Title 2", "Title 3", "Title 4"
            }
        ));
        jScrollPane1.setViewportView(jTable1);

        Agregar_Reng.setText("Agregar Renglones");
        Agregar_Reng.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                Agregar_RengActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(64, 64, 64)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addComponent(Agregar_Reng)
                        .addGap(175, 175, 175)
                        .addComponent(Eliminar_Reng))
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.PREFERRED_SIZE, 453, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(112, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(33, 33, 33)
                .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 272, Short.MAX_VALUE)
                .addGap(57, 57, 57)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(Eliminar_Reng)
                    .addComponent(Agregar_Reng))
                .addGap(14, 14, 14))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>                        

    private void Agregar_RengActionPerformed(java.awt.event.ActionEvent evt) {                                             
        // TODO add your handling code here:
        AgregarReng();
    }                                            

    private void Eliminar_RengActionPerformed(java.awt.event.ActionEvent evt) {                                              
        // TODO add your handling code here:
        EliminarReng();
    }                                             

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(FormTablaProducto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(FormTablaProducto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(FormTablaProducto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(FormTablaProducto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new FormTablaProducto().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify                     
    private javax.swing.JButton Agregar_Reng;
    private javax.swing.JButton Eliminar_Reng;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTable jTable1;
    // End of variables declaration                   
}
