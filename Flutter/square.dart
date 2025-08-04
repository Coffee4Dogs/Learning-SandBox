import 'package:flutter/material.dart';
import 'counter.dart';

class Square extends StatelessWidget {
  String message = '';
  // Prop drilling
  Square({super.key, required this.message});

  @override
  Widget build(BuildContext context) {
    return Container(
      width: 80.0,
      height: 80.0,
      decoration: BoxDecoration(
        // <-- Color del fondo en el Cuadrito -->
        color: const Color.fromARGB(255, 208, 208, 208),

        // <-- El borde del "Cuadro" es un circulo. Se aumento de 20 a 100 (para hacer el circulo). -->
        borderRadius: BorderRadius.circular(100)
        
      ),
      child: Center(
        child: Counter(),
      ),
    );
  }
}



// class AppBar extends StatelessWidget {
//   const AppBar({super.key});

//   @override
//   Widget build(BuildContext context) {
//     // return const Placeholder();
//     return MaterialApp(
//       home: Scaffold(
//         backgroundColor: Color.fromARGB(250, 25, 25, 225),
//         // body: Text("data"),
//       ),
//     );
//   }
// }





// class MyApp extends StatelessWidget {
//   const MyApp({super.key});

//   @override
//   Widget build(BuildContext context) {
//     // return const Placeholder();
//     return MaterialApp(
//       home: AppBar(
//         backgroundColor: Color.fromARGB(254, 43, 222, 64),
//       ),
//     );
//   }
// }
