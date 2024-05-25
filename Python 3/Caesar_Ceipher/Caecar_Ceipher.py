# sentence = input("Ingrese una oración para encriptar con el Cifrado César:")
# print("Ingresaste:\n" + str(sentence))

# if len(sentence) > 0:
#     result = sentence[0]


import hashlib
import os

def calculate_sha512_with_salt(password):
    # Generar una sal aleatoria
    salt = os.urandom(16)  # Sal de 16 bytes
    # Concatenar la sal y la contraseña
    data = salt + password.encode()

    # Crear el objeto SHA-512 y calcular el hash
    sha512 = hashlib.sha512()
    sha512.update(data)
    hash_result = sha512.hexdigest()

    return salt.hex(), hash_result  # Devuelve la sal y el hash

# Ejemplo de uso
password = "mi_super_contraseña"
salt, hash_result = calculate_sha512_with_salt(password)
print("Sal:", salt)
print("Hash SHA-512 con sal:", hash_result)
