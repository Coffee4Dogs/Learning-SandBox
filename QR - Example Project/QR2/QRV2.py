import qrcode

enfermedad = "Epilepsia Tonico-Clonico."
medicina = "Topictal ER - cada 8 hrs (Acido Valprohico)"
contacto = "98555415 / 32713008"
id = "ID:0826-1997-00276"
edad = "23-jun-1997"

informacion = f"Enfermedad: {enfermedad}\nMedicamentos: {medicina}\nContacto de emergencia: {contacto}\nIdentidad: {id}\nEdad: {edad}"

qr = qrcode.QRCode(version=1, error_correction=qrcode.constants.ERROR_CORRECT_L)
qr.add_data(informacion)
qr.make(fit=True)

# Crear una imagen del código QR y guardarla
qr.make_image(fill_color="black", back_color="white").save("informacion_medica.png")
