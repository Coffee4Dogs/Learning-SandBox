create database CEUTEC;
use CEUTEC;
create table estudiante (
	id int auto_increment primary key,
	nombre varchar(50) not null,
	apellido varchar(50) not null,
	correo varchar(50) not null,
	edad int not null,
	carrera varchar(50) not null
);

use CEUTEC;
INSERT INTO estudiante (
	`nombre`, `apellido`, `correo`, `edad`, `carrera`
)values
("Jack", "Lagos", "jack.lagos@gmail.com", 27, "Ingenieria"),
("Elvira", "Rivera", "elv.riv@gmail", 20, "Ingenieria"),
("Ana", "Lopez", "Ana.Lopez@gmail.com", 23, "Abogacia"),
("Luis", "Lopez", "Luis.Lopez@gmail.com", 24, "Arquitectura"),
("Carmen", "Perez", "carpe@gmail.com", 25, "Enfermeria"),
("Jose", "Gomez", "jo.gom@gmail.com", 26, "Psicologia"),
("Laura", "Fernandez", "rau.per@gmail.com", 27, "Periodismo"),
("Pedro", "Rodriguez", "Pedro.rod@gmail.com", 28, "Contaduria"),
("Francisco", "Ramirez", "fran.ram@gmail.com", 30, "Psicologia"),
("Hector", "Daniel", "hec.dan@gmail.com", 30, "Psicologia");





