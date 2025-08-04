import 'dart:async';

import 'package:flutter/material.dart';


class Counter extends StatefulWidget {

  @override
  State<Counter> createState() => _CounterState();
}


class _CounterState extends State<Counter> {

  late Timer _counterTimer;
  
  // <-- Numero max. en que inicia el contador. -->
    // Cambios:
      // <-- Se cambio de 10 a 100 -->
  int _counter = 1000;

  @override
  void initState() {
    super.initState();
    _initCounter();
  }


  void _initCounter() {
    // <-- Duration controla lo rapido que cambia _counterTimer -->
      // <-- Cambios: -->
        // <-- Duration: seconds: 1 | Duration: miliseconds: 100. -->
        
    _counterTimer = Timer.periodic(Duration(milliseconds: 100), (_){
      if(_counter == 0) {
        _counter = 10;
      } else {
        --_counter;
      }
      setState((){});
    });
  }

  @override
  void dispose() {
    super.dispose();
    _counterTimer.cancel();
  }

  @override
  Widget build(BuildContext context) {
    return Container(
      child: Text(_counter.toString(), style: TextStyle( fontWeight: FontWeight.bold, color: const Color.fromARGB(255, 13, 13, 13))),
    );
  }
}
