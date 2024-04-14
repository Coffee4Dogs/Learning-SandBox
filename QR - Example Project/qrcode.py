import qrcode

# Definir la información que deseas codificar en el código QR
tipo_sangre = "A+"
tipo_epilepsia = "Tónico-Clónico"

# Formatear la información en una cadena de texto
informacion = f"Tipo de sangre: {tipo_sangre}\nTipo de epilepsia: {tipo_epilepsia}"

# Generar el código QR
qr = qrcode.QRCode(version=1, error_correction=qrcode.constants.ERROR_CORRECT_L)
qr.add_data(informacion)
qr.make(fit=True)

# Crear una imagen del código QR y guardarla
qr.make_image(fill_color="black", back_color="white").save("informacion_medica.png")

print("Código QR generado con la información médica.")