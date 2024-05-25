from flask import Flask, jsonify, request
import pymysql
from flask_cors import CORS


app = Flask(__name__)

 

app.config['MYSQL_HOST'] = 'localhost'

app.config['MYSQL_USER'] = 'root'
#password
app.config['MYSQL_PASSWORD'] = 'password'

# Nombre de la base de datos
app.config['MYSQL_DB'] = 'CEUTEC'
 

conexion = pymysql.connect(

    host = app.config['MYSQL_HOST'],

    user = app.config['MYSQL_USER'],
    
    password= app.config['MYSQL_PASSWORD'],

    db = app.config['MYSQL_DB']

)

CORS(app)


#/
@app.route('/')
def index():
    return 'Hola Mundo'

#/usuario
@app.route('/usuario', methods=['GET'])
def listar_usuarios():
    try:
        cursor = conexion.cursor()
        sql = "SELECT * FROM estudiante"
        cursor.execute(sql)
        datos = cursor.fetchall()
        usuarios = []
        for fila in datos:
            usuario = {'id': fila[0], 'nombre': fila[1], 'apellido': fila[2], 'correo': fila[3], 'edad': fila[4], 'carrera': fila[5],}
            usuarios.append(usuario)
        return jsonify({'usuarios': usuarios, 'mensaje': "usuarios listados.", 'exito': True})
    except Exception as aex:
        return jsonify({'mensaje': "Error", 'exito': False})
        


# def leer_usuario_bd(usuario):
#     try:
#         cursor = conexion.cursor()
#         sql = "SELECT  nombre, usuario, password FROM usuario WHERE usuario = '{0}'".format(usuario)
#         cursor.execute(sql)
#         datos = cursor.fetchone()
#         if datos != None:
#             curso = { 'nombre': datos[0], 'usuario': datos[1], 'password': datos[2]}
#             return curso
#         else:
#             return None
#     except Exception as ex:
#         raise ex

# @app.route('/usuario', methods=['POST'])
# def registrar_usuario():
#     # print(request.json)
#     if (request.json['nombre'] and request.json['usuario'] and request.json['password']):
#         try:
#             usuario = leer_usuario_bd(request.json['usuario'])
#             if usuario != None:
#                 return jsonify({'mensaje': "Código ya existe, no se puede duplicar.", 'exito': False})
#             else:
#                 cursor = conexion.cursor()
#                 sql = """INSERT INTO usuario (nombre, usuario, password) 
#                 VALUES ('{0}', '{1}', '{2}')""".format(request.json['nombre'],
#                                                   request.json['usuario'], request.json['password'])
#                 cursor.execute(sql)
#                 conexion.commit()  # Confirma la acción de inserción.
#                 return jsonify({'mensaje': "Usuario registrado.", 'exito': True})
#         except Exception as ex:
#             return jsonify({'mensaje': "Error", 'exito': False})
#     else:
#         return jsonify({'mensaje': "Parámetros inválidos...", 'exito': False})


# def leer_usuario_bd_by_id(id):
#     try:
#         cursor = conexion.cursor()
#         sql = "SELECT  nombre, usuario, password FROM usuario WHERE id = '{0}'".format(id)
#         cursor.execute(sql)
#         datos = cursor.fetchone()
#         if datos != None:
#             curso = { 'nombre': datos[0], 'usuario': datos[1], 'password': datos[2]}
#             return curso
#         else:
#             return None
#     except Exception as ex:
#         raise ex

# @app.route('/estudiante/<id>', methods=['PUT'])
# def actualizar_usuario(id):
#     if (request.json['nombre'] and request.json['usuario'] and request.json['password']):
#         try:
#             usuario = leer_usuario_bd_by_id(id)
#             if usuario != None:
#                 cursor = conexion.cursor()
#                 sql = """UPDATE usuario SET nombre = '{0}', usuario = '{1}' , password = '{2}' 
#                 WHERE id = '{3}'""".format(request.json['nombre'], request.json['usuario'], request.json['password'], id)
#                 cursor.execute(sql)
#                 conexion.commit()  # Confirma la acción de actualización.
#                 return jsonify({'mensaje': "Usuario actualizado.", 'exito': True})
#             else:
#                 return jsonify({'mensaje': "Usuario no encontrado.", 'exito': False})
#         except Exception as ex:
#             return jsonify({'mensaje': "Error", 'exito': False})
#     else: 
#         return jsonify({'mensaje': "Parámetros inválidos...", 'exito': False})


# @app.route('/usuario/<id>', methods=['DELETE'])
# def eliminar_usuario(id):
#     try:
#         usuario = leer_usuario_bd_by_id(id)
#         if usuario != None:
#             cursor = conexion.cursor()
#             sql = "DELETE FROM usuario WHERE id = '{0}'".format(id)
#             cursor.execute(sql)
#             conexion.commit()  # Confirma la acción de eliminación.
#             return jsonify({'mensaje': "Usuario eliminado.", 'exito': True})
#         else:
#             return jsonify({'mensaje': "Usuario no encontrado.", 'exito': False})
#     except Exception as ex:
#         return jsonify({'mensaje': "Error", 'exito': False})

if __name__ == '__main__':
    app.run(debug=True, host='0.0.0.0', port=8000)
    