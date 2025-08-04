import 'package:flutter/material.dart';
import 'square.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        colorScheme: ColorScheme.fromSeed(seedColor: Colors.deepPurple),
      ),
      home: InitialWidget(),
    );
  }
}


class InitialWidget extends StatelessWidget {
  String parentMessage = 'Hola mundo';
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(

        // <--- Centrar el Titulo --->
        centerTitle: true,

        // <--- Propiedades del Texto --->
        title: Text("Jack H. L. M.",
          style: TextStyle(
          color: Color.fromARGB(243, 247, 217, 64), 
          fontSize: (32), 
          fontWeight: (FontWeight.bold),
          ), 
        ),
        
        // <-- Color del fondo en el AppBar -->
        backgroundColor: Color.fromARGB(255, 25, 25, 25),
        
      ),
      body: Column(
        mainAxisAlignment: MainAxisAlignment.spaceAround,
        children: [
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              Square(message: parentMessage,),
              Square(message: parentMessage,),
              Square(message: parentMessage,),
              Square(message: 'Other message',),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              Square(message: parentMessage,),
              Square(message: parentMessage,),
              Square(message: parentMessage,),
              Square(message: 'Other message',),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              Square(message: parentMessage,),
              Square(message: parentMessage,),
              Square(message: parentMessage,),
              Square(message: 'Other message',),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              Square(message: parentMessage,),
              Square(message: parentMessage,),
              Square(message: parentMessage,),
              Square(message: 'Other message',),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              Square(message: parentMessage,),
              Square(message: parentMessage,),
              Square(message: parentMessage,),
              Square(message: 'Other message',),
            ],
          ),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              Square(message: parentMessage,),
              Square(message: parentMessage,),
              Square(message: parentMessage,),
              Square(message: 'Other message',),
            ],
          )
        ],
      ),

      // <-- Color de fondo en el body -->
      backgroundColor: Color.fromARGB(255, 25, 25, 25),
    );
  }
}
